// trainee.c
// 武馆弟子
inherit NPC;
void create()
{
        set_name("武馆弟子", ({ "trainee" }) );
        set("gender", "男性" );
        set("age", 24);
        set("long", "你看到一位身材高大的汉子，正在辛苦地操练着。\n");
        set("combat_exp",120000);
        set_skill("unarmed",30);
        set_skill("dodge",40);
        set_skill("parry",20);
        set_skill("force",40);
        set_skill("haoforce",40);
        set_skill("lungshan",50);
        set_skill("henma-steps",40);
        map_skill("dodge","henma-steps");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/linen")->wear();
}
