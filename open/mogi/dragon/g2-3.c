// Room: /u/p/poloer/dragon/g2-3
inherit ROOM;
#include <ansi.h>
#include <mudlib.h>

void create ()
{
  set ("short", "魔王殿二楼");
  set ("long", @LONG

  　　　～ 一片暗暗的，伸手不见五指 ～　

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g2-2",
  "east" : __DIR__"g2-4",
]));
  set("evil", 1);
  set("no_auc", 1);

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
   message_vision(HIR"突然间一阵洪水向$N奔来，$N闪躲不及,已被洪水冲昏了!\n"NOR,obj);
this_player()->add("sen", -100);
                                                  }

  else  message_vision(HIW"突然间一阵洪水向$N奔来，但$N的轻\功了\得\,危急中避了开去\n"NOR,obj);
       }
}
