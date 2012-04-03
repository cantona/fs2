inherit ROOM;

void create ()
{
	set("short","厨　房");
	set("long",@LONG
厨房是个四四方方的石砖屋，你可以看到各式的炊坎工具与一些
调味品，眼前有一个长的与人颇为类似，不过却有着一个长长且尖锐
的耳朵，感觉上仿佛是一个精灵，不过似乎有一把年纪的感觉。

地上摆满了棉草。
LONG);
	set("no_fight", 1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"b-04",
"east":__DIR__"b-06",
"south":__DIR__"b-07",
]));
	setup();
}

void init()
{
	if( this_player()->query_temp("evil/water/ask-mission-2") )
		add_action("do_search","search");
}

int do_search()
{
object ob;

	if( !this_player()->query_temp("evil/water/ask-mission-2") )
		return 0;

	ob = new(__DIR__"obj/grass");
	message_vision("$N在地上搜寻着，结果发现了一些$n。\n",this_player(),ob);
	ob->move(this_player());
	this_player()->delete_temp("evil/water/ask-mission-2");
	return 1;
}