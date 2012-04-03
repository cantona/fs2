#include <ansi.h>
inherit NPC;


void create()
 {
        set("class", "marksman");
set_name("李广", ({ "master lee", "master", "lee" }) );
        set("title",HIW"～幻影～"NOR"射日派第二代掌门人");
        set("nickname",HIC "心定穿石"NOR);
        set("gender", "男性");
set("max_kee",10000);
        set("age", 55);
        set("attitude", "heroism");
        set("long","李广为古代名将之一，曾在一次打猎中，把箭射进石头里，谓之赞叹..\n");
        set("str", 18);
        set("cps", 30);
        set("per", 10);
set("cor",30);
        set("int", 40);
        set("kar", 16);
set("combat_exp",7000000);
set("bellicosity",5000);
set("force",100000);
set("max_force",100000);
set("force_factor",30);
        set("score"       , 200000);
set_skill("force",80);
set_skill("archery",120);
set_skill("god-shooting",100);
set_skill("magic",20);
set_skill("move",70);
set_skill("parry",70);
set("functions/ten_kee/level",100);
set_skill("dodge",70);
set_skill("literate",40);
set_skill("unarmed",20);
        set_skill("iceforce",100);
set("no_lyssa",1);
        set_skill("rain-steps",100);
set_skill("riding",80);
        map_skill("force", "iceforce");
        map_skill("dodge", "rain-steps");
        map_skill("parry", "rain-steps");
        map_skill("archery","god-shooting");
        map_skill("move","rain-steps");
set("chat_chance_combat",10);
                set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :)
        }));


        create_family("射日派", 2, "掌门人");


        setup();
carry_object("/open/marksman/obj/arrow-8");
carry_object("/open/marksman/obj/bow-10")->wield();
        add_money("gold",10);
}

int accept_kill(object ob)
{
 command("say 老夫最近没练武了，那就来动一动吧!");
 command("say 纳命来!!");
 command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
command("perform archery.ten_kee");
command("supershoot");
return 1;
}
int accept_fight(object ob)
{
command("say 那好吧!!老夫就来会会你");
command("cmd holdup arrow with bow");
return 1;
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
if(me->query("quest/start_game")< 20)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第十九层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第二十层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",20);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}


