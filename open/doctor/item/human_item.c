// 为保障doctor权利..只允许给doctor..check
// 一次只能练制二粒,而且需要最高的医术 cure 120 及 godcure 100才能练制!!!
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("人灵草",({"human item","item"}));
        set("long",
        "此乃昆仑山上最为出名的三圣草之一「人灵草”,\n"+
        "听说所练制出来的丹药,据有起死回生的功能,\n"+
        "此物须经过医者精湛的医术方可提炼。\n");
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
      if( cure > 159)
        {
          cure = 2;//一次最多只能练出二粒
          message_vision("$N试着将人灵草制成灵丹.\n", user);
          ob=new("/open/doctor/pill/human_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将人灵草制成灵丹.\n", user);
        return 1;
     }
     return 0;
}
