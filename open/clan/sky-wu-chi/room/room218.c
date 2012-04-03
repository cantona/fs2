inherit ROOM;
void create() {
	set( "short", "阿噜米的专用MOB室" );
	set( "owner", "mudu" );
	set( "object", ([
		"file1"    : "/open/main/obj/m_cloak",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/gsword/obj1/ring",
		"amount5"  : 1,
		"file4"    : "/open/gsword/obj1/ring",
		"file2"    : "/open/main/obj/bird_legging",
		"amount4"  : 1,
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room209",
	]) );
	set( "long", @LONG
这是$HIR$阿鲁米$NOR$秘密练功的地方，他运用特权，将江湖上有
名望的武林人士都招募到这里来，再运用迷魂大法，使他们
都一一陷入$YEL$神智不清$NOR$的状态，而且只听命于$HIR$阿鲁米$NOR$一人，这
样他便能专心练功。
LONG);
	setup();
	replace_program(ROOM);
}
