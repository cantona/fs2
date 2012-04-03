// by roger

#include <ansi.h>
#include <dragon.h>
inherit NPC;
void create() {
        
        set_name("鬼姥姥",({"ghost woman","woman","ghost"}));
        set("long",
            "\n他是炎龙谷主的爱将,武功高强。\n");
        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","雌性");
        set("attitude","peaceful");
        set("class","fighter");
set("bellicosity",500);
        set("max_gin",3300);
        set("max_kee",3500);
        set("max_sen",3300);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",20);
        set("combat_exp",1850000);
set_skill("unarmed",105);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
set_skill("badstrike",105);
        set_skill("force",120);
        set_skill("badforce",120);
        set("functions/evil-blade/level",35);
        set("chat_chance_combat",30);
        map_skill("unarmed", "badstrike");
        map_skill("dodge","nine-steps");
        map_skill("parry","badstrike");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        set("chat_msg_combat", ({
                (: perform_action("badstrike.evil-blade") :),
        }));
        setup();
        add_money("gold",15);
 }
int accept_fight(object who)
{
return notify_fail("鬼姥姥说道 : 要就跟我生死相博吧。\n");
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod ghost woman"){
 write(HIY"鬼姥老笑说：「在姥姥面前求神问卜!?问谁呀？。”去死吧!!\n"NOR);
 king->kill_ob(who);
 return 1;                                                 
                  }
}

void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
}       
