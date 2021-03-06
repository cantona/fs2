// Room : /open/clan/ou-cloud-club/room/room96.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIM$魔女□研究室$NOR$" );
	set( "owner", "jenova" );
	set( "object", ([
		"amount5"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_hands",
		"amount2"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/ping/questsfan/obj/diamond_armor",
		"file9"    : "/open/capital/obj/gold_pill",
		"amount7"  : 1,
		"file10"   : "/obj/gift/lingzhi",
		"file2"    : "/open/ping/questsfan/obj/diamond_belt",
		"amount8"  : 2850,
		"file3"    : "/open/ping/questsfan/obj/diamond_boots",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"file8"    : "/obj/poison/five_poison",
		"file4"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount10" : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10200 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room87",
	]) );
	set( "long", @LONG

    老旧的橱柜,布满了厚厚的一层灰尘,柜子里放的,是一罐罐来历不明
的药水,据娃哈哈本人表示,这些药水都是她一生努力研究出来的结晶,的
确,当你看到身后那座摆满了古今中外各种医学书籍的大书架时,就不难想
像娃哈哈功力之精深了,其实这里还有一个鲜为人知的秘密,据说这里是某
亚洲大国的最大矿泉水出产区,看来娃哈哈真的不是一位简单的人物.

LONG);
	set( "no_clean_up", 0 );
	setup();

	}
