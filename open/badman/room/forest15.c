// Room: /open/badman/room/forest15.c
// written by powell 96.4.26@FS

#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "湖边竹林");
  set ("long", @LONG
这儿有着一大片的竹林，光是看着这些绿油油的竹叶，以及这
阵阵吹拂着你的微风，这里真是个幽静的好所在，看着这片密密麻
麻的竹林，使你不禁向往起竹林七贤的那份闲情逸致，这个竹林的
西边是个明亮清澈的湖泊。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"forest16",
  "east" : __DIR__"forest14",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "bamboo" : "一根根细长的竹子。"+"等一下, 竹林里好像有个东东..\n"+
  	     "你想拨开(poke)竹林看看吗?\n",
]));
  set("outdoors", "/open/badman");

  setup();
}
void init()
{
	add_action("do_poke", "poke");
}
int do_poke()
{
	if ( this_object()->query_temp("coffin") != 1 ){
	message_vision("赫! 一口棺材突然出现在$N面前....\n"+
		       "真不是个好预兆。\n",this_player());
	new(BAD_OBJ"coffin")->move(this_object());
	this_object()->set_temp("coffin",1);
	return 1;
	}
	tell_object(this_player(),"除了眼前这口棺材外, 你什么也没发现。\n");
	return 1;
}	
