// Room: /u/p/poloer/dragon/ring2
inherit ROOM;

void create ()
{
  set ("short", "吊桥上");
  set ("long", @LONG
  走上了吊桥，桥身摇摇晃晃的站的站不稳，好
  像快要掉下去一样，如果不小心掉下去那可不得了
  。还是加紧脚步快走吧。

           ～ 吊桥的绳索喀喀的响～

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("no_magic", 1);
  set("outdoors", "/u/p/poloer/dragon");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"ring3",
  "south" : __DIR__"ring1",
]));
  set("no_fight", 1);

  setup();
}
