#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("林宏升",({"pope lin","pope","lin"}));
        set("long",@LONG

        没有人知道他的来历，也没人知道他的武功有多深；是一个神密莫
        测的人物，在三年前因风云际会，使他创立了〔圣火教〕，也不知
        他是用何方法建立这个庞大的组织，也因为如此, 他被江湖上的人
        称为〔武林神话〕。

LONG);
        set("gender","男性");
        set("clan_kill",1);
        set("class","prayer");
        set("nickname",HIW"～幻影～"NOR"武林神话");
        set("title","圣火教皇～～");
        set("combat_exp",12000000);
        set("attitude","heroism");
        set("score",1000000);
        set("age",75);
        set("max_kee",40000);
        set("str", 50);
        set("cor", 50);
        set("cps", 45);
        set("per", 30);
        set("int", 42);
        set("marks/tengin",1);
        set("force",400000);
        set("max_force",400000);
        set("force_factor", 40);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("cure", 120);
        set_skill("superforce", 250);
        set_skill("dodge", 120);
        set_skill("force",150);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 120);
        set_skill("array",130);
        set_skill("fire-array",130);
        set_skill("unarmed",120);
        set_skill("canon",150);
        set_skill("literate",120);
        set_skill("shift-steps",150);
        set_skill("universe",140);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("array","fire-array");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
        set("functions/tengin/level",100);
        set("functions/bluesea/level",120);                             
                set("chat_chance_combat",50);
                set("chat_msg_combat", ({
                (: perform_action, "force.blood3" :),
                (: perform_action, "force.bluesea3" :),
        }));
        setup();

        carry_object("/open/prayer/obj/boris-boots")->wear();
        carry_object("/open/prayer/obj/boris-cloth")->wear();
        carry_object("/open/prayer/obj/boris-hat")->wear();
        carry_object("/open/prayer/obj/boris-hands")->wear();
        carry_object("/open/prayer/obj/kylin-belt")->wear();
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        create_family("圣火教",1,"教皇");

}

int accept_fight(object who)
{
return notify_fail("教皇冷冷的道 : 去.去..去...少来烦我。\n");
}

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();
        ob = this_player();
        command("exert blood");
        command("perform unarmed.tengin");
        return 1;
}
void greeting(object ob)
{
        ob=this_player();
        if ( ob->query_skill("coldpoison",1) )
        {
        command("say 本教主一生光明磊落！！最痛恨学有毒术之人！！");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say 本教主最恨那些利用美色之人！！");
        kill_ob(ob);
        }
    return;
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
if(me->query("quest/start_game")< 31)
       {
        tell_object(users(),HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第三十层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第三十一层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",31);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}



void heart_beat()
{
 object me=this_object();
 if(random(100) < 20 && is_fighting()) {
   command("perform unarmed.tengin");
   me->delete_busy();
   me->clear_condition();
 }
 if( random(100) < 10)
 {
  if( is_fighting() )
  {
   if( query("kee") < query("max_kee") )
    message_vision(HIR"\n林宏升出浑天心法之冰心诀，身上的伤口奇迹式愈合了\n"NOR,me);
    me->receive_heal("kee",2000);
    me->receive_heal("gin",200);
    me->add("force",10000);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 }
::heart_beat();
}
