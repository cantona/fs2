#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIW"天地破魔阵"NOR);
        set("long", @LONG
这是传说中由破魔师-于兰天武所设计的破魔奇阵..阵中遥遥望去发现阵眼安置了
传说中的破魔七星..据说此七星乃是女娲补天所用九天玄晶所制成..乃破魔至极之物
眼见破魔七星闪闪发亮..你心中魔气顿时受到压抑...。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
]));
        set("light_up",1);
        set("no_transmit", 1);
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
  int edir=random(20);
  int wdir=random(20);
  int ndir=random(20);
  int sdir=random(20);
  room->set("exits/west","/open/gsword/room2/array"+wdir);
  room->set("exits/east","/open/gsword/room2/array"+edir);
  room->set("exits/north","/open/gsword/room2/array"+ndir);
  room->set("exits/south","/open/gsword/room2/array"+sdir);
  if(who->query("bellicosity") > 500+random(100)) {
    message_vision(HIR"\n$N进入天地破魔阵后..瞬间阵眼中的破魔七星发出耀眼光芒.\n",who);
    message_vision(HIR"光芒消失后，数条骇人之巨龙向$N冲来！！！\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--)
   {
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

