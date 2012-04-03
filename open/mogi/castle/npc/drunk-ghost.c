// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
        
        set_name("醉魔",({"drunk ghost","ghost"}));
        set("long",
            "\n喝得醉醺醺的妖魔，躺在走道中挡住了你的去路。\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","雄性");
        set("attitude","peaceful");
        set("class","fighter");
        set("bellicosity",800);
        set("max_gin",2800);
        set("max_kee",9000);
        set("kee",9000);
        set("max_sen",7300);
        set("max_force",7500);
        set("force",7500);
        set("force_factor",35);
        set("combat_exp",2750000);
        set_skill("unarmed",120);
        set_skill("dodge",110);
        set_skill("nine-steps",120);
        set_skill("move",30);
        set_skill("parry",110);
        set_skill("drunk", 110);
        set_skill("literate",130);
        set_skill("force",120);
        set_skill("badforce",120);
        map_skill("unarmed", "drunk");
        map_skill("dodge","nine-steps");
        map_skill("parry","badstrike");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        set("verbs",({"bite","claw"}));
        setup();
        carry_object(C_OBJ"/sspill");
        carry_object("/open/gsword/obj/silver_sword");
        add_money("gold",10);
 }
int accept_fight(object who)
{
 write(HIY"醉魔说道 : 酒....呵呵...\n"NOR);
return 0;
}
int accept_kill(object who)
{
 who=this_player();
 command("say 好啊...喝醉酒打醉拳最好");
 command("kill "+who->query("id"));
 return 1;
}
