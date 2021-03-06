
inherit NPC;

void create()
{
        set_name("太监", ({ "nobirdman", "man" }) );
        set("long",
                "这是在皇城里的一位太监，平常就跟随在皇帝或妃子旁服侍, \n
"
                "长得一副怪里怪气阴沈沈的一样子, 一看就知道一定不是啥\n
"
                "好东西。\n");

        set("attitude", "heroism");
	set("class","officer");
        set("vendetta_mark", "authority");
        set("pursuer", 1);

        set("str", 20);
        set("cor", 21);
        set("cps", 21);

	set("combat_exp",4608);

	set("random_move",3);
        set("chat_chance", 10);
        set("chat_msg", ({
                (: random_move :),
        }) );

        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "太监喝道：你是什么人!?竟敢在皇城禁内闹事! \n",
                "太监喝道: 我可是太监中功夫最厉害的一位, 你简直找死!!\n"
        }) );

        set_skill("unarmed", 30);
        set_skill("parry", 40);
        set_skill("dodge", 40);
        set_skill("move", 35);

        set_temp("apply/attack", 35);
        set_temp("apply/defense", 35);
        set_temp("apply/damage", 30);
        set_temp("apply/armor", 35);
        set_temp("apply/move", 35);

        setup();

        carry_object("/obj/cloth")->wear();
}

