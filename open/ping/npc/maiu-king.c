// change from 平南将军
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("苗人军师",({"officer of maiu","officer","maiu"}));
	set("long","一位负责苗人军政的军师\n");
	set("gender","男性");
        set("attitude","heroism");
	set("functions/firefinger/level",10);
	set("age",32);
	set("str", 30);
	set("con", 30);
	set("force",1500);
	set("max_force",1500);
        set("combat_exp", 90000);
	set_skill("force",60);
        set_skill("dodge", 50);
        set_skill("whip",60);
        set_skill("nine-steps",60);
        set_skill("poisonforce",30);
        set_skill("coldpoison",25);
        set_skill("ming-snake",40);
        map_skill("force","poisonforce");
        map_skill("dodge","nine-steps");
        map_skill("poison","coldpoison");
        map_skill("whip","ming-snake");        
        set("force_factor", 3);
	set("chat_chance_combat", 10);
	set("chat_msg_combat", ({
	(: perform_action,"poison.firefinger" :),
	}));
	setup();
        carry_object("open/poison/obj/snake_whip")->wield();
        carry_object("/obj/poison/five_poison")->set_amount(10);
	add_money("silver",50);
}
int accept_object(object who, object ob)
{
  object mid;
  if( ob->query("id") == "maiu_id" && !query("change") )
  { 
    who->set_temp("maiu",1);
    say("苗人军师说:哦?你要见苗王?...MMM....这文件是怎么拿到的?.\n"+
        "如果是正当手段得到的,怎么不知道...我...就是苗王!!!\n"+
        "苗人军师卸下了脸上的人皮面具\n");
    set("change",1);
    set_name("苗王",({"king of maiu","king","maiu"}));
    set("long","苗族之王,正为如何打败汉军而烦恼着\n");
    set("combat_exp", 140000);
    set("chat_chance_combat", 20);
    set("functions/firefinger/level",20);
    set("force_factor", 10);
    set_skill("coldpoison",30);
    set_skill("ming-snake",50);
//  mid=new("/open/ping/obj/maiu-head"); 
//  mid->move(this_object());
  }      
  if( ob->query("id") == "zhang-head" && who->query_temp("maiu") )
  { 
   say("苗王审视人头一番,大笑曰: 你这奸臣也有今日...哈哈哈!!!\n"+
       "那...这是给你的谢礼.\n苗王给你一些药丸.\n");  
   mid=new("/open/gsword/obj/ff_pill");
   mid->add_amount( who->query("per")+15 );
   mid->move(who);
   who->delete_temp("maiu");
   who->delete_temp("k_m"); 
  }
   destruct(ob);
   return 1;  
}
int accept_kill(object who)
{
  object head; 
  if( who->query_temp("maiu") && !query("change2") )
  { 
   if( query("k_m") )
   {
   say("苗王说: 你是执迷不悟了!!!\n苗王施展力量增强术!!!\n");
   set("title","- 妖气 -");
   set("change2",1);
   set("combat_exp", 180000);
   set("max_kee",3000);
   set("kee",3000);
   set("chat_chance_combat", 25);
   set("functions/firefinger/level",30);
   set("force_factor", 15);     
   set_skill("ming-snake",60);
   setup();
   head=new("/open/ping/obj/maiu-head");
   head->move(this_object());
   }else{
   say("苗王说: 慢...你是职业杀手吧...不如替我方除掉平南将军...\n我方愿出比平"
      +"南更丰厚的酬金谢你!!\n");
   set("k_m",1);
   return 0;
   }
  } 
  return 1;
}
int accept_fight(object who)
{
  if( who->query_temp("maiu") && query("change") )
      return notify_fail("苗王说: 去杀平南将军吧! 本朝的奖赏较丰厚呀!\n");
  return 1;
}                        
