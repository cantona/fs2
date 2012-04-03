// Room: /open/gsword/room/gsword3-6.c
inherit ROOM;

void create ()
{
  set ("short", "后堂");
  set ("long", @LONG
这里是仙剑派的后堂，堂上布置肃穆，两壁悬着一柄柄长剑，剑鞘黝
黑，剑繐陈旧，料想是前几代各宗师的佩剑。前方墙上挂着一张画像，画
中人物容貌俊雅，看来不过三十多岁，看他双目远视，气定神闲，腰间一
把玉衡天剑，你不禁惊呼一声，他不正是仙剑开山祖师 ─ 逍遥子。怎地
竟如此年轻。
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/g5-3.c",
  "northwest" : "/open/gsword/room/sproom.c",
]));

  set("light_up", 1);

  setup();
}
