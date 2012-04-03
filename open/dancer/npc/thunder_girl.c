#include <ansi.h>
string magic();
inherit NPC;
void create()
{
            set_name("雷姞儿",({"thunder girl","girl"}));
            set("long","她是镜月岛四天女之一的雷灵使，其美貌自然不是一般凡间
所能相比较，传闻雷姞儿的‘谕雷术’似乎与舞者的传统‘谕雷术’不一样!!\n");
            set("gender","女性");
            set("class","dancer");
            set("family/family_name","夜梦小筑");
            set("nickname","四天女");
	    set("title",HIC"雷灵使"NOR);
            set("combat_exp",5000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 34);
            set("cor", 30);
            set("cps", 50);
            set("per", 24);
            set("int", 40);
          set("kee",100000);
          set("max_kee",100000);
          set("gin",100000);
          set("max_gin",100000);
          set("sen",100000);
          set("max_sen",100000);
          set("atman",30000);
          set("max_atman",30000);
          set("mana",30000);
          set("max_mana",30000);
          set("force",30000);
          set("max_force",30000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",120);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",90);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("dreamforce",90);
            set_skill("dreamdance",100);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
        set("get_dan_sp",1);
        set("/spells/reflection/level",100);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",100);        
        set("force_factor",30);
        setup();
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
        carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
        set("chat_chance_combat",70);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void heart_beat()
{
	object me=this_player();
        object ob=this_object();
        mixed enemy;
	int i,j;
    if(!ob) return;
    if(!environment(ob)) return ;
        enemy=all_inventory(environment(ob));
	i=sizeof(enemy);
        if( is_fighting() ){
	if(random(100)>70)
     message_vision(HIC"雷姞儿眼神猛爆青光, 五雷鼎气游走全身!!\n"NOR,this_object());
	if(random(5)>2)
	{
     message_vision(HIR"一道落雷猛然从天空落下，击中了在场的所有人!!\n"NOR,this_object());
	for(j=0;j<i;j++)
	{ 
	if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
            && living(enemy[j]) && enemy[j]!=ob) 
	{
		enemy[j]->receive_wound("kee",500);
		enemy[j]->start_busy(2);
	}
	}
	}
                      if(query_temp("ref_shield")!=1)
                      command("conjure reflection");
        }
        :: heart_beat();
}

string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
        command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
  //      command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
	object me=this_player();
        command("say 小女子怎是您的对手呢??\n");
        command("conjure reflection");
 //       command("conjure dreamwings");
        command("conjure confuse");
        message_vision( this_object()->name()+"一付弱不禁风的样子。\n",ob);
	call_out("combat_exp",1,me);
        return 1;
}
int accept_kill(object ob)
{
	object me=this_player();
        command("say 没想到你忍心欺负弱小女子，那我就不客气了!!!\n");
        command("conjure reflection");
  //      command("conjure dreamwings");
        command("conjure confuse");
	call_out("combat_exp",1,me);
        return 1;
}

int combat_exp()
{
object me=this_player();
object ob=this_object();
int exp;
exp=me->query("combat_exp");
if(ob->query_temp("change"))
return 1;
ob->set_temp("change",1);
if(exp < 5000000)
return 1;
ob->set("combat_exp",exp);
return 1;
}
