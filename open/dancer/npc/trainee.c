// trainee.c
// 练习生
inherit NPC;
void create()
{
        set_name("练习生", ({ "trainee" }) );
        set("gender", "女性" );
        set("age", 20);
        set("long", "妳看到的是夜梦小筑的练习生\n");
        set("combat_exp",60000);
        set_temp("apply/attack",100);
        set_temp("apply/dodge",90);
        setup();
}
