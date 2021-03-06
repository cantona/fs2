#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
set_name("郑士欣",({"master teng","teng","master"}));
set("long","他就是武林第一大宗师 :郑士欣。现正执掌仙剑门户，
同时身为剑士公会总会长。近十余年来，因仙剑七侠已
能独当一面，分担派内事务；而公会事务也由三长老柳
毅全权负责，郑士欣每天除了至藏经阁精研武学外，就
是在此接见外宾。\n");
        set("gender","男性");
        set("class","swordsman");
        set("nickname","无极真人");
            set("family/family_name","仙剑派");
            set("combat_exp",8000000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 490);
        set("age",76);
        set("title",HIW"～幻影～"NOR"仙剑派第三代掌门人");
            set("str", 44);
            set("cor", 42);
            set("cps", 18);
            set("con", 24);
            set("int", 42);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 10000);
            set("kee",10000);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("sec_kee","god");
            set("force",100000);
            set("max_force",100000);
            set("functions/sha_kee/level",100);
            set_skill("literate",40);
            set_skill("cure",50);
            set_skill("magic",20);
            set_skill("spells",20);
            set_skill("shasword",100);
            set_skill("shaforce",80);
            set_skill("sha-steps",100);
            set_skill("sha-array",100); 
        set_skill("array",100);
        set_skill("move",80);
        set_skill("force",50);
        set_skill("dodge",80);
        set_skill("parry",120);
        set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set("force_factor",29);
        set("get_sha_sp", 1);
            set("bounds", 4000000);
        set("chat_chance_combat",90);
        
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        setup();
        carry_object("/open/gsword/obj/dragon-sword.c")->wield();
        add_money("gold",10);
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
        create_family("仙剑派",3,"掌门人");
}


int accept_fight(object who)
{

object guard, guard1;
 command("cmd god_kee");
 fight_ob(who);
 command("perform sword.sha_kee");
 return 1;
}

int accept_kill(object who)
{
 object guard, guard1;

 command("say 让你知道连阳剑的厉害！\n");
 set("have_kill_me",1);
 kill_ob(who);
 command("cmd god_kee");
 command("perform sword.sha_kee");
 return 1;
}
void heart_beat()
{
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        :: heart_beat();
}


int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 23)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第二十二层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第二十三层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",23);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}


