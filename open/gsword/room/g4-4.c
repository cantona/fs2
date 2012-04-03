// Room: /open/gsword/room/g4-4.c
inherit ROOM;

void create ()
{
  set ("short", "钟楼底楼");
  set ("long", @LONG
这里是仙剑派的钟楼，一个青铜大钟在你的正上方，西边有个小楼梯
可上顶楼，每当仙剑派晨起，用餐，练武等时候，青铜巨钟的声响，不但
传遍全山，就连远方的蜀中城，也能清楚的听到钟声。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g4-5.c",
  "north" : "/open/gsword/room/g5-10",
]));

  set("light_up", 1);

  setup();
}
