// made by ccat
// 为保障doctor权利..只许给doctor..check
// 道士可以炼丹.所以..将super item及force item开放给taoist
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("天山雪莲", ({"force item","item"}) );
        set("long",
"此物乃蜀中将军自天山绝顶采来之神药,可以顺间恢复内力.\n"+
"此要须经药师调配(check_item item),方得食用(swallow pill).\n");
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
     if( (arg=="item" || arg=="force item") && (query("unit") == "棵") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor"&&user->query("class")!="taoist" && !wizardp(user))
        return notify_fail("你职业不是医者或道士无法药株制成药丸!!\n");
        cure = user->query_skill("cure");
        cure = cure /4;
        if( cure > 14)
        {
          if(user->query("class")=="taoist")
           cure=cure/2;
          message_vision("$N试着将天山雪莲制成灵丹.\n", user);
          ob=new("/open/doctor/pill/ff_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将雪莲制成灵丹.\n", user);
        return 1;
     }
     return 0;
}
