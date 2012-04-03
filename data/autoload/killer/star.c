//1998.12.15 by wataru
//这次所写的这一把培养型的武器，说真的我不知道该定位在哪里
//原本有这一个计画要作这一类型的武器，但是真正还是跟minimum谈论过才去作		
//这一应该是算最基本的阳春型的培养型武器
//目前写法是等级 乘以400可以加一级，最多一次大约可以加50点
//而且，基本上属性想要有风土水火光暗
//但是，其实这牵涉到的问题比较大，并不好做
//最好是分成数把武器，如刀，剑，笔，空手武器。。。。等
//但是，这一把武器的定位在哪？我也不清楚。
//如果每个门派都有一把这种超强武器的话，是否会变成FS的特色之一？
//还是说，反而特色尽失？因为这一种武器好玩但没特色。
//讲难听一点，我如果在武器上搞各更有趣的东西
//如勇者斗恶龙系列的魔法，都是跟等级有关会出现
//所以说把魔法写在武器上，让武器到一定等级，就有哪些魔法可以用
//如光系的魔法就是回复系，辅助系，等级不同可以用的魔法也不同
//暗系的魔法就是精神伤害系的魔法
//如果说，蔫火系与水系做下去，就还可以有火焰魔法
//但是这一把武器的定位就出现问题了，那就是给谁用（这不一定是匕首）
//给魔法系的门派吗？她们自己就有了，其实根本不需要
//给非魔法系的门派吗？特色不合，对用魔法的门派不公平
#include <ansi.h>
#include <weapon.h>
#include <armor.h>
#include "/open/open.h"
inherit UNARMED;
object user;
void create()
{
   seteuid(getuid());
   set_name("幻星破",({ "star unarmed","star"}) );
   set_weight(2000);
   if( clonep() )
         set_default_object(__FILE__);
   else 
   {
     set("long",@LONG
     这是传说中，会随着助人的培养方式不同，而成长的武器，注意光暗的力量相克
     下列是你可以对他下的命令，详细内容请打help star
     锻炼(discipline)        格式 discipline             ：以自身力量使光系力量成长
     吸收(absorb)     	  格式 absorb <target>    ：吸收对方使暗黑系力量成长
     命名(rename)   	  格式 rename <name>   ：为换星破改名
     资料(star_data)         格式 star_data              ：察看幻星破目前的水准
LONG);
     set("unit","对");
     set("value",100);
     set("material", "steel");
     set("ski_type","unarmed");
     set("no_sell",1);
//   set("no_drop",1);
     set("no_auc",1);
   }
   init_unarmed(1);
   set("wield_msg", HIG"$N装备上$n，万点星光在$n闪耀着。\n"NOR);
   set("unwield_msg", HIG"$N放下$n，$n也渐渐失去光芒。\n"NOR);
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
    if(this_player()->query("id") == "reko"  || this_player()->query("id") =="wataru"
       || this_player()->query("id") == "meme")
    {
       add_action("feed_dag","discipline");
       add_action("target_absorb","absorb");
       add_action("rename_dag","rename");
       add_action("verify_pet","star_data");
       add_action("help_dream","help");
    }
   }
   user=this_player();
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
		"看来威力更上一层楼了\n"NOR,user);
     me->set("dag/sun/lv",daglv);
     me->set("dag/sun/at",(daglv/2)+1);
     me->set("dag/sun/power",1);
     this_object()->delete("weapon_prop/damage");
     this_object()->set("weapon_prop/damage",this_player()->query("dag/sun/at"));
// 因为score本身所抓的是me->query_temp("apply/damage");
// 所以攻击力调整要连这里也要调整

// me->add("max_force",-5"); 升级所需的内力

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

//	if(!this_player()->query("quests/lotch") )
//		return notify_fail("你还不会使用炼妖壶 !\n");
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
	message_vision(HIM"$N扬起$n,杀气凝聚于$n，幻出紫气 \n"NOR,this_player(),this_object());
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
		"看来威力更上一层楼了\n"NOR,user);
	        this_object()->delete("weapon_prop/damage");
                this_object()->set("weapon_prop/damage",this_player()->query("dag/dark/at"));
		// me->add("max_force",-5");
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
   if(!arg) return notify_fail("你想为幻星破取什么名字呢?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({ "star unarmed","star"}) );
   write("你替幻星破取了个名字叫"+this_object()->name()+"。\n");
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

mixed hit_ob( object me,object victim)
{
  object *enemy,who;
  int doglv,i,sunlv,darklv;
  int sp=1; //假设一开始就是光之力量

  doglv=user->query_skill("dodge",1);
  sunlv=user->query("dag/sun/lv");
  darklv=user->query("dag/dark/lv");

  if (sunlv < darklv)
	sp=2;	//代表暗黑力量

  if( user->is_fighting() && query("equipped") )
  {
    if( random(100) > 30 )  //使驱动机率降到 30%
    {
    	enemy=user->query_enemy();
	i=random(sizeof(enemy));
     	switch(sp)
	{//为了扩展性，例如还可以加入火之属性与水之属性
	 case 1:
	 {//目前是试作版，只有一些讯息与补气
	  //基本上还可以根据匕首等级的不同，有不一样的特攻
	  //甚至连特攻的属性都不一样
	  //或许连武器上都可以做自己决定要用的特攻魔法
      		message_vision(HBCYN"化出圣光气,笼罩住$N!!"NOR,enemy[i]);
		message_vision(HBCYN"圣光气由$N身上，回到$n的体内!!"NOR,enemy[i],user);
		enemy[i]->receive_damage("kee",random(sunlv*2),user);
	        COMBAT_D->report_status(enemy[i], 0);
		user->add("kee",random(sunlv/2));
		if (user->query("kee") > user->query("max_kee"))
			user->set("kee",user->query("max_kee"));
		break;
         }
	 case 2:
	 {
      		message_vision(HBMAG"化出数道鬼影，冲向$N!!！！"NOR,enemy[i]);
		message_vision(HBMAG"$N在精神层面上受到很大的打击!!"NOR,enemy[i]);
		enemy[i]->add("sen",-random(darklv));
		enemy[i]->add("gin",-random(darklv));
	        COMBAT_D->report_status(enemy[i], 0);
		break;
	 }
	} // switch block
   }
   else
      message_vision(HIW"$N巧妙的躲开攻击\n"NOR,enemy[i]);
  }
}

int help_dream(string str)
{
   if(str != "star")  
         	return notify_fail("打错了");
write(@HELP
幻星破，可以随着你养育他的方法而成长，具有光明与黑暗两系的力量。
两种力量并不相容，所以当其中一方的力量增强，另一方的力量必然下降。
所以，想让幻星破同时具有两种属性是不可能的。
幻星破在光系的力量是以回复自身为主，暗系的力量是以伤害对手为主。
因此，光系的力量必须以自身的内力去培养，
      暗系的力量必须以吸收对方的力量来成长。（必须很虚弱）

HELP
	);
	return 1;
}

int query_autoload()
{
 return 1;
}

