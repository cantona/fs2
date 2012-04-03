// Room: /u/r/ranko/room/f1.c
inherit ROOM;

void create ()
{
  set ("short", "农田");
  set ("long", @LONG
一大片绿油油的田地横亘在你面前，丰满的稻穗几乎将稻子压
的贴近地面。不远处正有许多农民正忙着收割，看来今年似乎是个
丰年。许多顽童正在收割过的田地上跑来跑去，玩的不亦乐乎，附
近不时飞过几只白鹭鸶，传来几声嘶鸣声。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f6.c",
  "west" : __DIR__"f4.c",
  "east" : __DIR__"f2.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
