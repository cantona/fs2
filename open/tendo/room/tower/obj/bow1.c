#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"[1;37m��[1;32m���빭[0m",({"bow"}));
        else
         { set_name("[1;32m���빭[0m",({"bow"})); }
        seteuid(getuid());
        set_weight(1000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

        �Ϲ����ر���֮һ�ġ������빭����!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
        }
        init_bow(50);
        setup();
}
int query_autoload() { return 1; }




