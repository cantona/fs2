// Room: /open/gsword/room/nghouse.c
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
这儿的长廊跟西面的比起来显的又宽的多了，两侧的墙壁上满是当年
仙剑派的开山祖师--逍遥子--大战群魔的情景，看着祖师爷身形飘忽
，一只木剑在手中竟能使的如此浑圆如意，看的你心炫神怡。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/nghouse2.c",
  "south" : "/open/gsword/room/north",
]));

  set("light_up", 1);

  setup();
}
