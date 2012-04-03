// Room: /open/badman/room/lake3.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "湖底");
  set ("long", @LONG
这里就是恶人湖的湖底，湖底铺满了一层白色的小石子，完全 
没有污泥的存在，也难怪这湖水会这么清澈。在你的正前方有块大
石头平躺在湖壁边，此外还可看一棵棵的水草随着水波摇来摇去，
煞是有趣。
                                                        
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "rock" : "一颗巨大的石头，不知你是否搬的动它。
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"lake2",
]));
  set("objects", ([ /* sizeof() == 1 */
  BAD_NPC"octopus.c" : 1,
]));

  setup();
}

void init()
{
	add_action("do_move","move");
}

int do_move(string arg)
{
	object who = this_player(), ob = this_object();
   	if ( arg == "rock" ) {
        if ( ob ->query_temp("way") != 1 ) {
	message_vision("$N用力将巨石一推，果然石后另有玄机，出现在你眼前的是个
			\r狭窄的通道。\n",who);
	add("exits/enter",__DIR__"lake4");
	ob->set_temp("way",1);
	}
	else {   
   	message_vision("$N用力将巨石一推，又将巨石推回原来的地方。\n",who);
 	delete("exits/enter");	
	ob->delete_temp("way");
	}
	return 1;
	}
	return notify_fail("你想要移动甚么啊？\n");
	return 1;
}
