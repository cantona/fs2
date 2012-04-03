inherit ROOM;

void create ()
{
  set ("short", "地道");
  set ("long", @LONG

你一走进这里直觉就告诉你，这里是地道的出口了，你把四周的石壁仔仔
细细的看过一遍，终于在左下角的石壁上发现有一块石头（stone） 似乎
可以推（push）进去。

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "north" :__DIR__"c1-1.c",
  "west" :__DIR__"c2-8.c",
]));

  setup();
}
void init()
{
        add_action("do_push","push");
        add_action("do_climb","climb");
}
int do_climb(string str)
{
        if(!str || str != "stair")
        return notify_fail("爬？你想爬去那里？\n");
        message_vision("$N飞步爬上楼梯。\n",this_player() );
        this_player()->move("/open/gblade/room/g1-2.c");
        message_vision("$N从桌子底下钻出来，桌子又自动归回原位了，真是巧妙的设计阿。\n",this_player());
return 1;
}
int do_push(string str)
{
        if(!str || str != "stone")
	return notify_fail("你要推哪里啊 !\n");
	if(this_player()->query("str")+this_player()->query("force")/10 <50 )
	return notify_fail("你的力气好像太小了一点。\n");
     if(query("stone_pushed") )
        return notify_fail("石头已经被人动过了啦 !\n");
        message_vision("$N用尽全身的每一分力气用力的推....石头突然往内陷了进去。\n",this_player() );
        message_vision("突然身旁的石壁往旁边移了开来，露出了一个阶梯。\n",this_player() );
        set("stone_pushed",1);
        set("long", @LONG

你终于发现了地道的出口，想到可以离开这一个可怕的地道，你的心中感
到无限的喜悦。一条楼梯(stair)往上通往出口。

LONG);
set("item_desc", ([
"stair": "
阶梯似乎可以通到外面。
",
]));
return 1;
}

