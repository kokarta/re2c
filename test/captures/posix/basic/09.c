/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy6;
	YYCURSOR = YYMARKER;
	goto yy1;
yy3:
	++YYCURSOR;
yy4:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 2;
	yypmatch[3] = YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy6:
	switch (yych) {
		case 0x00: goto yy4;
		case 'a': goto yy5;
		default: goto yy3;
	}
}

captures/posix/basic/09.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]