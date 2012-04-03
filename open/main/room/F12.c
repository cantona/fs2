// Room: /open/main/room/F12.c

inherit ROOM;

void create ()
{
  set ("short", "密林");
  set ("long", @LONG
这里是一片浓密的森林，高大的树木，交织的枝叶，竟将
天日给整个遮蔽住了。四周隐隐传来野兽的低吼声，更增添了
几许恐怖的气氛。当你正准备转身离开时，脚底下似乎踩到了
什么东西...

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/main/room/r26",
  //"west" : "/open/main/room/m12",
  "west" : "/open/main/room/f11",  	
  "north" : "/open/main/room/m7",
  "east" : "/open/main/room/r19",
]));

  setup();
}

void init()
{
	add_action("do_search", "search");
	add_action("do_climb", "climb");
}

int do_search()
{
	object who;
	who = this_player();

	tell_object(who,"\n你趴在地上到处摸来摸去，突然发觉脚下一空，啊...
...............................................
...............................................
...............................................\n\n");
	tell_object(who,"碰！的一声，你总算又回到了熟悉的地面，屁股差点开花。\n\n");
	who->move("/open/badman/room/t1");
	tell_room(this_object(),"你只听到"+who->query("name")+"发出一声杀猪似的惨叫，转头回去看时他却已经不见了。\n");
	return 1;
}

int do_climb(string str)
{
	object me;
	me = this_player();
	
  if (str != "pine" && str != "树" && str != "松树" && str != "苍松")
    return notify_fail("你爬呀爬呀.....噫? 突然想起自己又不是乌龟, 干麻用爬的!\n");
  
	tell_object(me,"\n你敏捷地爬上万年古松...\n");
	me->move(__DIR__"M21");
  tell_room(environment(me),
	    sprintf ("%s顺着树干, 咻的一声, 飞快的爬了上来。\n", me->short()),
	    me);
	return 1;
}