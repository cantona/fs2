// change by adam
#include <ansi.h>
inherit COMBINED_ITEM;
void create()
{
        set_name(HIC"千年仙山灵芝"NOR, ({"super item","item"}) );
	set("long",
"此物乃吸收天地精华千年以上之神药,专克血气失调.\n"+
"此要须经药师调配(check item),方得食用(eat pill)。\n");
	set("unit", "棵");
	set("base_unit", "棵");
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
     if( (arg=="item" || arg=="super item") )
     {
        object user,ob;
        user = this_player();
        cure = user->query_skill("cure",1);
        if( user->query_skill_mapped("cure")=="godcure" )
        {
         cure = user->query_skill("cure");
        }else{
        cure = user->query_skill("cure")/2;
        }
                                                      
        if( cure > 20)
        {
          message_vision("$N试着将灵芝制成仙丹.\n", user);
      // add_amount(-1);    这段应该加在后面。
          cure = cure/2;
          ob=new("/open/gsword/obj/f_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将灵芝制成仙丹.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
