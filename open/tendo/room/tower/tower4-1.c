
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔四楼--");
  set ("long", @LONG
来到这里，你发觉打斗的痕迹比方才少了许多，这里的墙壁也是漆着深蓝色，不
同的是这里的空间比前几层都小了些，不过这一层的挑高比前几层都高，你想可能是
为了让闯塔者不易施展轻功的因素。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower4-2",
  "down" : __DIR__"tower3-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/chieftain" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="south"&&present("chieftain",environment(me))) {
  return notify_fail("獠牙文魁吼道: 想过去！先杀了我再说吧！\n");
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



