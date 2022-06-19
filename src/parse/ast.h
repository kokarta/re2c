#ifndef _RE2C_AST_AST_
#define _RE2C_AST_AST_

#include <stdint.h>
#include <map>
#include <string>
#include <vector>

#include "src/msg/location.h"
#include "src/regexp/rule.h"

namespace re2c {

struct SemAct;
template <class Ty> class free_list;

struct ASTChar {
    uint32_t chr;
    loc_t loc;
};

struct ASTRange {
    uint32_t lower;
    uint32_t upper;
    loc_t loc;

    ASTRange(uint32_t low, uint32_t upp, const loc_t& loc)
        : lower(low), upper(upp), loc(loc) {}
};

// Abstract Syntax Tree.
// It must be immutable (as it is shared by different rules) and independent  of options.
struct AST {
    static free_list<AST*> flist;
    static constexpr uint32_t MANY = std::numeric_limits<uint32_t>::max();

    // Kinds of AST nodes.
    enum class Kind: uint32_t {
        NIL,     // empty (nil) node
        STR,     // character string, like "abc" or 'abc'
        CLS,     // character class, like [a-z] or [^a-z]
        DOT,     // any character except newline
        DEFAULT, // default rule *, matches any code unit, see note [default regexp]
        ALT,     // alternative of two nodes: x | y
        CAT,     // concatenation of two nodes: x y
        ITER,    // generalized repetition of two nodes: x{n,m} or x{n,} or x{n} or x* or x+
        DIFF,    // difference of two node (only applies to character classes)
        TAG,     // a tag, like @t (s-tag, single-valued tag) or #t (m-tag. multi-valued tag)
        CAP,     // capturing group (submatch group)
        REF      // non-capturing group
    } kind;

    union {
        struct {
            const std::vector<ASTChar>* chars;
            bool icase;
        } str;
        struct {
            const std::vector<ASTRange>* ranges;
            bool negated;
        } cls;
        struct {
            const AST* ast1;
            const AST* ast2;
        } alt;
        struct {
            const AST* ast1;
            const AST* ast2;
        } cat;
        struct {
            const AST* ast;
            uint32_t min;
            uint32_t max;
        } iter;
        struct {
            const AST* ast1;
            const AST* ast2;
        } diff;
        struct {
            const std::string* name;
            bool history;
        } tag;
        const AST* cap;
        struct {
            const AST* ast;
            const std::string* name;
        } ref;
    };
    loc_t loc;

    AST(const loc_t& loc, Kind k);
    ~AST();
};

struct ASTRule {
    const AST* ast;
    const SemAct* semact;

    ASTRule(const AST* r, const SemAct* a): ast(r), semact(a) {}
};

struct ASTBounds {
    uint32_t min;
    uint32_t max;
};

const AST* ast_nil(const loc_t& loc);
const AST* ast_str(const loc_t& loc, std::vector<ASTChar>* chars, bool icase);
const AST* ast_cls(const loc_t& loc, std::vector<ASTRange>* ranges, bool negated);
const AST* ast_dot(const loc_t& loc);
const AST* ast_default(const loc_t& loc);
const AST* ast_alt(const AST* a1, const AST* a2);
const AST* ast_cat(const AST* a1, const AST* a2);
const AST* ast_iter(const AST* a, uint32_t n, uint32_t m);
const AST* ast_diff(const AST* a1, const AST* a2);
const AST* ast_tag(const loc_t& loc, const std::string* n, bool h);
const AST* ast_cap(const AST* a);
const AST* ast_ref(const AST* a, const std::string& n);
bool ast_need_wrap(const AST* a);

} // namespace re2c

#endif // _RE2C_AST_AST_
