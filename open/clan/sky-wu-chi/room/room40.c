// Room : /open/clan/sky-wu-chi/room/room40.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "天道无极" );
	set( "long", @LONG
这里又是一个天道无极的伟大建筑物之一
「通天阁”其外观真有如其名一样，顶端直入
云梢，眼不见顶，目不见其高，想要爬到最高
点，恐怕需要花费一些时间。不过这到也是个
观赏风景的好地方。在这栋楼的下方，有个指
示牌(sign)，是否能对世事的感慨能有更深一
层的见解呢。

LONG);
	set( "short", "通天阁" );
	set( "object", ([
		"file10"   : "/open/magic-manor/obj/dark-soul-dagger",
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file4"    : "/daemon/class/blademan/obj/six-neck",
		"amount10" : 1,
		"amount9"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/love/obj/cloth1",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file9"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/love/obj/shield",
		"file1"    : "/daemon/class/blademan/obj/ublade",
		"amount6"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10004 );
	set( "owner", "conpse" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/room52.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "
有些层楼有设窗子(window)，看能不能看到些什么。

",
]) );
	set( "cmkroom", 1 );
	setup();

	}
