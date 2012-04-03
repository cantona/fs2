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
    往东走可回到小路。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f7.c",
  "south" : __DIR__"f1.c",
  "east" : __DIR__"pa3.c",
]));
  set("outdoors", "/open/poison");

  setup();
}
