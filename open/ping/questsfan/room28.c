// Room: /u/d/dhk/questsfan/room28
inherit ROOM;

void create ()
{
  set ("short", "虹晶桥前段");
  set ("long", @LONG
你见到三座豪光夺目，华丽不凡的晶桥。桥全长约百
步之远、宽仅可供一人通行而已。桥上全无缆绳之类的扶
手，均需靠自身的平衡感及千斤坠造诣来通行。在右前方
处有一石碑，碑上记载着密密麻麻的甲骨文字，深奥难懂
，似是有关此桥的由来。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "godown" : __DIR__"room7",
  "run" : __DIR__"room29",
]));
  set("outdoors", "/u/d");

  setup();
}
