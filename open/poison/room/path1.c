// Room: /open/poison/room/path1.c
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
    这里是冥蛊魔教新建的联外密道，两旁尽是熊熊火
炷，整个密道陇照在一片火红的光芒中。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"path2",
  "east" : __DIR__"room2",
]));
  set("light_up", 1);

  setup();
}
