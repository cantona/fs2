// 为保障doctor权利..只允许给doctor..check
// 天山续断膏
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("天山寒霜草",({"ice_tree item","item"}));
        set("long",
        "此乃银针门掌门华陀先生费经千辛万苦从天山所移植过来的药草。\n"+
        "此草对外伤有着起死回生的功效,但是需要炼制(make)方能使用。\n");
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
                add_action("make_item","make");
}

int make_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="ice_tree item") && (query("unit") == "棵") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
       cure = user->query_skill("cure");
       cure = cure /4;
        if( cure > 10)
        {
          message_vision("$N试着将天山寒霜草制成天香断续膏.\n", user);
          ob=new("/open/common/obj/plaster2");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将寒霜草制成断续膏\n", user);
        return 1;
     }
     return 0;
}

