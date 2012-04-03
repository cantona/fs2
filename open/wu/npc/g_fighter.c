//泷山弟子
inherit NPC;
void create()
{
        set_name("泷山护法",({"guard fighter","fighter"}));
        set("gender","男性");
        set("age",30);
        set("class","fighter");
        set("force",2000);
        set("max_force",1000);
        set("force_factor",12);
          set("env/狂击","YES");
        set("str",25);
        set("long","泷山派的守门弟子,为泷山派的第一线弟子。\n");
        set("combat_exp",300000);
        set_skill("unarmed",70);
        set_skill("dodge",60);
        set_skill("parry",70);
        set_skill("force",60);
        set_skill("haoforce",60);
        set_skill("fire-kee",40);
        set_skill("lungshan",80);
        set_skill("henma-steps",40);
        map_skill("dodge","henma-steps");
        map_skill("parry","fire-kee");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/fight_robe")->wear();
        add_money("gold",15);
}
int accept_fight(object who)
{
return notify_fail("护法弟子说道 : 对不起 , 我没空陪你玩。\n");
}

void greeting(object ob)
{
        if( ob->query("family/family_name")=="泷山派")
        {
        command("smile "+ob->query("id"));
        }
        if( ob->query("class")=="bandit" )
        kill_ob(ob);
}
