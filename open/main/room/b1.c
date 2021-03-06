// Room: /open/main/room/b1.c

#define SAN_GUAN "/open/main/npc/gamble_man"
inherit ROOM;

void create()
{
	set("short", "桥");
	set("long", @LONG
这是出西蜀关的唯一要道, 为了维护治安, 不时会有民安队员
出现, 偶而也会有驻军, 只是人称一到西蜀魂归时, 关外的险恶早
已经吓坏的人们, 所以这座桥也时时发出吱吱的声响, 似乎岌岌可
危, 桥下是出名的大河澜沧江, 一掉下去恐怕命都没了. 还是不要
在这儿逗留为上.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"r18",
  "west" : __DIR__"b1",
]));

  set("objects", ([
	SAN_GUAN:1,
  ]) );

	setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object	me=this_player();
  int		query;

  if (((query=me->query_temp("quests/gamble_book")) < 3) &&
      !me->query("quests/gamble_book")) return 0;
  if (arg)
    if (query > 3) return notify_fail("你找来找去也没发现什么特殊的地方。\n");
    else return 0;

  me->set_temp("quests/gamble_book", 4);
  message_vision("$N找来找去终于发现一条往下的路。\n", me);
  set("exits/down", __DIR__"gamble_book");
  return 1;
}

int valid_leave(object me, string dir)
{
  if (dir != "down") {
    this_object()->delete("exits/down");
    return 1;
  }
  if (!me->query("quests/gamble_book") &&
       me->query_temp("quests/gamble_book") < 4) return 0;
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;
}
