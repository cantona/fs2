// Room: /open/killer/room/ru0.c
inherit ROOM;
void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
这里是通往黑牙联总坛大厅的长廊，四周似乎有一些机关，必须要小心一点。
连四周的烛光，似乎也传来阵阵的杀机，看来这不是一般人该进来的地方。
前方就是传说中的超级杀手叶秀杀，接见来访客人的地方。
戒备非常的森严，你最好不要轻举妄动。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"ru1.c",
  "down" : __DIR__"floorm.c",
]));
  set("light_up", 10);
  setup();
}