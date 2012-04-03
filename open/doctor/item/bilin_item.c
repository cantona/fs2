// 为保障doctor权利..只允许给doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("十年梗树茎",({"tree item","item"}));
        set("long",
        "此乃银针门掌门华陀先生所精心栽培的梗树,此树以各种不同药物之合成肥料所种,有顾本蓓元之效,可外敷亦可内用(你可以以check 及make 来提炼此药。\n此物须经过医者精湛的医术方可提炼。\n");
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
                add_action("check_item","check_item");
                add_action("make_item","make");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="tree item") && (query("unit") == "棵") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
       cure = user->query_skill("cure");
       cure = cure /3;
        if( cure > 10)
        {
          message_vision("$N试着将十年梗树茎制成保命丹.\n", user);
          ob=new("/open/doctor/pill/life_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将树茎制成保命丹.\n", user);
        return 1;
     }
     return 0;
}

int make_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="tree item") && (query("unit") == "棵") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成膏药!!\n");
       cure = user->query_skill("cure");
       cure = cure /3;
        if( cure > 10)
        {
          message_vision("$N试着将十年梗树茎制成金创药.\n", user);
          ob=new("/open/common/obj/plaster");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将树茎制成保命丹.\n", user);
        return 1;
     }
     return 0;
}
