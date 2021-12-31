/* Generated by re2c */
#line 1 "layout/flex_braces.re"
// re2c $INPUT -o $OUTPUT

// re2c block that starts with %{ on a new line

#line 8 "layout/flex_braces.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
#line 5 "layout/flex_braces.re"
	{ return "%{ * {} %}"; }
#line 15 "layout/flex_braces.c"
}
#line 6 "layout/flex_braces.re"


// re2c block that starts with %{ on a new line with spaces

#line 22 "layout/flex_braces.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
#line 10 "layout/flex_braces.re"
	return "%{ * {} %}"; /* %{ %} */ // %{ %}
#line 29 "layout/flex_braces.c"
}
#line 11 "layout/flex_braces.re"


// not a block, just a %{ in a string
const char *s = "%{ * {} %}";

// re2c erroneously thinks %{ in a string is a block start
const char *s = "begin...\

#line 40 "layout/flex_braces.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
#line 18 "layout/flex_braces.re"
	{}
#line 47 "layout/flex_braces.c"
}
#line 18 "layout/flex_braces.re"
...end";

// not a block, just a %{ in a multiline comment
/* %{ * {} %} */

// re2c erroneously thinks %{ in a comment is a block start
/*

#line 58 "layout/flex_braces.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
#line 26 "layout/flex_braces.re"
	{}
#line 65 "layout/flex_braces.c"
}
#line 27 "layout/flex_braces.re"

*/

// not a block, just a %{ in a oneline comment
// %{ * {} %}

// re2c erroneously thinks %{ in a macro is a block start
#define X \

#line 77 "layout/flex_braces.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
#line 35 "layout/flex_braces.re"
	{}
#line 84 "layout/flex_braces.c"
}
#line 35 "layout/flex_braces.re"
