
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","魔之左翼");
        set ("long","随着你走过每一步, 灼烫的魔气愈是升高, 相映墙上的火蠋鬼影, 令人神
智不清, 精神上承受着无比的压力. 此地墙石均是由魔界深处的漆黑墨石
所拼, 邪气郁郁, 石性极阳, 呼应着焚天魔王的魔气荡荡. 而妖魅之影散
乱, 孰不知人间黑夜之阴翳, 无丝无竹, 兽号魔哭回转绕光不曾歇止.  
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east"  : __DIR__"room50",
            "north" : __DIR__"room72",
            "south" : __DIR__"room70",          
      ]));
        setup();
}

void init()
{
      call_out("do_damage",1,this_player()); 
}
void do_damage(object ob){
 mixed all;
 object obj,who,room;
 int kee1,i,j;
    
    
        room = environment(ob);
        all = all_inventory(room);
        for( i = 0 ; i < sizeof(all) ; i++)
        {
   obj = all[i];
   kee1=obj->query("eff_kee");  
   if( random(500) > obj->query_skill("parry")+obj->query_skill("dodge") ) {
   message_vision(HIR"嗤嗤声响处，几枚毒蒺菱快速射出，$N闪躲不及被毒蒺菱给射中！\n"NOR,obj);
   obj->add("eff_kee",-kee1/30);
   obj->apply_condition("dark_poison",random(20));
                                                  }                                              
  else  message_vision(HIW"嗤嗤声响处，几枚毒蒺菱快速射出，$N连忙窜高伏低，并挥手击落射来的暗器\n"NOR,obj);   
       }
}

