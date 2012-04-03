#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
object user=this_player();
object ob=this_object();
int be,bb,k,sp,qq,co,st;

void create()
{
 	        set_name(HIY"幻纹妖爪"NOR, ({ "ghost claw" ,"claw" }) );
	        set_weight(1500);
       		if( clonep() )
                set_default_object(__FILE__);
        	else {
        	set("long", "千年树妖－舞风扬妖力所幻化，带有些微的妖力和强大的杀伤力。\n");
                set("unit", "把");
                set("value", 300000);
                set("material", "blacksteel");
		set("sharp",9);
		set("type", 1);
		set("no_steal",1);
		set("no_give",1);
       		}
		init_unarmed(150);
 		set("wield_msg",HIY"$N"HIY"运起内力，缓缓将内力灌入$n"HIY"，$n"HIY"感受到$N"HIY"的能力而放出炽热光茫!!\n"NOR);
		set("unwield_msg",HIY"$N"HIY"缓缓收回内力，$n"HIY"也渐渐变回一般不起眼的武器。\n"NOR);
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
//     ::wield();
	if(str=="ghost claw" || str=="claw" || str=="all")
	if( !query("equipped") )
	{
        user = this_player();
//	message_vision(HIY"$N"HIY"运起内力，缓缓将内力灌入$n"HIY"，$n"HIY"感受到$N"HIY"的能力而放出炽热光茫!!\n"NOR,user,ob);
        set_heart_beat(1);
	}
}

int do_drop(string str)
{
	if(str=="ghost claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
	message_vision(HIY"$N"HIY"缓缓收回内力，$n"HIY"也渐渐变回一般不起眼的武器。\n"NOR,user,ob);
        set_heart_beat(0);
	}
}

int do_unwield(string str)
{
	if(str=="ghost claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
//	message_vision(HIY"$N"HIY"缓缓收回内力，$n"HIY"也渐渐变回一般不起眼的武器。\n"NOR,user,ob);
        set_heart_beat(0);
	}
}

int do_auc(string str)
{
	if(str=="ghost claw" || str=="claw" || str=="all")
	if( query("equipped") )
	{
	message_vision(HIY"$N"HIY"缓缓收回内力，$n"HIY"也渐渐变回一般不起眼的武器。\n"NOR,user,ob);
        set_heart_beat(0);
	}
}
void heart_beat()
{
	object *enemy;
	int i;

	if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }

	if( !user->query_skill("unarmed") )
	{
	be = random(120);
	}else{
	be = user->query_skill("unarmed",1);
	}

	k = user->query("int",1);
	sp = user->query("spi",1);
	co = user->query("cor",1);
	st = user->query("str",1);
	qq = (int)((k+sp+co+st)*(k+sp+co+st) / 60);

	if( user->is_fighting() && query("equipped") )
	{
	  if( be > random(500) )
	  {
	  enemy=user->query_enemy();
  	  if(!enemy) return ;
	  i=random(sizeof(enemy));
      if(!enemy[i]) i=0;
      if(!enemy[i]) return ;
	  if( environment(user) == environment(enemy[i]) )
	  if( random(300) > random(enemy[i]->query_skill("dodge",1)) )
	  {
	  message_vision(HIY"一道妖气由$n"HIY"急速窜出，化为数道的电气直攻$N"HIY"的周身要害!!\n"NOR,enemy[i],ob);
	  enemy[i]->receive_wound("kee",(int)(qq+be),user);
	  COMBAT_D->report_status(enemy[i], 0);
	  }else
	  message_vision(HIW"一道妖气由$n"HIW"急速窜出，但被$N"HIW"机警的闪过!!\n"NOR,enemy[i],ob);
	  }
	}
	return;
}

