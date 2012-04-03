// Room: /open/killer/room/ru2.c
inherit ROOM;
void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
这里是通往黑牙联总坛大厅的长廊，四周似乎有一些机关，必须要小心一点。
连四周的烛光，似乎也传来阵阵的杀机，看来这不是一般人该进来的地方。
前方就是传说中的超级杀手叶秀杀，接见来访客人的地方。
东方通往的是杀手专用的兵器室，杀手需要的武器可以在那里取得。
但是，那里据说有东洋机关手诸冈渡，所设计的机关存在，只有杀手知道如何通过。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"ru3.c",
  "south" : __DIR__"ru0.c",
  "east" : __DIR__"ru2.c",
  "west" : __DIR__"bankrm.c",
]));
  set("light_up", 10);
  setup();
}