// Room: /u/u/unfinished/room/is7.c
inherit ROOM;

void create ()
{
  set ("short", "沙滩");
  set ("long", @LONG
这里的地上躺着许多大岩石, 跟四周的环境很不协调. 看起来类似石阵之类
的, 但是并找不到什么其他不寻常的地方, 看来是自己太多心了吧.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is12.c",
  "east" : __DIR__"is8.c",
  "south" : __DIR__"is4",
]));

  setup();
}
