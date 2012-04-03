
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔二楼--");
  set ("long", @LONG
走到了这儿，发现地上的血渍不像方才那么多，但四周的杀气比方才更加的
浓烈，你发现遍地骷髅，白骨成堆，燐光闪烁，好似鬼一般，武林中人丢弃的刀
枪剑爪，处处皆世，阴风吹过，寒意透心。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower2-2",
  "down" : __DIR__"tower1-8",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/snake" : 1,
]));

      set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="south"&&present("snake",environment(me))) {
  return notify_fail("蛇妖杜糜吼道: 想过去！先杀了我再说吧！\n");
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



