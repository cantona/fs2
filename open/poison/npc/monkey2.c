inherit NPC;

void create()
{
        set_name("小猴子", ({ "small monkey","monkey" }) );
        set("race", "野兽");
        set("age", 5);
        set("long", "一只小猴子.\n");
        set("str", 35);
        set("cor", 45);
        set("limbs", ({ "利牙", "身体", "前爪" , "后爪" , "尾巴" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",2000);
        set_temp("apply/armor", 40);
        set_temp("apply/attack", 60);
        set_skill("dodge",60);
        set("chat_chance",10);
        set("chat_msg",({
                "猴子抓抓屁股 ,觉得很舒服 .\n",
                }));
        setup();

}
