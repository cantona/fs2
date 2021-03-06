// Room: /open/capital/room/SCH.c

inherit ROOM;

void create ()
{
  set ("short", "书生公会");
  set ("long", @LONG
这里是书生们平常聚集的地方，他们都在这儿讨论天下大事，畅所
欲言。墙壁上挂着一副诗联(poet)，而在前堂上坐着一位老先生，原来
是天下书生都很佩服的杨书文--杨尚书，他正髯着他的大胡子看着堂中
的一切。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "poet" : "	┌────────────┐
	│		          │
	│  [1m谈 文 论 武 道 玄 机[0m  │
	│  [1m春 夏 秋 冬 一 色 衣[0m  │
	│  [1m遨 游 江 湖 千 万 里[0m  │
	│  [1m身 藏 天 地 两 卷 书[0m  │
	│		          │
	│		[1;36m京城杨大[0m  │
	│		  [1;36m醉后狂草[0m│
	└────────────┘
",
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"SCH1",
  "east" : __DIR__"h01",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/scholar/master" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="south" )
	{
	if( me->query("class") != "scholar" )
	  return notify_fail("非书生不得进入!\n");
	if( !me->query_temp("进入书房") )
	  return notify_fail("未得杨书文同意(agree), 不得进入!\n");
	}
	return ::valid_leave(me, dir);
}
