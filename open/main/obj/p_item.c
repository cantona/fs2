// made by ccat
#include </open/open.h>
inherit COMBINED_ITEM;
void create()
{
        set_name("薏仁草", ({"green item","item"}) );
	set("long",
"此物乃制造薏仁丹之材料,此要须经药师调配(check item),\n"+
"方得食用(eat pill)。\n");
	set("unit", "棵");
	set("base_unit", "棵");
	set("value",1000);
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
     if( (arg=="item" || arg=="green item") )
     {
        object user,ob;
        user = this_player();
        cure = user->query_skill("cure",1);
        if( cure > 9)
        {
          message_vision("$N试着将薏仁草制成药丹.\n", user);
	  cure /= 10;
          add_amount(-1);
          ob=new(COMMON_OBJ"pill");
          ob->move(user);
          ob->add_amount((int)cure);
        }else
          message_vision("$N的医术太低,无法将薏仁草制成药丹.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
