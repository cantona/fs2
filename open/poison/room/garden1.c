// Room: /u/r/ranko/garden1.c
inherit ROOM;

void create ()
{
  set ("short", "毒园入口");
  set ("long", @LONG
这里是冥蛊教用来种毒花毒草的地方,以供给教中炼制毒药所用
园子里五颜六色的种满各式各样的花草,看的你眼花撩乱,目不暇己.
空气中更不时飘来阵阵浓郁的香气,令人感到浑身松软,飘飘欲仙.但
过不久,你就发现这股香气有点轨异,你心想在不离开的话也许会中毒
也说不定。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road18",
  "south" : __DIR__"garden2.c",
]));

  setup();
}
