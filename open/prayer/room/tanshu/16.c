// Room: /open/prayer/room/tanshu/16.c

inherit ROOM;

void create()
{
	set("short", "书房");
	set("long", @LONG

    这里是门主的书房，门主个人最喜欢字画，三不五时自己也喜欢
写写唐宋诗词，墙上挂了一些古今名人的作品，原来葛辉如此爱好艺
术，主要是可以让习武之人，减少几分暴戾之气。

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"4.c",
]));
	set("no_clean_up", 0);

	setup();
	}
