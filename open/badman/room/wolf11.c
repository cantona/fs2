inherit ROOM;
void create()
{
    set ("short","空屋");
  set ("long",@LONG
这里是一间没有人住的民房 ,但却被打扫的一尘不染 .墙上的蜡烛
仍然是亮着 ,而桌上酒菜还是热的 .可是门却是关起来的 ,但却没有人
在 ,看来这间房子必有古怪....
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wolf10.c",
]));

  setup();
}
