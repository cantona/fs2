//by sueplan -五儒1
//因为抓plan的字串怪怪的, so修改bu sueplan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int special_attack();
int done=0;


void create() {
        set_name("南宫  括",({"scholar kao","kao","scholar"}));
        set("class","scholar");
        set("nickname","$HIY$智谋高超$NOR$");
        set("title","五儒之尊");
        set("long",
        "\n，为儒门五儒生中南宫布仁之师，以运计使策
闻名，并且南宫一族古自得儒门孔老夫子之弟子
颜回教之，门风稳建。\n");
        set("inquiry", ([
        "颜回"  :  "颜回为吾之尊师, 不过因仁而未传我派计谋!!"
        ]));
        set("str",40);
        set("cor",40);
        set("cps",40);
        set("gender","男性");
        set("attitude","heroism");
        set("family/family_name","儒门");
        set("max_gin",10000);
        set("max_kee",8000);
        set("max_sen",10000);
        set("max_force",8000);
        set("force",8000);
        set("force_factor",20);
        set("combat_exp",8000000);
        set("score",9000000);
        set_skill("stabber",150);
        set_skill("dodge",150);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("knowpen",100);
        set_skill("god-plan",100);
        set_skill("plan",120);
        set_skill("force",200);
        set_skill("poetforce",150);
        set_skill("winter-steps",100);
        map_skill("plan","god-plan");
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        map_skill("force","poetforce");
        set("functions/movedown/level",100);
        set("functions/finger/level",100);
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);


set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.movedown") :),
(: perform_action("stabber.finger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
        setup();
       carry_object("/open/scholar/room/newplan/obj/pen")->wield();
       add_money("gold",50);
 }
int accept_kill(object who)
{
        who=this_player();
        command("wield pen");
        command("kill "+who->query("id"));
        command("exert sun-finger");
        command("perform stabber.movedown");
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("say 如果不敢和我较量, 那就别来这边送死!!");
return 0;
}

void die()
{
object winner = query_temp("last_damage_from");
winner->set_temp("ko_kao",1);
:: die();
}
