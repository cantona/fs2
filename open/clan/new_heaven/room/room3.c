inherit ROOM;

[0
1
35m□[1m@[1m□[1mJ[1m□[1m□[1m□[1m□[1m□[1mN[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mW[1m□[1mA[1m□[1mQ[1m□[1mC[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1my[1m□[1mA[1m□[1m□[1m□[1mO[1m□[1mm[1m□[1m□[1m□[1mC[0m
         [0
1
36m□[1my[0m [0
1
5
33m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5mL[1
5m [1
5m□[1
5m□[0m
            [0
1
5
33m□[1
5mj[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5mt[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5mF[0m
[0
1
5
33m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m□[1
5m@[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5mE[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5mC[0m
[0
1
5
33m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m [1
5m□[1
5mE[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5m~[1
5m [1
5m□[1
5m□[1
5m [1
5m□[1
5ms[1
5m [1
5m□[1
5m`[0m [0
1
36m□[1mz[0m
[0
1
32m□[1mj[1m□[1mU[1m□[1m□[1m□[1m□[1m□[1mm[1m□[1m□[1m□[1m@[1m□[1m□[1m□[1mM[1m□[1mC[1m□[1mA[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mo[1m□[1mX[1m□[1mN[1m□[1mN[1m□[1m□[1m□[1mH[1m□[1m□[1m□[1mC[1m□[1m□[1m□[1m□[0m
[0
1
32m□[1mO[1m□[1m@[1m□[1m□[1m□[1m□[1m□[1mo[1m□[1mF[1m□[1m□[1m□[1m□[1m□[1mL[1m□[1mQ[1m□[1m□[1m□[1mC[1m□[1mk[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m@[1m□[1mM[1m□[1mj[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mA[0m
[0
1
32m□[1m□[1m□[1m□[1m□[1m□[1m□[1mH[1m□[1mL[1m□[1m_[1m□[1mA[1m□[1m□[1m□[1mL[1m□[1mT[1m□[1m□[1m□[1m□[1m□[1ml[1m□[1m□[1m□[1m□[1m□[1m[[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mA[1m□[1m□[1m□[1mO[1m□[1m□[0m
[0
1
32m□[1mH[1m□[1mC[1m□[1m□[1m□[1m□[1m□[1m@[1m□[1my[1m□[1m□[1m□[1mv[1m□[1m□[1m□[1mJ[1m□[1mu[1m□[1m□[1m□[1m□[1m□[1mA[1m□[1m□[1m□[1m□[1m□[1mi[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mC[1m□[1ma[0m
[0
1
32m□[1mO[1m□[1mW[1m□[1m□[1m□[1m@[1m□[1mg[1m□[1m□[1m□[1m□[1m□[1mm[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mn[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mU[1m□[1m□[1m□[1m□[1m□[1m□[1m□[1mC[0m
hp
l
inherit ROOM;
void create() {
        set("short","空房间");
	set( "exits", ([
		"east"      : "/open/clan/new_heaven/room/room4",
	]) );
	set( "owner", "doctor" );
	set( "light_up", 1 );
        set("long","这是一间什么都没有的空房间。\n");
        set("no_transmit",1);
        set("cmkroom",1);
        setup();
        replace_program(ROOM);
}
