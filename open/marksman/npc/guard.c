inherit NPC;
#include <ansi.h>

#include <marksman.h>
void create()
{
        set_name("守卫军", ({ "guard" }) );
        set("class","blademan");
        set("gender", "男性" );
        set("age", 25);
        set("long", "保卫将军府安全的守卫，以防止敌人潜入。\n");
set("combat_exp",100000);
        set("max_force",500);
set_skill("archery",50);
set_skill("dodge",50);
set("force",500);
set_skill("parry",50);
set_skill("god-shooting",30);
set_skill("rain-steps",30);
        map_skill("parry","rain-steps");
        map_skill("archery","god-shooting");
        set_temp("apply/attack",10);
        set_temp("apply/dodge",10);
        set("force_factor",5);
        set("chat_msg",({
        "卫军喝道： 来着何人，您是来做什么的。 ",
        }));
          setup();
carry_object(C_OBJ"/arrow-2");
carry_object(C_OBJ"/bow-2")->wield();
}
int accept_kill(object ob)
{
 command("say 你的眼睛长在屁眼上吗?敢来杀我!");
 command("say 等死吧!!");
command("cmd holdup arrow with bow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 我有重要的职位，没有空陪你玩。");
return 0;
}

