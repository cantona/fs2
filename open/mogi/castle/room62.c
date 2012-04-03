
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","古堡三楼");
        set ("long","墙壁上点着青绿色的鬼火，仔细一看是由酷似骷髅\的银器作成灯座，绿
光便由骷髅\的两只眼睛里射出，豪华中透着恐怖的气息。地上也铺着厚
厚的地毯，令人不禁惊奇地东张西望。四周的妖魔似乎也都披金戴银，
性情也温和的多，但一身武艺看起来比楼下的是有过之而无不及，你不
禁怀疑自己真是在魔界？你看到北方传来强大的杀气，应该已经接近
焚天魔王的所在!
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "south" : __DIR__"room61",
            "west" : __DIR__"room59",          
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

