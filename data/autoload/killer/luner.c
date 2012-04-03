#include <ansi.h>
#include <weapon.h>
#include <armor.h>
#include "/open/open.h"
inherit UNARMED;
void create()
{

   set_name(HIR"天恨"NOR,({ "skyhate"}) );
   set_weight(3500);
   if( clonep() )
         set_default_object(__FILE__);
   else 
   {
     set("long",@LONG
此把天恨之上，充满着无尽的怨念，自古无人能驯，直到遇到真主-luner后
经过一番苦战之后才为他所用，成为其专属武器。

     下列是你可以对他下的命令，详细内容请打help skyhate
     锻炼(discipline)      格式 discipline           ：以自身力量使光系力量成长
     吸收(absorb)     	格式 absorb <target>  ：吸收对方使暗黑系力量成长
     命名(rename)   	格式 rename <name> ：为武器改名
     资料(dag_data)       格式 skyhate_data           ：察看武器目前的水准
LONG);
     set("unit","对");
     set("value",0);
     set("material", "steel");
     set("wield_msg", HIR"$N脸露恨意暴喝一声一道电光盈绕在$N身上，形成$n \n"NOR);
     set("unwield_msg", HIR"$N脸上恨意消退，将$n往天空一抛，$n化为电光隐没于天际\n"NOR);
     set("no_sell",1);
     set("no_drop",1);
     set("no_auc",1);
   }
   init_unarmed(1);
   //更新原有的攻击力
       if (this_player()->query("dag/sun/lv") > 2)
   	  this_object()->set("weapon_prop/damage",this_player()->query("dag/sun/at"));
       else
    	  this_object()->set("weapon_prop/damage",this_player()->query("dag/dark/at"));
   setup();
}

void init()
{
   if( this_player()==environment() )
   {
    if(this_player()->query("id") == "luner"  || this_player()->query("id") =="wataru")
    {
       add_action("feed_dag","discipline");
       add_action("target_absorb","absorb");
       add_action("rename_dag","rename");
       add_action("verify_pet","skyhate_data");
       add_action("help_dream","help");
    }
   }
}

int feed_dag(string arg)
{
   object obj,me=this_player();
   int limit_force,daglv;
   int expm;

   if(arg)  return notify_fail("指令格式: discipline \n");
//为了避免强者超好练，所以每次用5%来练
//且限制下限,max_force 1000的5%是50
   limit_force=me->query("max_force")/100;
   limit_force= limit_force *5;
   if (limit_force < 50)
	return notify_fail("你的内力不够精纯，不足以培养光系力量。\n");
   if(me->query("force") < limit_force)
	return notify_fail("少年的。。。。内力不够啦！\n");
//检查上一次练，这一次练之间的时间差之间必须相隔1 min
//如果之前都没练，那qktime会是零，自然可以练第一次
   if ((me->query("mud_age") - this_object()->query("qktime")) < 60)
	return notify_fail("少年的。。。。给点时间消化，之前送入的内力！\n");
   this_object()->set("qktime",me->query("mud_age"));

   message_vision(HIG"$N将内力源源不断的送入"+this_object()->name()+"之中。\n"NOR,me);
   me->add("force",-limit_force);

//这里是检查是否第一次锻炼这一把武器
//没有的话，就为玩家座第一次的资料设定
   if (!me->query("dag/sun/lv"))
   { 
      me->set("dag/sun/power",1); 
      me->set("dag/sun/lv",1);
      me->set("dag/sun/at",1);
   }    
//内力越高，一次可练得量就较多
   expm=random(limit_force)/5;
   me->add("dag/sun/power",expm);
//读出目前的光系力量
//目前暂时不考虑，光与暗之间的力量消长
   expm=me->query("dag/sun/power");
   daglv=me->query("dag/sun/lv");
   if (expm >= (daglv * 400))  //升级
   {
    daglv += 1;
     if (daglv > 200)
       daglv=200;
     if ( me->query("dag/dark/lv") > 1)
     {//因为光暗相克，所以武器等级下降且调整攻击力
	me->add("dag/dark/lv",-1);
	me->set("dag/dark/at",(me->query("dag/dark/lv")/2)+1);
     }
     message_vision(HIC"$N手中的"+this_object()->name()+"发出神圣的光辉。\n"+
		"看来威力更上一层楼了\n"NOR,me);
     me->set("dag/sun/lv",daglv);
     me->set("dag/sun/at",(daglv/2)+1);
     me->set("dag/sun/power",1);
     this_object()->delete("weapon_prop/damage");
     this_object()->set("weapon_prop/damage",this_player()->query("dag/sun/at"));
// 因为score本身所抓的是me->query_temp("apply/damage");
// 所以攻击力调整要连这里也要调整

    me->add("max_force",-5);      //升级所需的内力

     expm=0;
   }
   this_object()->set("sunlv",me->query("dag/sun/lv"));
   this_object()->set("sun",me->query("dag/sun/power"));
   return 1;
}

