
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔五楼--");
  set ("long", @LONG
来到这里，你忽然发现地上布满一层灰，连刚刚楼梯的把手上，也满是灰尘，你
想能上到五层楼的人，一定是少之又少。这儿的景色依旧单调：深蓝色的墙壁、无窗
格局，唯一令你感到不一样的，是少了刚刚那一股肃杀之气。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower5-2",
  "down" : __DIR__"tower4-2",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/goblin" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="west"&&present("goblin",environment(me))) {
  return notify_fail("血掌蟠妖吼道：想过去！先杀了我再说吧！\n");
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


