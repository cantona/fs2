// Room: /u/p/poloer/dragon/ring-area
inherit ROOM;

void create ()
{
  set ("short", "吊桥边");
  set ("long", @LONG
来到了山谷旁，那山谷看起来非常的深，如果不小心掉下去可
就没命了。想要过去可就很困难啰，还好有一座吊桥横跨山谷可以
帮助我们过去。吊桥旁边坐着一位人，拿着灯火往四处看着。

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/u/p/poloer/dragon");
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"ring",
  "west" : __DIR__"a10",
]));

  setup();
}
