// change by adam
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name(HIC"千年天山雪莲"NOR, ({"force item","item"}) );
        set("long",
"此物乃是吸收千年天地精华精华的神药之神药,可以顺间恢复内力.\n"+
"此要须经药师调配(check item),方得食用(swallow pill).\n");
        set("unit", "棵");
        set("base_unit", "棵");
        set("no_sell",1);
        set("value",2500);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
        if( this_player()==environment() )
        {
                add_action("check_item","check");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="force item") && (query("unit") == "棵") )
     {
        object user,ob;
        user = this_player();
        if( user->query_skill_mapped("cure")=="godcure" )
        {
           cure = user->query_skill("cure");
        }else{
           cure = user->query_skill("cure")/2;
        }
        if( cure > 14)
        {
          message_vision("$N试着将天山雪莲制成灵丹.\n", user);
         cure = cure/2;
          ob=new("/open/gsword/obj/ff_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将雪莲制成灵丹.\n", user);
        return 1;
     }
     return 0;
}
