// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
        
        set_name("地邪鬼",({"ground ghost","ghost"}));
        set("long",
            "\n他是镇守二楼楼梯的厉害妖魔。\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","野兽");
        set("gender","雄性");
        set("attitude","peaceful");
        set("class","fighter");
        set("bellicosity",800);
        set("max_gin",2800);
        set("max_kee",7500);
        set("max_sen",3300);
        set("max_force",3500);
        set("force",7500);
        set("force_factor",25);
        set("combat_exp",2250000);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("nine-steps",120);
        set_skill("move",40);
        set_skill("parry",120);
        set_skill("mogi-strike2", 120);
        set_skill("force",120);
        set_skill("badforce",120);
        map_skill("unarmed", "mogi-strike2");
        map_skill("dodge","nine-steps");
        map_skill("parry","badstrike");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/dragon-tiger-circle")->wield();
        carry_object(C_OBJ"/ninepill");
        add_money("gold",20);
 }
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod ground-ghost"){
 write(HIY"地邪鬼冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}
int accept_fight(object who)
{
return notify_fail("地邪说道 : 我没空陪你玩。\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("exert roar");
 command("kill "+who->query("id"));
 return 1;
}
