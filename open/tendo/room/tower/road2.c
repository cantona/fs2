
inherit ROOM;

void create ()
{
  set ("short", "树丛小径");
  set ("long", @LONG
你感觉似乎走了好久，刚刚看到的那座塔就在不远的地方啦！你发觉这四周的
花草树木已不像刚刚那些地方那样浓密了。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road1",
  "east" : __DIR__"road3",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
  set("outdoors", 1);

  setup();
}


