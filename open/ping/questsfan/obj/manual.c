//无敌棋意------by dhk 2000.4.9
#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(""WHT"无敌"HIR"棋"WHT"意"NOR"", ({ "board chess manual","manual" }) );
    set_weight(50);
 if( clonep() )
    set_default_object(__FILE__);
 else {
       set("long", "这是一本记载古今最为奥妙棋局的释棋谱，相传这是"HIR"红帅先生"NOR"呕心沥血的著作。\n");
       set("unit", "本");
       set("value", 150000);
       set("no_auc",1);
      }
    setup();
}
