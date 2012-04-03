// Room: /u/p/poloer/dragon/a11-1
inherit ROOM;

void create ()
{
  set ("short", "洞口内");
  set ("long", @LONG
一个非常矮小的通道，只能让一个人通过的宽度，
    通道湿褡褡还滴着水呢。怎么会有通道在这个地方
    呢? 不如往下看看有什么东西吧。

LONG);
set("light_up", -1);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"a11",
  "down" : __DIR__"a11-2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