int target_absorb(string str)
{
	object ob,me=this_player();
	int i, exp1 , exp2,upexp,expm;
	int daglv;

	if(!str)
		return notify_fail("你要吸收什么 ?\n");
	if( (int)this_player()->query("bellicosity")< 5)
		return notify_fail("你没有足够杀气来吸收对手\n");
	str=lower_case(str);
	if(!objectp(ob=present(str,environment(this_player()))))
		return notify_fail("没这种生物 !\n");
	if(userp(ob))
		return notify_fail("哇哩勒 , 连 player 也要抓 ?\n");
        if(!ob->is_character())
        	return notify_fail("没有生命力的东西，无法增强暗系力量!!\n");
	
	if( (int) ob->query("max_kee")/5 < (int) ob->query("kee"))
	{
		this_player()->start_busy(1);
		return notify_fail("敌人仍然生命力旺盛 , 你无机可趁 !\n");
	}
message_vision(HIM"$N扬起"+name()+HIM"杀气凝聚于"+name()+"幻出紫气\n"NOR,me);
	exp1= (int)ob->query("combat_exp");
	//太弱小，不可以吸收
	if ( exp1 < 50000)
        {
		message_vision(HIR"$N太弱小，不足以增强暗系力量\n"NOR,ob);
		return 1;
	}
	exp2=(int)this_player()->query("combat_exp");
	if( random(exp2) > random(exp1)/2 )
	{
	   message_vision(HIM"结果成功的把$N吸收\n"NOR,ob);
	//这里是检查是否第一次锻炼这一把武器
	//没有的话，就为玩家座第一次的资料设定
	   if (!me->query("dag/dark/lv"))
	   { 
	      me->set("dag/dark/power",1); 
	      me->set("dag/dark/lv",1);
	      me->set("dag/dark/at",1);
	   }    
	//避免强者老是欺负弱自己太多的，基本上最多可获得约300点
	   if ( exp2 > exp1*2)
		upexp=1;
	   else
		upexp=2;
	//对手越强，一次可练得量就较多
	   expm=exp1 /20000;
	   expm=random(expm)* upexp;
	   me->add("dag/dark/power",expm);
	//读出目前的暗系力量
	   expm=me->query("dag/dark/power");
	   daglv=me->query("dag/dark/lv");
	   if (expm >= (daglv * 400))  //升级
	   {
	    	daglv += 1;
	     	if (daglv > 200)
		       daglv=200;
		me->set("dag/dark/lv",daglv);
		if ( me->query("dag/sun/lv") > 1)
		{//因为光暗相克，所以武器等级下降且调整攻击力
			me->add("dag/sun/lv",-1);
			me->set("dag/sun/at",(me->query("dag/sun/lv")/2)+1);
                }
		me->set("dag/dark/at",(daglv/2) +1);
		me->set("dag/dark/power",1);
                         message_vision(HIM"$N手中的"+this_object()->name()+"发出紫色的光辉。\n"+
		"看来威力更上一层楼了\n"NOR,me);
	        this_object()->delete("weapon_prop/damage");
	          this_object()->set("weapon_prop/damage",this_player()->query("dag/dark/at"));
		 me->add("max_force",-5);
    	        expm=0;
	   }
	   this_object()->set("darklv",me->query("dag/dark/lv"));
	   this_object()->set("dark",me->query("dag/dark/power")); 
	   destruct(ob);
	   this_player()->add("bellicosity",-5);
	   return 1;
	}
	message_vision(HIB"结果$N在千钧一发之际 , 躲了开去\n"NOR,ob);
	this_player()->add("bellicosity",-1);
	return 1;      
}

