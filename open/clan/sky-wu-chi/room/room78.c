// Room : /open/clan/sky-wu-chi/room/room78.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "梅花雪影居" );
	set( "owner", "miffy" );
	set( "build", 12160 );
	set( "long", @LONG
你来到了一个叫‘梅花雪影居’地方，这个地方似乎比外面的七色结界更具
吸引力你看到了一个犹如万斤重的黄铜铁门，你于是乎不敢掉以轻心的随意就想
把门打开你运足了气劲，大喝一声‘万马奔腾’结果令你惊讶的事发生了。铁门
纹风不动。只有下你的掌印，仔细着一看门上的伤痕有许多。就好像在述说着许
多的人也来过此地一探。当你在思考之时你却看到门一点点的被打开了。走出来
的竟是一位女子原来这位女子就是里头的夫人‘青儿’。
她正热情的招待你进去这谜样般的居所,你也正好想要进去一窥究竟,看看里面
到底是有些什么样让你能够惊讶连连的东西

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/sky-wu-chi/room/room75.c",
		"west"      : "/open/clan/sky-wu-chi/room/room76.c",
		"east"      : "/open/clan/sky-wu-chi/room/room151.c",
		"north"     : "/open/clan/sky-wu-chi/room/room146",
]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	setup();

	}
