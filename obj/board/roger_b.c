//roger's board
inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
   set_name(HIY"\n  舰桥主银幕"NOR, ({"board"}));
   set("location","/u/r/roger/workroom");
   set("board_id","roger_b1");
   set("long","高科技的椭圆形乳白银幕,显示魔界一切的状态。\n");
   setup();
   set("capacity", 100);
        set("master",({"roger"}));
}
