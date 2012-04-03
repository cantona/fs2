#include <ansi.h>
inherit NPC;
string icef();

void create()
{
   set_name("刘全书",({"npc4"}));
   set("long","
暂定为第四位守塔者
\n");
   set("gender","男性");
   set("guild_master",1);
   set("class","fighter");
   set("nickname","雪苍派第四代掌门人");
   set("combat_exp",5000000);
   set("attitude","heroism");
   set("age",47);
   set("title","第四位守塔者");
   set("str", 50);
   set("cor", 24);
   set("cps", 18);
   set("per", 24);
   set("int", 42);
   set("force", 7000);
   set("max_kee",15000);
   set("kee",15000);
   set("quests/read_snow",3);
      set("max_gin",3000);
      set("gin",5000);
          set("sen",5000);
          set("max_sen",5000);
   set("s_kee",600);
   set("max_s_kee",1000);
   set("sec_kee","tiger");
    set_skill("literate",30);
   set("force_factor", 50);
   set("max_force",3000);
      set_skill("snow-kee",100);
   set_skill("cure",40);
          set_skill("move",50);
   set_skill("force",120);
   set_skill("magic",20);
   set_skill("dodge",50);
       set_skill("parry",50);
   set("functions/ice-fingers/level",100);
   set("functions/snow-powerup/level",50);
   set_skill("spells",20);
      set_skill("unarmed",120);
   set_skill("snowforce",100);
   map_skill("force","snowforce");
           set_skill("black-steps",100);
   set_skill("snow-martial",100);
   map_skill("unarmed","snow-martial");
   map_skill("dodge","black-steps");
   map_skill("parry","snow-kee");
   set("chat_chance_combat",60);
   set("chat_msg_combat",({
   (: icef :),
   }));
   setup();
   carry_object("/daemon/class/fighter/figring")->wield();
   carry_object("/open/snow/obj/liucloth.c")->wear();
}
string icef()
{       
        command("perform snow-martial.ice-fingers");

        return "\n";
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
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){

                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

int accept_fight(object who)
{
who=this_player();
command("cmd usekee "+who->query("id"));
 command("say 死吧~~~~\n");
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 command("charge "+who->query("id"));
 return 1;
}

int accept_kill(object who)
{
who=this_player();

 command("say 死吧~~~~\n");
 kill_ob(who);
command("charge "+who->query("id"));
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 return 1;
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
if(me->query("quest/start_game")< 5)
       {
        tell_object(users(),HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第四层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第五层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",5);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}