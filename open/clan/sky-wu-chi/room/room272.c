inherit ROOM;
void create() {
	set( "short", "伪尔刚" );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file10"   : "/open/ping/questsfan/obj/diamond_legging",
		"file4"    : "/open/ping/questsfan/obj/diamond_armor",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount10" : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/fire_book",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount5"  : 1,
		"file8"    : "/open/gblade/obj/dragon_book",
		"amount3"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount8"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_belt",
	]) );
	set( "build", 10010 );
	set( "owner", "biwem" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room175",
	]) );
	set( "long", @LONG
一粒药丸...花拉拉拉拉...两粒药丸...花拉拉拉拉...
三粒药丸...花拉拉拉拉...四粒药丸...花...疑怎么少了阿....
难道我的药丸被偷了吗???怎么办阿??那是我晚上要用的ㄟ...
阿一定是我那个死鬼...偷偷拿出去用了...他居然又给我在外面乱搞...
看他回来我怎么修理他...sigh...怎么办阿??那是我晚上要用的ㄟ...
少了一粒药效会差很多ㄟ...这下我可就对不起我的密友了说...
今晚就少玩几次好了...真倒楣...死家伙...有本事就别回来...

LONG);
	setup();
	replace_program(ROOM);
}
