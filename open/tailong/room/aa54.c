inherit ROOM;

void create ()
{
  set ("short", "高塔");
  set ("long", @LONG
这里有一座高耸入云的塔,塔上刻着斗大的两个大字"魔塔",这
里想必是天龙寺三禁地之三--"三塔"的其中之一,不过在这里却看
不到进去的入口,真是令人疑惑。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"aa50",
  "northeast" : __DIR__"aa51",
  "southeast" : __DIR__"aa52",
  "southwest" : __DIR__"aa53",
]));
}
