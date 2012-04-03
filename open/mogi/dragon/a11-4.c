// Room: /u/p/poloer/dragon/a11-4
inherit ROOM;

void create ()
{
  set ("short", "洞口内");
  set ("long", @LONG
   一个非常矮小的通道，只能让一个人通过的宽度，
       通道湿褡褡还滴着水呢。怎么会有通道在这个地方
       呢? 不如往下看看有什么东西吧。
            爬了许久，发现前方出现微小的灯光。

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"a11-5",
  "east" : __DIR__"a11-3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
