inherit NPC;

void create()
{
        set_name("段家初习弟子", ({ "trainee" }) );
        set("gender", "男性" );
        set("age", 19);
        set("long", "你看到一位身体结实的年轻人, 正在和同伴过招。\n");
        set("combat_exp",5000);
        set_temp("apply/attack",10);
        set_temp("apply/dodge",15);
        setup();
}

