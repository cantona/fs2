#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "绿云组内部");
  set ("long", @LONG
	挖勒.....走错路啦，这又是一条鬼斧神工通道，

	笔直的天然通道，让你很难去想像这是怎么产生的？

	看来该才应该走另外一个方向的道路，才找的到绿云组组长的所在地。
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"g4.c",
  "west" : __DIR__"g9.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
      "can" : "炉中火焰正鼎沸，试着将富士山秘草炼化吧。 ",]));
  setup();
}

/* 以后在加上有关杀手医生的迷，利用search 
void init()
{
add_action("do_secret",({"secret"}));
}

int do_secret()
{
 object me;

 me=this_player();
 if(me->query("class") != "killer")
 return 0;
 tell_object(me,"这房间果然有秘密！！发现了通道，你立刻走了过去\n");
 me->move(__DIR__"mimirm.c");
}
*/
