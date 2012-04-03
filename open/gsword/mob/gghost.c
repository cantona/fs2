inherit NPC;
 int done=0;
#include <ansi.h>
void create()
{
	set_name("绿毛小鬼", ({ "Green ghost" , "ghost" }) );
	set("race", "野兽");
	set("age", 15);
	set("long", "一只长满绿毛的小鬼,正张牙舞爪地寻找他的猎物.\n");                                                                                                                                                                                                          
	set("str", 35);
	set("cor", 35);
        set("limbs", ({ "头部", "身体", "双脚", "双手" }) );
        set("verbs", ({ "bite", "claw", "dunt" }));
	set("combat_exp", 2000);
	set("attitude","aggressive");
	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({  
              (: this_object(),"heal_me" :),
              (: this_object(),"do_devide" :),
          HIB" 小鬼愤怒地叫:    吱～ 吱～\n"NOR      }) );
	set_skill("dodge",30);
	setup();               
	add_money("coin",100);
}


int heal_me()
{   int max,now ;
    max = this_object()->query("max_kee");
   if( done< 3)
{
    this_object()->add("eff_kee",50);
 }
 done++;
    this_object()->set("kee",max);
    now = this_object()->query("kee");
    if(now > max)
     {
       this_object()->set("kee",max);
       now = max;
     }
    tell_room(environment(this_object()),
    HIG"  突然一阵绿光自上而下罩在绿毛小鬼的身上,你发觉牠更生龙活虎了!!\n"NOR);
    return 1;
 }  

int do_devide()
{   object here ;
   if( done<3)
{
    tell_room(environment(this_object()), 
    HIG  "   突然绿毛小鬼的身影开始模糊,慢慢地..绿毛小鬼分裂成两只了..!!\n"NOR);
    here=environment(this_object()); 
    new("/open/gsword/mob/ghost1")->move(here);
 }
 done++;
    return 1;
 }   
 
 void die()
 {
 object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
    me->add("bounds",10);
   tell_room(environment(),sprintf("%s 从小鬼身上除下10根绿毛放进口袋\n",me->name()) );
   }
   ::die() ;
 }