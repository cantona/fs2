inherit ROOM;
void create()
{
  set ("short","狼谷");
  set ("long", @LONG
这里是半山谷的地方 ,仔细地看了一下 ,四周的狼仍然只是望着你
 ,而不攻击 .谷底似乎有几间房子正冒着烟 ,那里应该就是饲养这些狼
儿的饲主所住的地方吧 ?

LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"wolf07.c",
  "southup" : __DIR__"wolf01.c",
  ]));

  set("objects", ([ /* sizeof() == 3 */
  "/open/badman/npc/wolf02.c" : 3,
]));
  setup();
}
