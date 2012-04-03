
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short","锁妖塔三楼--");
  set ("long", @LONG
刚踏上这一层楼，你的视线就被一股深蓝色所占满。这一层的四周墙壁，已经
不再是刚刚的那种暗红，而是漆上了一种令人不寒而栗的深蓝；加上斑驳的血印，
使刚刚那股肃杀的气氛又笼罩在你身上。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tower3-2",
  "down" : __DIR__"tower2-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/plaguer" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="north"&&present("plaguer",environment(me))) {
  return notify_fail("七煞瘟神吼道: 想过去！先杀了我再说吧！\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}


