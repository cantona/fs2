inherit NPC;
void create()
{
    set_name("小男孩",({"guard boy","boy"}) );
    set("gender", "男性");
    set("age",25);
    set("attitude", "peaceful");
    set("long","原真教辈份最低的小妹，通常是负责门派内打扫、准备三餐\的工作。\n");
    set("kee",4100);
    set("force",5000);
    set("max_force",5000);
    set("max_kee",4100);
    set("force_factor",10);
    set("combat_exp",1300000);
    set_skill("blade",120);
    set_skill("move",500);
    set_skill("dodge",500);
    set_skill("mogi-steps",500);
    map_skill("dodge","mogi-steps");
    map_skill("move","mogi-steps");
    set_skill("mogi-strike6",100);
    map_skill("parry","mogi-strike6");
    map_skill("blade","mogi-strike6");
    set("chat_chance", 1);
    set("chat_msg", ({
"小男孩对你说道：师父说原真教与奇墓派有数百年的渊源，是不是很久呀？",
}));
    setup();
add_money("gold",5);
create_family("原真教",64,"第子");
carry_object("/daemon/class/blademan/obj/nine-blade")->wield();
}
