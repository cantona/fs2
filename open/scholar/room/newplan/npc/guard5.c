//五儒生完成版
//会放lotch及会抓plan
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;


void create() {
        set_name("曹  璋",({"guard hu","hu","guard"}));
        set("class","swordsman");
        set("title",HIY"干(天)"NOR);
        set("long",
        "\n他是八卦阵的第五个守将。\n");
        set("str",40);
        set("cor",25);
        set("gender","男性");
        set("attitude","heroism");
        set("family/family_name","仙剑派");
        set("max_gin",7000);
        set("max_kee",8000);
        set("max_sen",7000);
        set("max_force",8000);
        set("force",8000);
        set("age",40);
        set("force_factor",20);
        set("combat_exp",7000000);
        set("quests/read_snow",2);
        set("bellicosity",5000);
        set_skill("sword",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("parry",120);
        set_skill("sha-array",100);
        set_skill("array",100);
        set_skill("shasword",100);
        set_skill("sun_fire_sword",100);
        set_skill("force",200);
        set_skill("shaforce",150);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        map_skill("move","winter-steps");
        map_skill("force","shaforce");
        map_skill("sword","sun_fire_sword");
        map_skill("parry","shasowrd");
        set("functions/sha_kee/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("parry.sha_kee") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
setup();
        carry_object("/open/gsword/obj/dragon-sword.c")->wield();
        carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
        add_money("gold",50);
 }
int accept_kill(object who,object me)
{
        who=this_player();
        me=this_object();
        command("wield pen");
        command("say 愚蠢!!接招吧!!!");
        command("kill "+who->query("id"));
        command("perform parry.sha_kee");
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
        if(random(100) < 10 )
        {
message_vision(HIG"\n曹  璋偷偷吃了九转雄蛇丸，使身上气力恢复。\n"NOR,ob);
          ob->delete_busy();
        }
        }
        :: heart_beat();
}
