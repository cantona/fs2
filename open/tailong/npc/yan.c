inherit NPC;
void create()
{
        set_name("王语嫣",({"wang yu yan","wang","yan"}));
        set("title","武学图书馆");
        set("long","她可是精通百家武学的奇女子,举凡各家武学,她都能如数家珍的说
出来
C\n");
        set("gender","女性");
        set("combat_exp", 1000000);
        set("attitude","friendly");
        set("age",22);
        set("force",5000);
        set("max_force",5000);
        set("kee",1000);
        set("max_kee",1000);
        set("force_factor",30);
        setup();
        add_money("gold",100);
}
