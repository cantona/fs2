inherit ROOM;
void create() {
	set( "short", "$HIW$高级练武场$HIW$" );
	set( "owner", "biwem" );
	set( "object", ([
		"amount4"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/ping/obj/cloud_fan",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/magic-manor/obj/fon-sky-sword",
		"file8"    : "/open/capital/obj/blade2",
		"amount6"  : 1,
	]) );
	set( "build", 10061 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room121",
		"south"     : "/open/clan/sky-wu-chi/room/room176.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
       这里到处布满了[0;1;5;31m□[1;5m□[1;5m□[1;5m□[0m，在空气中又带着[0;1;5;35m□[1;5mC[1;5m□[1;5m□[0m，感觉
   就好像到了一处剑士的修练区，在远处有一道高大的人
   影，仔细一看原来是[0;1;5;36m□[1;5mp[1;5m□[1;5m□[0m在那里休息，原来这里是[0;1;5;36m□[1;5mp[1;5m□[1;5m□[0m
   的[0;1;5;32m□[1;5mm[1;5m□[1;5m\[1;5m□[1;5m□[1;5m□[1;5mM[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[0m。

LONG);
	setup();
	replace_program(ROOM);
}
