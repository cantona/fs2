// Room: /open/ping/room/road7.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这里是一条林荫大道, 两旁的大树伸展着其巨大的树干, 互相交叉
的缠在一起, 黑压压的把天空都盖住了, 只能由树叶的隙缝中勉强看到
蓝天。往前转出林荫, 就看见前方正中的一座高楼, 迎着苍穹, 很有种
独步天下,主沈浮的气势, 相信这必定是段王府了。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/ping/room/road4",
  "north" : "/open/ping/room/pingking",
]));
  set("outdoors", "/open/ping");

  setup();
}
