// Room: /open/snow/room/hole3.c
// 雪泉圣地中的洞穴
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "洞穴");
  set ("long", @LONG
经过狭小通道后，你来到一个巨大的洞穴之中，只见四周的壁上刻满了
图形，仔细一看原来壁上的图形皆是传说中古代的圣兽有麒麟、凤凰、
..等，前上的壁上刻有一幅青龙追日的图形，其雕刻的青龙栩栩如生好
像是跟真的一样，左方的壁上(wall)似乎有东西。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "wall" : "泷山--任正晴到此一游!!!!
      ",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"s_hole1.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
void init()
{
  add_action("do_search","search");
  add_action("do_put","put");
  add_action("do_use","use");
}
int do_search(string str)
{
  object ob,ob1;
  ob=this_player();
  if(ob->query("ask_god_kee") != 2)
    return notify_fail("你丝毫寻找不出任何异状!!!\n");
  if( str!="dragon")
    return notify_fail("你丝毫寻找不出任何异状!!!\n");
  message_vision("经过$N细心的寻找之后，$N发现壁上的青龙追日中的太阳似乎缺少了某部份。\n",ob);
  ob->set("can_use",1);
  return 1;
}
int do_use(string str)
{
  object ob,ob1;
  ob=this_player();
      if(!present("sky_lin_stone",this_player()))
    return notify_fail("你要使用什么东西呀!!!\n");
  if(ob->query("can_use") != 1)
    return notify_fail("你要使用什么东西呀!!!\n");
      if( str!="sky_lin_stone")
    return notify_fail("你要使用什么东西呀!!!\n");
  if(ob->query("sec_kee") != "dragon")
    return notify_fail("只有拥有青龙之气的人才能使用天灵珠!!!\n");
  message_vision(HIW"$N将天灵珠放在胸前,$N全身发出光茫!!$N身上的"HIB"青龙之气"HIW"涌出汇入了天灵珠之中了。\n"NOR,ob);
  ob->set("can_put",1);
  return 1;
}

int do_put(string str)
{
object ob=this_player();
if(!present("sky_lin_stone",this_player()))
    return notify_fail("你要放什么东西呀!!!\n");
  if(ob->query("can_put") != 1)
    return notify_fail("你要放什么东西呀!!!\n");
  if( str!="sun")
    return notify_fail("你要放什么东西呀!!!\n");
  message_vision(HIW"$N将天灵珠放入"HIY"太阳"HIW"之中，此时壁上的青龙追日图发出剌目的光线。\n"NOR,ob);
  message_vision(HIY"一道柔和的光线将$N包住，$N消失在光线之中了.....\n"NOR,ob);
  ob->move(__DIR__"godrom1");
  return 1;
}

