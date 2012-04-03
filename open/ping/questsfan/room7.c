// Room: /u/d/dhk/questsfan/room7
inherit ROOM;

void create ()
{
  set ("short", "深不见底的绝崖");
  set ("long", @LONG
好不容易走出草阵，确发现此地竟是一处绝崖。崖下
有一阵一阵的狂风杀！杀！杀！的吹着。而且崖面竟有着
云状的雾，你的心霎时凉了一节，这里有这么高吗？这而
的北方似乎有三座会发出异光的桥影…

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room6",
  "goup" : __DIR__"room28",
]));

  setup();
}
