#include <armor.h>
#include <ansi.h>
inherit WRISTS;
void create()
{
set_name( ""HIY"□HIW"□HIR"□HIW"□HIR"□HIW"□HIY"□HIW"N"NOR"",({"moon_bracelet","bracelet"}));
set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long","这件宝物平常都是由月神所掌管着 , 只有和它拥有相同灵性的人才能穿戴\n");
                set("unit", "个");
                set("no_sell",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
                set("no_put",1);
   set("no_get",1);
         set("material","gem");
                set("armor_prop/armor",15);
                set("armor_prop/parry",10);
                set("armor_prop/force",9);
set("wear_msg","$N套上$n，受到月亮之神的祝福，信心大增 .\n");
 }
        setup();
}
