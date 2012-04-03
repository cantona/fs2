#include <village.h>
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("许应",({"bank boss","boss"}));
        set("gender", "男性" );
        set("title","魔界村钱庄老板");
        set("age", 43);
        set("long","魔界村钱庄的老板, 是一位和蔼可亲的中年人.\n");
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
        command("say "+RANK_D->query_respect(ob)+"你好!有什么我能效劳的地方吗?");
} 
