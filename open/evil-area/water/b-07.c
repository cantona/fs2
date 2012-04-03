inherit ROOM;

void create ()
{
	set("short","厨　房");
	set("long",@LONG
这里置放着许多的杂物，不过却没有凌乱的感觉，每一样物品似
乎都有定时被清洗着，一点灰尘都没有，就连摆放于地上的木材都十
分的干净...真是太不可思议了，谁会勤劳到连木材都在整理ㄋ...看
来答案似乎就是身在这里的妇人...

地上摆满了木材。
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-05",
"east":__DIR__"b-08",
]));
	setup();
}

void init()
{
	if( this_player()->query_temp("evil/water/ask-mission-1") )
		add_action("do_search","search");
}

int do_search()
{
object ob;

	if( !this_player()->query_temp("evil/water/ask-mission-1") )
		return 0;

	ob = new(__DIR__"obj/torch");
	message_vision("$N在地上搜寻着，结果发现了一些$n。\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-1");
	return 1;
}
 
 