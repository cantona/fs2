inherit ROOM;

void create ()
{
  set ("short", "小径");
  set ("long", @LONG
你进到了竹林里的小径，只听到风吹过竹林所产生的沙沙声
响，在你的正前方，隐隐约约可以看到一栋屋子，令你想要前去
一探究竟。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "back" : __DIR__"aa52",
  "north" : __DIR__"d2",
]));

  set("no_transmit",1);
  setup();
}
