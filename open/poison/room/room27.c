inherit ROOM;

void create ()
{
  set ("short", "瀑布");
  set ("long", @LONG
原来刚才的花啦声是一道瀑布啊 ,抬头看着这一泄千里的美景 ,
你突然发现似乎有一间小房子在瀑布源头 ,低头一看 ,又有一条
小路顺着溪流而下 ,嗯 .....该往哪里走好ㄋ ?

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room26",
  "northup" : __DIR__"room35",
  "northwest" : __DIR__"room37",
]));
  setup();
}


