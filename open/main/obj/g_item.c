// made by ccat
// 为保障doctor权利..只允许给doctor..check
inherit COMBINED_ITEM;
void create()
{
        set_name("还精草", ({"gin item","item"}) );
        set("long",
"此物乃制造还精丸之材料,此要须经药师调配(check item),\n"+
"方得食用(swallow pill).\n");
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
     if( (arg=="item" || arg=="gin item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
        cure = user->query_skill("cure",1);
        cure = cure /4;
       if( cure > 10)
        {
          message_vision("$N试着将还精草制成还精丸.\n", user);
          ob=new("/open/doctor/pill/g_pill");
          ob->move(user);
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将还精草制成还精丸.\n", user);
        return 1; 
     }
     return 0;   
}              
              
                           
