
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔五楼--");
  set ("long", @LONG
你发现这儿的景致忽然一变，强烈的白色映入你眼帘，只是地上鬼火处处，
蓝焰汪汪，跳来跳去，阴风一掠之下，更是忽东忽西，时隐时现，饶是绿林豪客
，江湖枭雄处此，也不免要胆战心寒，拔腿而逃。你看到通往六楼的梯子近在咫
尺，不禁有一股冲动想赶快上去！
。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"tower5-1",
  "up" : __DIR__"tower6-1",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t武林之中传来一道消息 : "HIY""+this_player()->name()+""HIW"勇闯"HIR"锁妖塔"HIW"第六层了 !!\n"NOR,users());
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




