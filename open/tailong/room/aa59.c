inherit ROOM;

void create ()
{
  set ("short", "高塔");
  set ("long", @LONG
这里有一座高耸入云的塔,塔上刻着斗大的两个大字"神塔",这
里想必是天龙寺三禁地之三--"三塔"的其中之一,不过在这里却看
不到进去的入口,真是令人疑惑。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"aa55",
]));

  setup();
  replace_program(ROOM);
}
