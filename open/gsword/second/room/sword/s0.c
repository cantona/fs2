#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"虚空世界－九空圣剑界"NOR);
        set("long", @LONG
你眼前一片昏暗，眼前所见一片漆黑，只有你手中的灵剑连阳发出淡淡的光芒，
似乎在引导你前进的道路。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
]));

        set("no_transmit", 1);
        set("no_drop",1);
        set("no_auc",1);
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
  object room = this_object();
  object mob;
  int i;
  int edir=random(30);
  int wdir=random(30);
  int ndir=random(30);
  int sdir=random(30);
  room->set("exits/west","/open/gsword/second/room/sword/s"+wdir);
  room->set("exits/east","/open/gsword/second/room/sword/s"+edir);
  room->set("exits/north","/open/gsword/second/room/sword/s"+ndir);
  room->set("exits/south","/open/gsword/second/room/sword/s"+sdir);
  if(who->query("bellicosity") > 500+random(100)) {
    message_vision(HIR"\n$N进入九空圣剑界后..瞬间九幽之破魔七星发出耀眼光芒.\n",who);
    message_vision(HIR"光芒消失后，数条骇人之巨龙传送至九空圣剑界之中，攻向$N冲来！！！\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--) {
      mob=new("/open/gsword/npc2/t_dragon");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  }
  return 1;
}
int valid_leave(object me, string dir)
{
if((dir=="north" || dir=="south" || dir=="east" || dir=="west")&& present("dragon",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("你以为你能活得过去吗??"+RANK_D->query_respect(me)+"你去死吧!\n");
return ::valid_leave(me,dir);
}