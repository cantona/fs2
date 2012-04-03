#include <village.h>
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("李贾",({"store boss","boss"}));
        set("gender", "男性" );
        set("title","魔界村商店老板");
        set("age", 47);
        set("long","魔界村商店的老板, 十足的奸商样, 看了就令人生气.\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        setup();
        add_money("coin",50);
}

void init()
{
        object ob;

        ::init();
}  
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        command("hehe "+ob->query("id"));
        command("say "+RANK_D->query_respect(ob)+"请里面看, 这里的东西是物美价廉的!!");
} 
