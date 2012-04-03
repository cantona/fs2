#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("圣贤书",({"master sue","sue"}));
        set("long","他是一个十分儒雅的年轻人，但却是武林中的有名的侠客。\n");
        set("gender","男性");
        set("class","scholar");
        set("nickname","九指书生");
    set("combat_exp",4000000);
    set("attitude","heroism");
	set("title",HIW"～幻影～"NOR);
        set("age",26);
    set("str", 44);
    set("cor", 24);
    set("cps", 18);
    set("per", 24);
    set("int", 42);
    set("max_gin",2000);
    set("s_kee",1000);
    set("max_s_kee",1000);
    set("sec_kee","god");
    set("force",10000);
    set("max_force",10000);
    set("max_kee",6000);
    set("kee",6000);
    set_skill("literate",120);
    set_skill("cure",60);
    set("force_factor",10);
    set_skill("force",80);
    set_skill("stabber",120);
    set_skill("dodge",70);
        set_skill("knowpen",100);
        map_skill("stabber","knowpen");
    set_skill("parry",70);
    set_skill("poetforce",80);
    map_skill("force","poetforce");
        map_skill("parry","knowpen");
    set_skill("unarmed",20);
    set_skill("move",70);
    set_skill("plan",120);
    set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        set_skill("god-plan",100);
        map_skill("plan","god-plan");
    set("chat_chance_combat", 100);
        set("chat_msg_combat",({
    (: perform_action,"stabber.movedown" :),
    (: perform_action,"stabber.finger" :),
        (: perform_action,"plan.lock-link" :)
        }));
        setup();
        create_family("儒门",16,"弟子");
    carry_object(START_OBJ"ten_pen")->wield();
    carry_object(START_OBJ"k_cloth")->wear();
}

int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform plan.fire");
 return 1;
}

int accept_kill(object who)
{
  command("say 让你尝尝身处烈火之中的滋味！\n");
 kill_ob(who);
 command("cmd god_kee");
 command("perform stabber.movedown");
 return 1;
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
if(me->query("quest/start_game")< 15)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第十四层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第十五层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",15);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}


