// Room: /open/main/room/gy3.c
inherit ROOM;

void create ()
{
  set ("short", "帐篷");
  set ("long", @LONG
你一踏进来，哇哩咧！这么嘟好，随便走居然碰到大尾的肥鱼
临阵退缩虽然可以留下一条小命，不过敌前逃亡不免会受国人耻笑
而且还给所有同胞蒙羞，为了拯救疾苦百姓，必须做个决择。

LONG);

  set("objects", ([ /* sizeof() == 1 */
 //  "/open/main/npc/general.c" : 1,
]));
  set("outdoors", "/open/main");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"gy2.c",
]));

  setup();
}
