#include <weapon.h>
#include <ansi.h>
inherit DAGGER;
int be,bb,inn,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIY"玄武匕首"NOR,({"sawu"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else 
 	{
 		set("unit", "把");
	         	set("long","匕首上刻有玄武之图腾，令人有种沈稳的感觉．\n");
                		set("value",10000);
	                  set("material", "steel");
                		set("no_sell",1);
		set("no_auc",1);
	       set("wield_msg",HIY"$N将$n握在手上，感到一种沈稳的感觉。\n"NOR);
	       set("unwield_msg",HIY"$N画出一道银花，将$n放回身边小袋中。\n"NOR);
	}
        init_dagger(60);
        setup();
}

mixed hit_ob(object me)
{
  object user=this_player();
  object *enemy=user->query_enemy();
  object victim=enemy[random(sizeof(enemy))];
  be = user->query("bellicosity");
  inn = user->query_skill("shadow-kill",1);
  sp = user->query_skill("magic",1);
  bb = user->query_skill("dodge",1);

 if (this_player()->query("class") != "killer")
	return 0;
 if( user->is_fighting() && query("equipped") )
  {//下一行是检查有多少机会驱动特攻，约50％
   //因为使以自己的乱数，如自己的杀气是1000点
   //乱数介于 0-1000点之间，所以一定不大于 1000
   //所以把乱数出来的值*2，造成如果乱数出来的值大于500，就可以大于1000
    if( random(100) > 40)
    {
     if( random(bb*2.5)  > victim->query_skill("dodge",1) )
     {//注意，为了要强调dodge的效用，（现在FS根本不重视）
      //所以，故意以dodge来决定命中度，如果你的dodge大于对方一倍，命中度几乎100％
      //相对的，如果对方的dodge大于你两倍的话，命中度几乎就是0％
      message_vision(HIY"\n匕首扬起一阵重压的感觉，令$N感到阵阵的压力\n"NOR,victim);
      victim->add("sen",-200);
      victim->add("gin",-200);
      COMBAT_D->report_status(victim);
     }
     else
     	 message_vision(HIW"玄武匕首扬起的压力被$N巧妙的躲开\n"NOR,victim);
     }
  }
  return;
}
