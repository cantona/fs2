#include </open/open.h>
inherit ROOM;

void create ()
{
set("short", "荒郊");
set("long", @LONG
   从这里向四周望去，除了一大片高及腰部的杂草，与一面大山壁（wall)
   在山壁附近似乎有许多乱石堆着，但是却没有许多灰尘，似乎有不少人经过的样子。
   但你看了半天还是看不出究竟，或许是你多疑了吧。。。。。。
   咦？刚才似乎有一道黑影闪过，是不是你眼睛看错了呢？。。。。
LONG 
);
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/main/room/r17.c",
]) );
  set("outdoors", "/open/main" );
  set("item_desc", ([ /* sizeof() == 2 */
  "wall" : "一面巨大的墙，似乎在乱石中有一道裂缝（road)看看吧。。。\n",
  "road" : "一堆乱石挡住的裂缝，不过似乎还是有点奇怪，调查一下（rock)吧\n",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "rock" : "在你继而不舍的调查之下，居然被你发现了一个按钮(button)。\n",
  "button" : "在你仔细调查了按钮之后，你觉得似乎应该是用拉（pull)的\n",
]));
  setup();
}
void init()
{
	add_action("do_pull","pull");
	add_action("do_push","push");
}

int do_pull(string str)
{
  object me;

  me=this_player();
  if( str != "button" )
    return notify_fail("拉什么?，不要拉错了好不好？\n");
  tell_room(this_object(),"$n用力的把按钮拉起来。\n",me);
  message_vision("$n看到山壁突然露出一个通道，$n急忙往内一冲。\n",me,me);
  me->move(__DIR__"outr0.c");
  return 1;
}

int do_push(string str)
{
	object me=this_player();
        
        if( str != "button" )
           return notify_fail("压什么?，需要配附眼镜吗？？\n");
	message_vision("不小心触动机关，一支花针射中$N。\n",me);
	me->add("kee",-50);
	return 0;
}