///open/prayer/room/hole/1.c

inherit ROOM;
int have=1;
void create()
{
	set("short", "石壁");
	set("long", @LONG

	传说这里是破邪洞窟的入口，可是除了石壁(wall)外，没有见到所
	谓的"门"，不过在石壁的角落有一块突出的石块(stone)。 或许你
	愿意运起内力推开(push)石壁试试.......

LONG	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/prayer/room/westarea/road19",
]));
	set("item_desc", ([
	"wall":	"一道红褐色的石壁，你可以尝试着推推看。\n"
	]));
           set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/oldwoman" : 1,
]));
     set("light_up", 1);
        setup();
}

void init()
{
        add_action("search_here", "search");
	add_action("do_turn","turn");
	add_action("do_push","push");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 50000)  && query_temp("can_pass") )
      write("你伸手向石壁上的石头摸呀摸的,觉得这块突起的石头似乎有点问题.\n"+
            "你可以试着转动转动它(turn stone).\n");
    else
      write("也许是你经验不足,你什么也没发现...\n");
    return 1;
}
int do_turn(string str)
{
	if(!str || str != "stone")
		return notify_fail("你要转动什么?\n");
	else if(!query_temp("stone_turned")) {
set_temp("stone_turned",1);
message_vision("$N把石块轻轻地转动，赫然听见机关运转的声音。\n", this_player());
	}
	else {
		delete_temp("stone_turned");
		message_vision("石块慢慢地回到原位。\n", this_player());
		if(query("exits/enter"))
			delete("exits/enter");
	}
	return 1;
}

int do_push(string str)
{
	object ob;
	ob = this_player();

	if(!query_temp("stone_turned"))
		return notify_fail("你觉得你推的动石壁吗??\n");
	else if(!str || str != "wall")
		return notify_fail("你在推什么?\n");
	else {
	set("exits/enter",__DIR__"2.c");
message_vision("$N缓缓的把石壁推开，这才发现原来有一条通往洞穴的路。\n", ob);
		call_out("do_close",10);
	}
	return 1;
}

void do_close()
{
	if(!query("exits/enter"))
		return;
	delete("exits/enter");
	tell_room(this_object(),"被人推开的石壁又缓缓的自动关了起来。\n");
}
 int valid_leave(object ob, string dir)
  {
    if(dir=="enter" && !ob->query_temp("can_pass",1))
        return notify_fail("奇怪!!为什么无法进入呢??是不是漏掉了什么??\n");
        
   return 1;
}

