// Room : /open/clan/sky-wu-chi/room/room15.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG

这里是我想上的小窝，但是我想上以前的名字好像叫死亡人生，
不知为何要改姓换明，是跟谁有关？看到门口的牌子会让你想
一探究竟我想上神秘的房间，因为我想上总是喜欢稿东稿西的。
其门口除了房内好像北边还有一个武道馆，难道那是我想上开
的武馆，没想到这种人也会收徒弟。世界真奇妙。

LONG);
	set( "short", "【我想上的房间】" );
	set( "owner", "sir" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room291",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "object", ([
		"amount8"  : 1,
		"amount4"  : 1929,
		"amount2"  : 1,
		"file3"    : "/open/killer/obj/s_pill",
		"file5"    : "/data/autoload/killer/ski_dream",
		"amount1"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1113,
		"amount5"  : 1,
		"file9"    : "/open/snow/obj/sky_lin_stone",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file4"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "build", 10027 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
