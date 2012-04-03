// Room: /u/f/funkcat/sample/j1
inherit ROOM;

void create ()
{
  set ("short", "地下密室");
  set ("long", @LONG
位于地下的密室。四面都是生满青苔的大石块，头顶不时的有水滴
落下来，这里大概是黑帮大本营的密室，不过奇怪的是远远传来的交谈
声似乎不是中土的语言，难道...

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "up" : (: look_door,     "up" :),
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"j2",
  "up" : __DIR__"wulaih2",
]));
   create_door("up","暗门","down");

  setup();
}
