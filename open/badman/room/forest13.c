// Room: /open/badman/room/forest13.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "恶人森林");
  set ("long", @LONG
你走进了一大片森林之中，走着走着你才发现四周的景物似乎
一直都没变过，让你完全失去了方向。原来这里就是著名的恶人森
林，据说只有恶人谷的人知道如何顺利通过这片森林。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"forest14",
  "north" : __DIR__"forest10",
]));
  set("outdoors", "/open/badman");

  setup();
}
