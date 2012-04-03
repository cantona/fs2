//五儒生完成版
//会放lotch及会抓plan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("刑延刃",({"guard lins","lins","guard"}));
        set("class","prayer");
        set("title",HIG"兑(泽)"NOR);
        set("long",
        "\n他是八卦阵的第四个守将。\n");
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
        set("force_factor",20);
        set("combat_exp",7000000);
        set("bellicosity",5000);
        set_skill("unarmed",150);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("superforce",150);
        set_skill("parry",120);
        set_skill("universe",140);
        set_skill("force",200);
        set_skill("fire-array",130);
        set_skill("shift-steps",150);
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("unarmed","universe");
        map_skill("array","fire-array");
        map_skill("force","superforce");
        set("functions/blood/level",60);
        set("functions/tengin/level",120);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
                (: perform_action, "force.blood3" :),
                (: perform_action, "universe.tengin" :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        create_family("圣火教",1,"教皇");
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say 愚蠢!!接招吧!!!");
        command("kill "+who->query("id"));
                (: perform_action, "universe.tengin" :),
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
message_vision(HIG"\n刑延刃偷偷吃了九转雄蛇丸，使身上气力恢复。\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
