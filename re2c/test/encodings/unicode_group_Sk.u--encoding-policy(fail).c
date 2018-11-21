/* Generated by re2c */
#line 1 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sk:
	
#line 13 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00001FBC) {
		if (yych <= 0x000002C1) {
			if (yych <= 0x000000A8) {
				if (yych <= '_') {
					if (yych == '^') goto yy4;
				} else {
					if (yych <= '`') goto yy4;
					if (yych >= 0x000000A8) goto yy4;
				}
			} else {
				if (yych <= 0x000000B3) {
					if (yych == 0x000000AF) goto yy4;
				} else {
					if (yych <= 0x000000B4) goto yy4;
					if (yych == 0x000000B8) goto yy4;
				}
			}
		} else {
			if (yych <= 0x000002ED) {
				if (yych <= 0x000002DF) {
					if (yych <= 0x000002C5) goto yy4;
					if (yych >= 0x000002D2) goto yy4;
				} else {
					if (yych <= 0x000002E4) goto yy2;
					if (yych != 0x000002EC) goto yy4;
				}
			} else {
				if (yych <= 0x00000374) {
					if (yych <= 0x000002EE) goto yy2;
					if (yych <= 0x000002FF) goto yy4;
				} else {
					if (yych <= 0x00000375) goto yy4;
					if (yych <= 0x00000383) goto yy2;
					if (yych <= 0x00000385) goto yy4;
				}
			}
		}
	} else {
		if (yych <= 0x0000A6FF) {
			if (yych <= 0x00001FDF) {
				if (yych <= 0x00001FC1) {
					if (yych != 0x00001FBE) goto yy4;
				} else {
					if (yych <= 0x00001FCC) goto yy2;
					if (yych <= 0x00001FCF) goto yy4;
					if (yych >= 0x00001FDD) goto yy4;
				}
			} else {
				if (yych <= 0x00001FFC) {
					if (yych <= 0x00001FEC) goto yy2;
					if (yych <= 0x00001FEF) goto yy4;
				} else {
					if (yych <= 0x00001FFE) goto yy4;
					if (yych <= 0x0000309A) goto yy2;
					if (yych <= 0x0000309C) goto yy4;
				}
			}
		} else {
			if (yych <= 0x0000FBC1) {
				if (yych <= 0x0000A721) {
					if (yych <= 0x0000A716) goto yy4;
					if (yych >= 0x0000A720) goto yy4;
				} else {
					if (yych <= 0x0000A788) goto yy2;
					if (yych <= 0x0000A78A) goto yy4;
					if (yych >= 0x0000FBB2) goto yy4;
				}
			} else {
				if (yych <= 0x0000FF3F) {
					if (yych == 0x0000FF3E) goto yy4;
				} else {
					if (yych <= 0x0000FF40) goto yy4;
					if (yych == 0x0000FFE3) goto yy4;
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 98 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"
	{ goto Sk; }
#line 103 "encodings/unicode_group_Sk.u--encoding-policy(fail).c"
}
#line 14 "encodings/unicode_group_Sk.u--encoding-policy(fail).re"

}
static const unsigned int chars_Sk [] = {0x5e,0x5e,  0x60,0x60,  0xa8,0xa8,  0xaf,0xaf,  0xb4,0xb4,  0xb8,0xb8,  0x2c2,0x2c5,  0x2d2,0x2df,  0x2e5,0x2eb,  0x2ed,0x2ed,  0x2ef,0x2ff,  0x375,0x375,  0x384,0x385,  0x1fbd,0x1fbd,  0x1fbf,0x1fc1,  0x1fcd,0x1fcf,  0x1fdd,0x1fdf,  0x1fed,0x1fef,  0x1ffd,0x1ffe,  0x309b,0x309c,  0xa700,0xa716,  0xa720,0xa721,  0xa789,0xa78a,  0xfbb2,0xfbc1,  0xff3e,0xff3e,  0xff40,0xff40,  0xffe3,0xffe3,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Sk = new YYCTYPE [116];
	unsigned int buffer_len = encode_utf32 (chars_Sk, sizeof (chars_Sk) / sizeof (unsigned int), buffer_Sk);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Sk), reinterpret_cast<const YYCTYPE *> (buffer_Sk + buffer_len)))
		printf("test 'Sk' failed\n");
	delete [] buffer_Sk;
	return 0;
}