//一张拜帖------by dhk 2000.5.7
#include </open/open.h>
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name("一张拜帖", ({ "duan's letter","letter" }) );
    set_weight(100);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "这是一张段云亲笔要交予段霾的拜帖。\n");
       set("unit", "张");
       set("value", 100);
       set("no_sell",1);
       set("no_drop",1);
       set("no_auc",1);
       set("no_get",1);
      }
    setup();
}


