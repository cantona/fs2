//tesinroom
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIY"铁心居"NOR);
        set("long", @LONG
进入屋内..一阵浓浓的沉香..另你心神一阵...屋内简单的摆设..让人有种
清新自然的感觉...大厅上..一个年近半百的前辈正闭目沉思..难道它就是传说
中的大剑师--【龙铁心】?
LONG );
        set("exits", ([ /* sizeof() == 3 */
      "out":"/open/gsword/room2/tesinroad2.c",
 ]));
        set("light_up",1);
        set("no_transmit", 1);
        set("objects",([
        "/open/gsword/npc2/tesin.c":1,
  ]));
        setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
      remove_call_out("greeting");
        call_out("greeting", 0, ob);
   }
}

int greeting (object who)
{
 who->set("quests/shasword",6);
 if (who->query_temp("find_tesin8")==1)
 {
 who->set("quests/sblood",1);
 who->delete_temp("find_tesin8",);
 }
 else if (who->query_temp("find_tesin8")==2)
 {
 who->set("quests/sblood",2);
 who->delete_temp("find_tesin8",);
 }
 else  if (who->query_temp("find_tesin8")==3)
 {
 who->set("quests/2blood",3);
 who->delete_temp("find_tesin8",);
 }
}
