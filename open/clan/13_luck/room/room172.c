inherit ROOM;
void create() {
	set( "short", "��ƫ��" );
	set( "owner", "titanic" );
	set( "object", ([
		"amount10" : 1,
		"amount2"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"file2"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10050 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room171.c",
		"east"      : "/open/clan/13_luck/room/room139.c",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;35m��[1m��[1m��[1m��[1;32m��[1m��[1m��[1m\[1m��[1m��[1m��[1mD[1m��[1m`[1m��[1m��[1m��[1mh[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mQ[1m��[1m@[1m��[1mH[1m��[1m��[1m��[1mo[1m��[1m{[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mO[1m��[1m��[1m��[1m@[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1mA[1m��[1m��[1m��[1mF[1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1;32m��[1mt[1m��[1mW[1;35m��[1m��[1m��[1m��[1;32m��[1mA[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mn[1m��[1m��[0m
[0;1;32m��[1mv[1m��[1m��[1m��[1mA[1m��[1mg[1m��[1mL[1;36m��[1mC[1m��[1mC[1m��[1m|[1m��[1mQ[1m��[1mE[1m��[1m��[1;32m��[1m��[1m��[1m��[1m��[1m_[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mN[1m��[1mi[1m��[1mH[1m��[1m��[1m��[1mX[1;31m��[1m��[1m��[1m@[1m��[1mZ[1m��[1m��[1;32m��[1mA[0m
[0;1;32m��[1mA[1m��[1m��[1m��[1m��[1m��[1mv[1m��[1m��[1;31m��[1mA[1m��[1m��[1;32m��[1m}[1m��[1m��[1m��[1mA[1m��[1m|[1m��[1m��[1m��[1mo[1m��[1mZ[1m��[1m��[1m��[1m��[1m��[1m��[1;34m��[1mF[1m��[1m��[1;32m��[1mC[0m

LONG);
	setup();
	replace_program(ROOM);
}
