//master_linr.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
string ask_moon();
string ask_change();
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
object ob2;
void create()
{
            object ob;
            set("guild_master",1);
            set_name("水灵儿",({"master linr","linr"}) );
            set("long","她是月牙儿的师妹，擅长舞蹈，据说
            她的舞蹈之美会令人以为仙女下凡身处仙境。\n");
            set("gender","女性");
            set("class","dancer");
            set("nickname","虹彩仙子");
            set("combat_exp",4000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 30);
            set("cor", 30);
            set("cps", 45);
            set("per", 24);
            set("int", 40);
          set("kee",30000);
          set("max_kee",30000);
          set("gin",16000);
          set("max_gin",16000);
          set("atman",20000);
          set("max_atman",20000);
          set("mana",40000);
          set("max_mana",40000);
          set("force",20000);
          set("max_force",20000);
		  set("max_sen",16000);
         set("sen",16000);
            set_skill("array",50);
            set_skill("parry",40);
            set_skill("spells",30);
            set_skill("magic",90);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",100);
            set_skill("dodge",95);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",120);
            set_skill("dremagic",95);
            set_skill("dreamforce",100);
            set_skill("dreamdance",90);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
		set("get_dan_sp",1);
		set("/spells/reflection/level",100);
		set("/spells/confuse/level",100);
        set("/spells/thunder/level",60);
        set("/spells/firedance/level",100);
		set("/spells/hellfire/level",75);
        set("/spells/dreamwings/level",1);
		set("/spells/dreamcure/level",100);
		set("adv_dancer",1);
		set("allow_hellfire",1);
		
        set("force_factor",20);
        setup();
        create_family("夜梦小筑",3,"副宫主");
        carry_object("/open/dancer/obj/linrboots.c")->wear();
		carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
//      ob->set_amount(50);
        set("inquiry", ([
            "傅剑寒"  : "你说的是神龙山庄庄主傅剑寒吗??他是我倾慕的偶像耶!!",
			"镜月岛之谜"  :  (: ask_moon :),
			"上代宫主"  :  "上任宫主是我大师姐,名叫月半弯,是月牙儿师姐的姊姊",
			"王妈"  : "几年前听说她在枫林港过着平凡的生活，现在就不知道了。",
			"流星雨"  : "喔....想学流星雨先打赢我再说吧。",
			"change" : (: ask_change :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
        add_action("do_join","join");
        set_heart_beat(1);
}
string ask_moon()
{       if (this_player()->query("quests/moon")==1)
        return "你不是问过了???";
		else
        this_player()->set_temp("ask_moon1",1);
		return " 嗯 ,这件事我只是隐约有听王妈说过 , 详细情形要问她才知道 !";		
}
string ask_change()
{       int i;
        i=(int)this_player()->query("functions/ranbow-steps/level",1);
        if (!this_player()->query("functions/ranbow-steps"))
        return "你没学过问这做什???";
		else
        this_player()->set("functions/rainbow-steps/level",i);
		this_player()->delete("functions/ranbow-steps");
		return " 嗯 ,我帮妳改好了 !";		
}
void heart_beat()
{
        if( is_fighting() ){
		   if(query_temp("ref_shield")!=1)
		      command("conjure reflection");
		   if(random(100)>85)
		   command("conjure hellfire");
               
        }
        else{
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }
        :: heart_beat();
}
  void attempt_apprentice(object ob)
{
      command("l "+ob->query("id"));
      if(this_player()->query("class")!="dancer")
      {
          command("hammer"+ob->query("id"));
          command("say 先加入舞者公会才能拜师喔\n");
          return;
      }
        command("smile");
        command("nod");
        command("chat 这个世界上又多了一个美丽的舞者了，希望各位多多爱护他..\n");
         ob->query("no_recruit");
        command("recruit "+ob->query("id"));
}

 void die()
 {
  if(!ob2){
    write("水灵儿说:想不到妳的武功如此厉害\n"); 
    ::die();
    return ;
  }
   if( ob2->query("class")=="dancer")
     {write("水灵儿说:看来妳的确有这个实力去学习流星雨!\n");
      write("好了 ,妳可以去找我师姐了!\n");
      ob2->set("allow_meteor",1);
	  ob2->set_temp("allow_learn",1);}
  else   
   {
    write("水灵儿说:想不到妳的武\功如此厉害\n"); 
    }
   ::die();
  }  
string magic()
{       
        command("conjure reflection");
        command("conjure confuse");
        command("conjure fireball");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        
        command("say 小女子怎是您的对手呢??\n");
        message_vision( this_object()->name()+"一付弱不禁风的样子。\n",ob);
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
int accept_kill(object ob)
{       ob2=this_player();
        command("conjure reflection");
        command("say 没想到你忍心欺负弱小女子，那我就不客气了!!!\n");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
int do_join()
{
        object ob=this_player();
        if(!ob->query("class"))
        {
		 if(this_player()->query("gender")!="女性")
		 {
		 command("grin"+ob->query("id"));
		 return notify_fail("只有女性才能当舞者喔!!你先去变性再来吧!!\n");
          } 
		if(this_player()->query("per")<25)
        {
            return notify_fail("你长得太丑了不适合当舞者还是另寻出路吧!!\n");
        }else
        ob->set("class","dancer");
        command("nod "+ob->query("id"));
        }
        else
        {
          return notify_fail("你已经加入门派啰，不能再加入啰。\n");
        }
        message("system",HIC"水灵儿轻声吟道：‘龙腾八荒，凤舞九天’
接着又愉快的说道：以"+this_player()->name()+"的资质必可
将我派舞蹈绝学发扬光大。\n"NOR,users());
        return 1;
}
