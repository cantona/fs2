#include <ansi.h>
inherit NPC;
void create()
{
        set_name("银针门侍卫",({"guard"}));
        set("long","
满脸和善的笑容中隐含着一股不容侵犯的威严，望着他不怒自威的眼神，
使得你内心的作歹念头，一扫而空。
");
        set("gender","男性");
        set("combat_exp",60000);
        set("attitude","heroism");
        set("age",30);
        set_skill("unarmed",20);
        set_skill("dodge", 30);
        set_skill("parry", 40);
        set_skill("force", 30);
        set_skill("move",40);
        set_skill("cure",30);
        set_skill("shinnoforce",30);
        set_skill("yu-needle",50);
        set("force",300);
        set("max_force",300);
        set("force_factor",5);
set_skill("seven-steps",30);
        map_skill("force","shinnoforce");
        map_skill("unarmed","yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        set("race","人类");
        setup();
        add_money("silver",70);
        carry_object("/open/doctor/obj/needle3.c")->wield();

}
void greeting(object who)
{
    if( (who->query("id") == "cccc") )
    {
       command("say 欢迎银针门的创教大神!!");
       command("bow "+who->query("name"));
    }
    else
    {
     command("say 欢迎来到银针门!!有兴趣加入银针门吗??");
    }
return;
}



