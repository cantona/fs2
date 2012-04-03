// Room: /u/r/ranko/garden6.c
inherit ROOM;

void create ()
{
  set ("short", "水井");
  set ("long", @LONG
此处是冥蛊教众用来取水以供给其所种的毒花,毒草使用。正中
央立着一以巨形青石砌成的水井(Well),其深不见底,不知底下通往
何方。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "well" : " 你走近井边,好奇的往下望去,只见底下一遍漆黑.一股清风由下往上徐徐吹抚你的
 面颊,底下似乎别有洞天.旁边有一条打水时所用的绳子(rope),或者你可以顺着绳子
 攀爬下去一探究竟。
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"garden2-2.c",
]));
  set("light_up", 1);

  setup();
}
 void init()
{
	add_action("do_climb","climb");
}
int do_climb(string str)
{
	object me;
	me = this_player();
	if(!str || str != "rope")
		return notify_fail("你想做甚么？\n");
                                                                                 
                
	message_vision("$N抓紧绳子,沿着井缘,缓缓地荡了下去.\n",me);
	tell_room(me,"到达井底,你赫然发现下面是一个极具规模的山洞.\n");
	me->move(__DIR__"cave3.c");
                  return 1;
           
                  
}
