inherit NPC;
void create()
{
        set_name("心逸",({"monk yi","monk","yi"}));
        set("title","天龙寺高僧");
        set("long","他是天龙寺中第一位不是段家人的长老级僧侣,由于他对天龙寺有着
很大的贡献 ,因此得窥天龙寺这个武学宝殿
C\n");
        set("gender","男性");
        set("combat_exp", 1100000);
        set("attitude","friendly");
        set("age",55);
        set("force",4000);
        set("max_force",4000);
        set_skill("force",100);
        set_skill("unarmed",100);
        set_skill("sunforce",100);
        set_skill("linpo-steps",100);
        set_skill("six-fingers",110);
        set_skill("dodge",100);
        set_skill("parry",100);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor",15);
        setup();
        add_money("gold",100);
}
