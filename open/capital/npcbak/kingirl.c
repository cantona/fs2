
inherit NPC;

void create()
{
        set_name("宫女", ({ "Castle lady", "lady" }));
        set("long",
                "这是在皇城里的一位宫女,平常跟随在皇帝或妃子身旁服侍, \n
"
                "她正面带微笑的看着你,眼神中露出怀疑的眼神,怀疑你为什\n
"
                "么会在这里出现 \n");


	set("gender","女性");
         set("age", 22);
	set("str",18);
	set("cor", 18);
	set("cps", 18);

	set("combat_exp",3200);


        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "宫女喊道 : 救命啊!!有刺客啊!! \n",
                "宫女喊道 : 快来人啊~~~~这边有来路不明的人!! \n",
        }) );

        set_skill("unarmed", 30);
        set_skill("parry", 40);
        set_skill("dodge", 40);
	set_skill("move", 40);


        setup();

	carry_object("/open/capital/obj/silk_cloth2")->wear();
}

