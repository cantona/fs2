
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔七楼--");
  set ("long", @LONG
这里是锁妖塔里的倒数第二层，在这里你完全看不到外面的状况，显得相
当地诡异，空气之中还弥漫着一股白雾，更添了几分神秘气息，说不定你该考
虑回头，或许现在还来得及。
LONG);

 
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"tower7-1",
  "up" : __DIR__"tower8",
]));
       set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t武林之中传来一道消息 : "HIY""+this_player()->name()+""HIW"勇闯"HIR"锁妖塔"HIW"第八层了 !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}



