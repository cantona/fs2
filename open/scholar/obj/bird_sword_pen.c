
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
object user;
void create()
{
     set_name("诸凰剑笔",({"bird-sword-pen","sword-pen","pen"}));
     set_weight(1000);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {

set("long","刻有四时江雨之奥妙剑招，配合笔法才会有极大威力\n");
            set("unit", "件");             
            set("value",10000);
            set("no_sell", 1);
            set("no_drop", 1);
            set("no_auc", 1);
            set("no_put",1);
            set("material","blacksteal");
           }         
        init_stabber(95);
        setup();
}

