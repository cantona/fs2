// trainee.c
// 武馆教头
inherit NPC;
void create()
{
        set_name("武馆教头", ({ "trainer" }) );
        set("gender", "男性" );
        set("age", 30);
        set("long", "你看到一位年约三十教头正在教导着泷山弟子。\n");
        set("combat_exp",300000);
        set_skill("unarmed",70);
        set_skill("dodge",60);
        set_skill("parry",60);
        set_skill("force",60);
        set_skill("haoforce",60);
        set_skill("lungshan",70);
        set_skill("henma-steps",60);
        map_skill("dodge","henma-steps");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/linen")->wear();
}
