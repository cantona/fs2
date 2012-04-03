// Room: /open/gsword/room/eghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "小广场");
  set ("long", @LONG
这是仙剑派剑士们用膳的地方，广场中间数十张桌椅有条不紊的排列着，
北边是大厨们开伙的工作房，直往南走，通往仙剑派众师兄弟们的寝室。
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/eghouse2",
  "north" : "/open/gsword/room/kitchen",
  "east" : "/open/gsword/room/eghouse.c",
]));

  setup();
}
