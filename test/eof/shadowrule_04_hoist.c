/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// EMPTY rule is shadowed and dead-code-eliminated. Empty string is a no-match.
// Tags are hoisted.

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy2;
	default:	goto yy4;
	}
yy4:
	x = yyt1;
	{ /* R1 - here 'x' must be set */ }
}


// EMPTY rule is not shadowed and does match on empty input string. Tags are
// not hoisted because of the untagged fallback transition to EMPTY.

{
	YYCTYPE yych;
yyFillLabel0:
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy7;
	}
	if (YYLIMIT <= YYCURSOR) {
		if (YYFILL() == 0) goto yyFillLabel0;
		goto yyeof2;
	}
	yyt1 = YYCURSOR;
yy7:
	++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (YYFILL() == 0) goto yyFillLabel1;
		}
		goto yy9;
	}
yy9:
	x = yyt1;
	{ /* R1 - here 'x' must be set */ }
yyeof2:
	{ /* EOF - here 'x' must not be set */ }
}

eof/shadowrule_04_hoist.re:6:12: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
