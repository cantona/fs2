// Room: /open/gsword/room/suking.c

inherit ROOM;

void create ()
{
  set ("short", "将军府");
  set ("long", @LONG
这里是前朝旧宫蜀中府,在本朝成立后,首都迁往新都京城,
这里便从权力中心退位,成为本城平西大将军的居所, 你仍可从
那高耸的围墙,深远的大院,想像过去的富丽与堂皇.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/su4",
  "enter" : __DIR__"suking1",
]));

  set("light_up", 1);

  setup();
}
