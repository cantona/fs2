// Room: /u/f/fire/room/room1-3.c
#include <marksman.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", GRN"长沙道"NOR);
  set ("long", @LONG
你来到了一个双叉广场，无数的民众正向着一些小摊贩买着一些
家庭所需要的物品。长沙城的风景十分美丽，一阵阵的飘风飘来了一
阵阵的花香，花香往你的脸颊而来。
LONG);

  set("objects", ([ /* sizeof() == 2 */
C_NPC"/woman" : 1,
C_NPC"/oldwoman" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room1-2.c",
  "north" : __DIR__"room1-8.c",
  "east" : __DIR__"room1-4.c",
"west" : __DIR__"room1-34",
]));

  setup();
}

