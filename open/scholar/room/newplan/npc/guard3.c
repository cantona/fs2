//五儒生完成版
//会放lotch及会抓plan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;


void create() {
        set_name("费  暐",({"guard wuo","wuo","guard"}));
        set("class","scholar");
        set("family/family_name","段家");
        set("title",HIR"离(火)"NOR);
        set("long",
        "\n他是八卦阵的第三个守将。\n");
        set("str",40);
        set("cor",25);
        set("gender","男性");
        set("attitude","heroism");
        set("max_gin",7000);
        set("max_kee",8000);
        set("max_sen",7000);
        set("max_force",8000);
        set("force",8000);
        set("age",40);
        set("six_spsp",1);  
        set("force_factor",20);
        set("combat_exp",7000000);
        set("bellicosity",5000);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("stabber",120);
        set_skill("force",200);
        set_skill("sunforce",200);
        set_skill("six-fingers",100);
        set_skill("linpo-steps",100);
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("force","sunforce");
        map_skill("stabber","six-fingers");
        map_skill("parry","six-fingers");
        set("functions/handwriting/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.handwriting") :),
}));
setup();
        carry_object(PING_OBJ"cloud_fan")->wield();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield all");
        command("say 愚蠢!!接招吧!!!");
        command("kill "+who->query("id"));
        command("perform six-fingers.handwriting");
        me->delete_busy();
        return 1;
}
int accept_fight(object who)
{
        who=this_player();
        command("say 如果不敢和我较量, 那就别来这边送死!!");
          return 0;
}
void heart_beat()
{
        object ob=this_object();
        if( is_fighting() ){
        if(random(100) <30 )
        {
message_vision(HIG"\n费暐偷偷吃了九转雄蛇丸，使身上气力恢复。\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
