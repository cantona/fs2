#include <weapon.h>
#include <ansi.h>

inherit STABBER;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"��[32mʥ��֮��[0m",({"canonize fan","fan"}));
        else
         { set_name("[32mʥ��֮��[0m",({"canonize fan","fan"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	�Ϲ����ر���֮һ�ġ���[32mʥ��֮��[0m����!! 
	
LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);  
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//      set("wield_msg", "$N�ӵ��ʽ�$n�γ���֮�󣬺������䡣\n");
//      set("unwield_msg", "$N���·���$n�������������ɫ�ĺ��ⱻ�������ڱ��ˡ�\n");
        }
        init_stabber(60);
        setup();
}               

int query_autoload() { return 1; }
      
