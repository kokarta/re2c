/* Generated by re2c */
#line 1 "conditions/condition_02_cg.re"
// re2c $INPUT -o $OUTPUT -cg

#line 6 "conditions/condition_02_cg.c"
{
	YYCTYPE yych;
	static void *yyctable[3] = {
		&&yyc_0,
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_0:
#line 4 "conditions/condition_02_cg.re"
	{ return NULL; }
#line 19 "conditions/condition_02_cg.c"
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') goto yy6;
	if (yych <= 'b') goto yy8;
yy5:
yy6:
	++YYCURSOR;
#line 5 "conditions/condition_02_cg.re"
	{ return "a"; }
#line 32 "conditions/condition_02_cg.c"
yy8:
	++YYCURSOR;
#line 6 "conditions/condition_02_cg.re"
	{ return "b"; }
#line 37 "conditions/condition_02_cg.c"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'b') goto yy13;
yy13:
	++YYCURSOR;
#line 6 "conditions/condition_02_cg.re"
	{ return "b"; }
#line 47 "conditions/condition_02_cg.c"
}
#line 8 "conditions/condition_02_cg.re"

conditions/condition_02_cg.re:2:0: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_02_cg.re:2:0: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_02_cg.re:2:0: warning: condition numbers may change, use '/*!conditions:re2c*/' directive to generate reliable condition identifiers [-Wcondition-order]
