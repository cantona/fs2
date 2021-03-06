inherit NPC;

void create()
{
        set_name("彩纹九官鸟", ({ "parrot", "bird" }) );
        set("race", "野兽");
        set("age", 1);
        set("long", "你寻着问候声望来, 看见一只羽尾着七彩花纹的九官鸟.\n");
        set("str", 20);
        set("cor", 15);
        set("limbs", ({ "头部", "身体", "前脚", "后脚", "尾巴" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("chat_chance", 8);
        set("chat_msg", ({
                "九官鸟 飞到你的肩膀亲切的对你说‘欢迎光临’。\n",
                "九官鸟 红着脸对你说‘小姐都叫我 小虹’。\n",
                "九官鸟 突然张开翅膀飞了出去, 宛如一条长虹越过窗前。\n",
                "九官鸟 兴奋的对你说‘看看窗外, 外面好美喔’。\n" }) );

        set_temp("apply/attack", 1000);
        set_skill("dodge",100);
        set_skill("unarmed",70);
        set("combat_exp",10000);
        set_temp("apply/armor", 3000);
        setup();
}
