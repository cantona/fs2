
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔一楼--");
  set ("long", @LONG
来到这里，你发现杀气越来越浓，由于紧张的关系。四周的景致你也无心看顾，
只觉得映入眼廉的是一片片的暗红色，你不禁感到有些头晕。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower1-1",
  "east" : __DIR__"tower1-3",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/monster" : 1,
]));

        set("no_transmit",1);
  setup();
}
  int valid_leave(object me, string dir) {
  if(dir=="east"&&present("monster",environment(me))) {
  return notify_fail("阴阳怪叟吼道: 想过去！先杀了我再说吧！\n");
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


