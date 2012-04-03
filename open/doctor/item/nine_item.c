// 为保障doctor权利..只允许给doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("九节菖蒲",({"nine item","item"}) );
        set("long",
        "此物乃是银针门主远赴泰山所采来之神药,可以恢复少许法力.\n"+
        "此物须经医者炼制(check item),方得食用.\n");
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
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="super item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
        cure = user->query_skill("cure");
        cure = cure /4;
      if( cure > 14)
        {
          message_vision("$N试着将菖蒲制成灵丹.\n", user);
          ob=new("/open/doctor/pill/nine_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将菖蒲制成灵丹.\n", user);
        return 1;
     }
     return 0;
}