int rename_dag(string arg)
{
   if(!arg) return notify_fail("你想为它取什么名字呢?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({"skyhate"}) );
   write("你替它取了个名字叫"+this_object()->name()+"。\n");
   return 1;
}

int verify_pet(string str)
{
  int slv,dlv,sun,dark,sunAT,darkAT;
  object obj=this_object();

  slv   =  (int)obj->query("sunlv");
  dlv   =  (int)obj->query("darklv");
  sun   =  (int)obj->query("sun");
  dark  =  (int)obj->query("dark");
  sunAT =  (int)this_player()->query("dag/sun/at");
  darkAT=  (int)this_player()->query("dag/dark/at");
  write(obj->name()+"      目前光系等级   :  "+slv+"\n\n");
  write(obj->name()+"      目前光系能量   :  "+sun+"\n\n");
  write(obj->name()+"      目前光系攻击力 :  "+sunAT+"\n\n");
  write(obj->name()+"      目前暗系等级   :  "+dlv+"\n\n");
  write(obj->name()+"      目前暗系能量   :  "+dark+"\n\n");
  write(obj->name()+"      目前暗系攻击力 :  "+darkAT+"\n\n");
  return 1;
}

mixed hit_ob( object victim,object me)
{//hit_ob的BUG，第一个传入物件代表被害者，第二个不清楚
  //所以只好另外定一个代表玩家的代号
  object user=this_player();
  int doglv,i,sunlv,darklv;
  int sp=1; //假设一开始就是光之力量

  doglv=user->query_skill("dodge",1);
  sunlv=user->query("dag/sun/lv");
  darklv=user->query("dag/dark/lv");

  if (sunlv < darklv)
	sp=2;	//代表暗黑力量

  if( user->is_fighting() && query("equipped") )
  {
    if( random(100) > 70 )  //使驱动机率降到 30%
    {
     	switch(sp)
	{//为了扩展性，例如还可以加入火之属性与水之属性
	 case 1:
	 {//目前是试作版，只有一些讯息与补气
	  //基本上还可以根据匕首等级的不同，有不一样的特攻
	  //甚至连特攻的属性都不一样
	  //或许连武器上都可以做自己决定要用的特攻魔法
	  message_vision(this_object()->name()+HBCYN"一股震动隐隐感觉$N内功造诣迅速幻化"NOR,user);
	  message_vision("\n$N只觉眼前一乱本身的元气已被"+this_object()->name()+"的强大能量吸尽"NOR,victim);
  	 message_vision(HBCYN"\n转眼之间强光入体化成强大的气团罩着$N感觉元气充足\n"NOR,user);
	 victim->receive_damage("kee",random(sunlv*2),user);
	                  COMBAT_D->report_status(victim, 0);
		user->add("kee",random(sunlv/2));
		if (user->query("kee") > user->query("max_kee"))
 			user->set("kee",user->query("max_kee"));
		break;
	 }
	 case 2:
	 {
    	  message_vision(this_object()->name()+HBMAG"被战斗的气劲牵引突然光芒一现,幻化成九龙凌空于身！"NOR);
	  message_vision(HBMAG"\n$N惊愕眼前的景象间九龙已经缠绕着由奇经八脉窜入体内!!"NOR,victim);
                    message_vision(HBMAG"\n使得$N感到莫名的空虚而不知所以!!\n"NOR,victim);
	                 victim->add("sen",-random(darklv));
		victim->add("gin",-random(darklv));
	                 COMBAT_D->report_status(victim, 0);
		break;
	 }
	} // switch block
   }
   else
      message_vision(HIW"$N巧妙的躲开"+this_object()->name()+"的攻击\n"NOR,victim);
  }
}

int help_dream(string str)
{
   if(str != "skyhate")  
         	return notify_fail("打错了");
write(@HELP
天恨可以随着你养育他的方法而成长，具有光明与黑暗两系的力量。
两种力量并不相容，所以当其中一方的力量增强，另一方的力量必然下降。
所以，想让天恨同时具有两种属性是不可能的。
天恨在光系的力量是以回复自身为主，暗系的力量是以伤害对手为主。
因此，光系的力量必须以自身的内力去培养，
            暗系的力量必须以吸收对方的力量来成长。（必须很虚弱）
HELP
	);
	return 1;
}
int query_autoload()
{
    if (this_player()->query("id") == "luner")
        return 1;
}
