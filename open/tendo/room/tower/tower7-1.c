
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔七楼--");
  set ("long", @LONG
这里是武威七杀塔的倒数第二层，站在这里，你有一种说不出的紧张感，一旁的小窗
子还不断吹进微风；你忽然发现墙角阴暗处站着一个身形高大的人，你猜想他大概就是这
间房间的主人，或者是这个塔的主人！？
LONG);

 
  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"tower6-2",
  "east" : __DIR__"tower7-2",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/towerking" : 1,
]));
        set("no_transmit",1);
        set("no_smash",1);
        set("no_dest",1);

  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("tower king",environment(me))) {
  return notify_fail("镇塔明王大叫：想上去，想杀了我再说吧！\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 5,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 5,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



