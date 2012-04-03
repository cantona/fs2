// Room : /open/clan/sky-wu-chi/room/room24.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
        set( "long", @LONG
这里是小新家第一大管理着的兵器房，里面放满了许许多多强
而有力的兵器，平常所找不到的通常这里都有，所以其他人是禁止
来这存取东西的。这里存放的东西通常小新本人也很难拿到，所以
不必要的话是很少拿这里的东西的。另带一提，平常小新用的武器
是妖纹幻爪和寒冰，请记得使用后放回。

LONG);

	set( "short", "$HIC$【$NOR$武器房$HIC$】$NOR$小新" );
	set( "owner", "eve" );
	set( "object", ([
		"amount10" : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/gsword/obj/ring-1",
		"file10"   : "/daemon/class/fighter/armband",
		"file5"    : "/open/capital/obj/king-boots",
		"amount3"  : 1,
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"file6"    : "/open/ping/obj/gold_hand",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/mogi/village/obj/mogi_ring",
		"amount8"  : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/prayer/obj/boris-hat",
	]) );
	set( "build", 11291 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room159",
		"west"      : "/open/clan/sky-wu-chi/room/room160.c",
		"north"     : "/open/clan/sky-wu-chi/room/room156.c",
		"down"      : "/open/clan/sky-wu-chi/room/room154.c",
	]) );
        set( "no_transmit", 1 );
        set( "item_desc", ([ /* sizeof() == 1 */
  "window" : "
[31m小新吓了一跳!!![0m

    原来小新在边上厕所边看PLAY BOY
",
]) );
        set( "no_clean_up", 0 );
        set( "clan_room", "天道无极" );
        set( "cmkroom", 1 );
        setup();

        }

