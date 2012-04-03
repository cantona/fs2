//castle by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", HIC"妖魔古堡入口"NOR);
        set ("long","这里就是封闭了几千年的妖魔古堡,外表斑斑驳驳不知经过了多少的
腥风血雨,不过结构上倒还蛮坚固的。魔云的密布下映着古堡惨蓝的外表,
不禁使人不寒而栗。大门(door)是由厚厚的木板作成,门旁挂着两个随着
狂风摇曳的妖气灯笼,门栓已经锈蚀得好像不能开了。仔细一看似乎还沾
着斑斑血迹...门旁有一块木板(plate)不过上面的字似乎快看不清了...。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 3 */
    "west" : __DIR__"a",      
      ]));


       set("item_desc", ([ /* sizeof() == 2 */
  "door" : "这门看起来蛮厚的,似乎要用内力撞开(collide)才行。\n",

 "plate" :
"      上面隐约可见:
 甫入...此门..,..群..魔..齐上,慌...乱..挥剑..自保 
 但...仍落得...剑断..人伤..,九死...一生...方得逃出
 后人...戒之...戒之...切不可....孤身进入
 
                             风...清...扬          

  ",]));

        set("objects",([ /* sizeof() == 1 */
   //__DIR__"mob" : 1,
      ]));

        setup();
}
void init()
{
        add_action("do_collide", "collide");
}

int do_collide(string str){

   object me;
        me = this_player();

        if(!str || str != "door"){
                return notify_fail("你想撞哪里？\n");
                           return 1;
                                 }
        if(me->query("force",1) < 2000){
             
             message_vision("$N运起全身内力一撞,但因内力不足,大门纹风不动。\n",me);


                           return 1;
                                        }
        
            me->add("force",-2000);
            message_vision(HIY"$N运起全身内力一撞，轰隆一声巨响大门以被撞开!!\n",me);
            tell_object(me,HIR"\n你耗尽全身内力,几欲虚脱。\n"NOR);
            set("exits/enter",__DIR__"room1");
                  set_temp("have_open",1);
                  remove_call_out("do_closed");
                  call_out("do_closed",15);
                  return 1;

            
}
void do_closed()
{

        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"大门碰的一声又关起来。\n");
}
