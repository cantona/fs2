#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIC"玄天冰晶"NOR, ({"mysterious crystal","board"}));
  set("location","/u/b/babe/workroom.c");
set("board_id","babe_b2");
  set("long","
    要唸完书, 做完功课, 才能玩 mud 喔!\n
    做个乖宝宝...\n
    不管有事没事都欢迎POST..");
    setup();
set("capacity", 100);
  set("master",({"babe"}));
}
