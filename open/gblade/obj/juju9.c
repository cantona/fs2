// juju9.c by konn
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIW"九字真言之「前”字诀"NOR,({"juju 9","juju"}));
        set_weight(50);
        if(clonep())
                set_default_object(__FILE__);
        else {
           set("long",
"这是一张极稀有的符纸, 符上画了一些奇怪的符号及文字, 顶端写着一个\n"+
"大大的红字 -- 「前”, 相传这是避邪纳福所用的符纸, 只有茅山道士才\n"+
"会有这种东西, 不知为何流传了出来。\n");

           set("unit", "张");
           set("light_up", -1);
           set("no_drop", 1);
           set("no_sell", 1);
           set("no_give", 1);
        }
        setup();
}

int query_autoload() { return 1; }
