inherit ITEM;
#define VOID		"/obj/void"
#define QUEST_ROOM	"/open/main/room/s16"
void create()

{
      set_name("炮仗",({"firecracker"}) );
      set_weight(8000);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","个");
           set("long","这是段家联络用的炮仗, 你可以燃放(fire)它。");
           set("value",0);
           }
      setup();
}

void init()
{
	add_action("do_fire","fire");
}

int do_fire(string str)
{
	object me=this_player();
	object place=environment(me);
	if( !place->query("outdoors") )
	  write("在屋子里你想放火啊。\n");
	else
	{
	if( str != "firecracker" )
	  write("你要烧什么东东啊? \n");
	else
	{
	  this_object()->move(VOID);
	  message_vision("$N从怀里掏出一个炮仗, 然后帅气的将它发射出去。\n",me);
	  if(me->query_temp("thief") >= 7)
	  {
	    tell_room(environment(me),"[1;36m炮仗呈现优美的弧度在天空炸了开来...\n"+
"								  \n"+
"	   [5;31m*[5;35m*	[5;33m*		[0m[1;34m* [1;35m * 				  \n"+
"             [1;36m*  [1;5;31m★   [5;32m*           [0m[1;33m★  	[5;35m*		  [0m[1;35m**      \n"+
"                   [1;31m*         [1;35m☆ [5;35m*                        [0m[1;33m*   [5;33m★  \n"+
"                      [5;32m*   *   [0m[1;32m★         [5;35m*        [5;33m*    [0m[1;33m☆ [5;36m*      \n"+
"		[5;36m*		[0m[1;36m*  [5;31m*		    [5;36m* 	    [1;31m**    \n"+
"			[5;31m**			[5;32m**[0m		  \n"+
"                            					  \n");
	    call_out("result",4);
	  }
	  else
	  { 
	    tell_room(environment(me),"[36m可能是技术不好的关系, 炮仗歪歪斜斜的落了下来。[0m\n");
	    destruct(this_object());
	  }  
	}
	}
	return 1;
}
void result()
{
	object me=this_player();
	if( environment(me)->query("capital_thief") == 0 )
	{  
	  write("[36m可是四周围都没什么动静, 可能是因为这儿不是京城里地势最高的地方。[0m\n"); 
	  destruct(this_object());
	}  
	else
	{
	  write("[36m你似乎撇见角落有黑影一闪。\n机不可失, 你马上追了过去。[0m\n");
	  tell_room(environment(me),me->query("name")+"突然急急忙忙的离开了。\n",me);
	  call_out("follow1",3);
	  me->set_temp("block_msg/all", 1);
	  me->move(VOID);
	}
}
void follow1()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(我追我追我追追追....)[0m\n");
	call_out("follow2",3);
	me->set_temp("block_msg/all", 1);
}
void follow2()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(披荆斩棘我追追追....)[0m\n");
	call_out("follow3",3);
	me->set_temp("block_msg/all", 1);
}
void follow3()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[1;33m(翻山越岭我追追追....)[0m\n");
	call_out("follow4",3);
	me->set_temp("block_msg/all", 1);
}
void follow4()
{
	object me=this_player();
	me->set_temp("block_msg/all", 0);
	write("[36m只见黑影在草丛(bush)间一窜, 似乎失去了踪影[0m\n");
	me->set_temp("thief",8);
	me->move(QUEST_ROOM);
	destruct(this_object());
}	