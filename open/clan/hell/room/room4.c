inherit ROOM;
void create() {
	set( "short", "$HIC$kalin$HIW$的$HIG$鸡丝头$NOR$" );
	set( "owner", "taxi" );
	set( "item_desc", ([
		"[0;5;36m□[5mR[5m□[5m□[5m□[5m□[5m□[5m□[0m" : @ITEM

[33mcow...马的B...色狼[0m[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
[33mcow...马的B...色狼[0m
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10270 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room44.c",
		"north"     : "/open/clan/hell/room/room43.c",
		"east"      : "/open/clan/hell/room/room54.c",
	]) );
	set( "long", @LONG
    经过了上次的祝融之灾...kalin损失惨重...
在痛定失痛后...猪神决定不再打混了...
这次猪神学乖了..好好写叙述....作各乖宝宝
eq..eq....回来吧..
eq..eq ........我爱你...
永永远远都不crash...........
嗯...就降...                    :)

$HIR$错字1..痛定(思)痛
错字2..作(个)乖宝宝
批..超白痴....12/20..(min)到此一□NOR$

  煤油冥纸的尸体(Corpse)
LONG);
	setup();
	replace_program(ROOM);
}
