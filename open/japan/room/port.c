inherit ROOM;

void create ()
{
  set ("short", "幻龙海岸");
  set ("long", @LONG
你来到一个漂亮的海岸，左边有高山盘踞宛如飞龙在天
右方远处有一小小的告示牌 (board)，在海的另一端似乎可
以隐隐约约的看到有一孤岛。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
前路茫茫无尽期，东瀛有岛在眼前。
",
]));
  set("light_up", 1);
  set("outdoors", "/open/japan");

  setup();
}
 init()
{
	add_action("board_ship","board");
	do_start_ship();
	
}
 
void do_start_ship()
{
	object ob1;
	if(!find_object("ship leader"))
	{
	ob1=new("/open/japan/npc/ship_leader");
	 ob1->move(__DIR__"ship");
	destruct(ob1);
	}
}
int board_ship(string str)
{
	object ob;
 	if(!str)
	return notify_fail("你要搭什么?\n");	
	if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("看清楚点 , 有那种船吗 ?\n");
        if(str=="ship") 
	{
	message_vision("$N走到岸边 , 搭上了渡船 !\n",this_player());
	this_player()->move(__DIR__"ship");
	return 1;
	}
	
return 0;
}	
