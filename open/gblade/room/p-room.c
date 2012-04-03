inherit ROOM;
void create ()
{
  set ("short", "佛堂");
  set ("long", @LONG

自从王元霸的独子生了一场怪病后，王元霸的妻子就经常在这里为他的儿
子祷告，佛堂的摆设相当的朴素，当中摆着一个神案，供奉一尊白玉雕成
的观音像，法像庄严，两旁摆着一些法器，不时还飘来一些檀香的香气。
你可以在观音大士面前祈祷(pray) , 消灾减厄。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g3-3.c",
]));
	set("item_desc",
	([ "statue"  :  "一尊白玉雕成的观音像 \n" ]));
  set("light_up", 1);

  setup();
}
void init()
{
        add_action("do_pray","pray");
	add_action("do_search","search");
	add_action("do_move","move");
}


int do_pray(string arg )
{
	object ob;
	ob=this_player();
	if(ob->query("sen") > 50)
	{
   message_vision("$N诚心的向观音像膜拜。....愿上天宽恕我的杀业....\n",this_player());
	if(random(10)>1)
	{
	call_out("do_act1",3,ob);
	return 1;
	}
	call_out("do_act2",3,ob);
	return 1;
	} else
	message_vision("$N的精神不够集中, 不足以感动观音菩萨..\n", this_player());
	return 1;
}
int do_act1(object ob)
   {
     message_vision("$N仿佛听到观音大士正在说法....‘尔时菩萨即从座起，偏袒右肩.....
$N觉的内心一片祥和 , 暴厉之气大减。\n\n",ob);
	ob->add("bellicosity",-5);
	ob->add("sen",-50);
     return 1;
}
int do_act2(object ob)
{
       message_vision("$N没听到观音说法却听魑魅魍魉的蛊惑之声，不知不觉中杀气腾腾。\n",ob);
       ob->add("bellicosity", 2);
      return 1;
   }


int do_search(string str)
{
	if(!str)
	{
	if(this_player()->query("lotch")<1)
	return 0;
	write("你仔仔细细的察看整个房间 , 发现观音像似乎有些异样 .\n");
	return 1;
	}
	if(str=="statue")
	{
	if(this_player()->query("lotch")<1)
	return 0;
	write("当你察看观音像时 , 你的直觉告诉你 : 观音像似乎可以移动 \n");
	this_player()->set_temp("can-move",1);
	return 1;
	}
return 0;
}
int do_move(string str)
{
	if(!str||str!="statue")
	return notify_fail("你要移动什么 ?\n");
	if(!this_player()->query_temp("can-move") )
	return notify_fail("你不怕亵渎了神只 \n");
	message_vision("$N走到观音像前 , 将神像轻轻移动\n",this_player() );
	message_vision("地上突然开了个大洞 ,$N往下掉了下去 !\n",this_player() );
	this_player()->delete_temp("can-move");
	this_player()->move("/open/gblade/room/p-room1");
	write("碰的一声 , 你掉到了地下 \n");
	return 1;
}
