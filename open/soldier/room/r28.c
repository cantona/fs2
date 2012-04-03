
inherit ROOM;
void create()
{
set("short", "会议室");
set("long", @LONG
    这里是反乱军的会议室，在你面前有一长圆桌上面摆
满了一些文件和地图，在圆桌正对面有一座位是用黄金打
造的，非常的耀眼～在东面墙上布满了武器，似乎好像要
常常出外打战，在武器(weapon)后方好像有一扇门，充满
了神秘感。。。

LONG
);
set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r29.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "weapon" : "一把超大型兵器,在他后面好像有东西(things)。\n",
  "things" : "你看了一下..在考虑要不要把兵器翻开(turn)。。。\n",     
]));


setup();
}

void init()
{
  add_action("do_turn", "turn");
}

int do_turn(string arg)
{
object me;
me=this_player();
if(me->query("class")!="soldier")
return notify_fail("只有职业佣兵能用。\n");
message_vision("$N你把武器翻来翻去终于出现了一个门。\n", me);
message_vision("$N顺势推开门走了进去。。。\n", me);
me->move("/open/soldier/room/r22.c");
return 1;      
 }
              
   
  
  
  
