// room7.c by konn
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>
#include <command.h>
void create () {
set ("short","一楼长廊");
        set ("long","这是一条黑暗的长廊,幽幽闇影里不禁令人心里发毛,不知是否有什么
妖怪或陷阱的...不过长廊另一头似乎有呻吟声？

                    ～嘎吱～嘎吱～

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room22",
            "west"  : __DIR__"room16",         
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
   if( random(300) > obj->query_skill("dodge") ) {
   message_vision(HIR"突然间四周无数只箭射了过来,$N闪躲不及,只听一声哀嚎$N已被箭射中！\n"NOR,obj);
   obj->add("kee",-kee1/10);
                                                  }                                              
  else  message_vision(HIW"突然间四周无数只箭射了过来,但$N的轻\功了\得\,危急中避了开去\n"NOR,obj);   
       }
}

