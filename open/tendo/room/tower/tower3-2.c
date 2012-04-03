
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔三楼--");
  set ("long", @LONG
来到了这儿，你发现这里一定经历过相当惨烈的战斗，除了四布的血印以及满墙
的掌印，还有一股股湿秽的霉味；你发觉墙角还有几具残缺的骷骨，你想这一些一定
是牺牲在这里的强者们。
LONG );

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower3-1",
  "east" : __DIR__"tower3-3",
]));
 set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/villain" : 1,
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir) {
  if(dir=="east"&&present("villain",environment(me))) {
  return notify_fail("血面罗刹吼道: 想过去！先杀了我再说吧！\n");
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


