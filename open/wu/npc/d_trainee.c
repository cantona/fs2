// trainee.c
// 武馆弟子
inherit NPC;
void create()
{
        set_name("武馆弟子", ({ "trainee" }) );
        set("gender", "男性" );
        set("age", 24);
        set("long", "你看到一位身材高大的汉子，正在辛苦地操练着。\n");
        set("combat_exp",60000);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",90);
        setup();
        carry_object(__DIR__"obj/linen")->wear();
}
