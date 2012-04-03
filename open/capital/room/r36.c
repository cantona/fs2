// Room: /open/capital/room/r36.c

inherit ROOM;

void create ()
{
  set ("short", "永福胡同");
  set ("long", @LONG
这儿是一段上坡路，走起来有点吃力。城的东南有座小丘陵，因为
地势的缘故，从这往东走一直都是上坡。北面是一些普通的民宅。南面
是坚固的城墙。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r34",
  "east" : __DIR__"r38",
]));
  set("gopath", "west");

  setup();
}
