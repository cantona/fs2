// room7.c by konn
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","孤身不过廊");
        set ("long","
这条长廊就是古堡里有名的「孤身不过”长廊，顾名思义，意指若你
想孤身闯过这道长廊简直难如登天。沿途不但有越来越多的妖魔镇守
更不知道那里会有暗器射出。虽然长廊不见的很长，但是恐怖的程度
会让你有永远走不完的惊栗。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "down"  : __DIR__"room11",
            "north" : __DIR__"room25",        
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
   if( random(300) > obj->query_skill("parry") ) {
   message_vision(HIR"忽然破空之声尖锐响起，数支破甲锥快速奔向$N且射穿了$N，血流不止！\n"NOR,obj);
   obj->add("eff_kee",-kee1/10);
   obj->apply_condition("bleeding",random(30));
                                                  }                                              
  else  message_vision(HIW"忽然破空之声尖锐响起，数支破甲锥快速奔向$N，但被$N一一打落在地！\n"NOR,obj);   
       }
   write(HIC"四周响起「嘿 嘿......”的冷笑声\n"NOR);
}

