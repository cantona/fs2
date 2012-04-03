// Room: /open/main/room/s16.c
#include </open/open.h>
inherit ROOM;
string do_bush();
void create()
{
	set("short", "草原");
	set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，周围还有一团不小的树丛，这里应该有不少动物躲藏。
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s20",
  "north" : __DIR__"r15",
  "west" : __DIR__"s15",
  "east" : __DIR__"s17",
]) );
  
  set("item_desc", ([ /* sizeof() == 1 */
  "bush" : "杂乱的植物生长在一起, 看起来蛮平常的。\n",
  ]));
  set("search_desc",([
  "bush" : (: do_bush :),
  ]));
  set("outdoors", "/open/main" );

  setup();
}

string do_bush()
{
	object me=this_player();
	if(me->query_temp("thief") == 8)
	{
	  write("这树丛被你挖啊挖的......\n\n哇..怎么有一个大洞..你跌了进去....\n"+
	  "..................\n..................\n..................\n");
	  tell_room(environment(me),"啊~~~~~~~~的一声惨叫, "+me->query("name")+"已不见人影。\n",me);
	  me->move(CAPITAL_ROOM"q0");
	  return("咚的一声..你掉到了地上。\n");
	}
	else
	  return("你找了老半天，可是看不出有任何特殊之处。\n");
}	  
	
