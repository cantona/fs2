#include <weapon.h>
#include <ansi.h>

inherit UNARMED;
object user=this_player();
object ob=this_object();
int be,bb,k,sp,qq,co,st;

void create()
{
     set_name(BLU"魔爪混天杀"NOR,({"evil-kill-claw","claw"}) );
     set_weight(10000);
     if( clonep() ) 
            set_default_object(__FILE__);
     else {
            set("long","莫道子所使用的武器，为一神秘铸将精心铸造的「八色灵器”之一，爪身\n散出极强的杀气。\n");
            set("unit", "把");             
            set("value",20000);
            set("sharp",9);
            set("material","blacksteel");
			set("e-weapon",1);
			set("no_give",1);
 			set("no_steal",1);
            }
	init_unarmed(100);
 	set("wield_msg",GRN"$N"GRN"载上$n"GRN"，$n"GRN"周身散出浓烈的杀气，似要吐噬一切事物!!\n"NOR);
        set("unwield_msg","$N轻轻卸下$n，$n散出的杀气也渐渐缓和下来。\n"NOR);

          setup();
}                   


void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{
	int uexp;
//	::wield();
	if( !query("equipped") )
	{
	user = this_player();
	uexp = user->query("combat_exp");
	  if( uexp < 3000000 )
	  {
	  message_vision("$N的经验并不足以完全支配这样的神兵利器!!\n"NOR,user);
	  set_heart_beat(0);
	  }else{
//	  message_vision(GRN"$N"GRN"载上$n"GRN"，$n"GRN"周身散出浓烈的杀气，似要吐噬一切事物!!\n"NOR,user,ob);
	  set_heart_beat(1);
	  }
	}
}

int do_drop(string str)
{
	if(str=="evil-kill-claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
	message_vision("$N轻轻卸下$n，$n散出的杀气也渐渐缓和下来。\n"NOR,user,ob);
	set_heart_beat(0);
	}
}

int do_unwield(string str)
{
	if(str=="evil-kill-claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
//	message_vision("$N轻轻卸下$n，$n散出的杀气也渐渐缓和下来。\n"NOR,user,ob);
	set_heart_beat(0);
	}
}

int do_auc(string str)
{
	if(str=="evil-kill-claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
	message_vision("$N轻轻卸下$n，$n散出的杀气也渐渐缓和下来。\n"NOR,user,ob);
	set_heart_beat(0);
	}
}
void heart_beat()
{
	object *enemy;
	int i;

	if( !objectp(user) )
	{
	set_heart_beat(0);
	return;
	}

	if( user->query_skill("unarmed") )
	{
	be = user->query_skill("unarmed",1);
	}else{
	be = random(120);
	}

	k = user->query("int",1);
	sp = user->query("spi",1);
	co = user->query("cor",1);
	st = user->query("str",1);
	qq = (int)((k+sp+co+st)*(k+sp+co+st) / 60);
	if( user->query("class") == "bandit" )
	{
	qq = qq*1.5;
	be = be*0.75;
	}

	if( user->is_fighting() && query("equipped") )
	{
	  if( be > random(500) )
	  {
	  enemy=user->query_enemy();
  	  if(!enemy) return ;
	  i=random(sizeof(enemy));
	  if( environment(user) == environment(enemy[i]) )
	  if( random(300) > random(enemy[i]->query_skill("dodge",1)) )
	  {
	  message_vision(HIB"只见"NOR"$n"HIB"周身散发出的杀气忽然聚成一道气劲，直冲$N"HIB"心坎要害!!\n"NOR,enemy[i],ob);
	  enemy[i]->receive_wound("kee",(int)(qq+be),user);
	  COMBAT_D->report_status(enemy[i], 0);
	  }else
	  message_vision(BLU"$N"BLU"见状，不慌不忙的避开了这道极具威力的杀气!!\n"NOR,enemy[i],ob);
	  }
	}
	return;
}

