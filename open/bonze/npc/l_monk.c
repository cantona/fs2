inherit NPC;
void create()
{
        set_name("少林武僧",({"unarmed monk","monk"}));
        set("long","一个全身肌肉的和尚，看来经过相当程度的训练 .\n");
        set("gender","男性");
        set("combat_exp",20000);
        set("attitude","peaceful");
        set("age",22);
        set("class","soldier");
        set_skill("unarmed",55);
        set_skill("dodge",30);
        set_skill("parry",40);
        set("chat_chance",10);
        set("chat_msg",({
        }));
        setup();
        add_money("silver",5);
}
