// 风行山寨
inherit NPC;
void create()
{
        set_name("啰啰头",({"soldier leader","leader"}));
set("long","
他可是小啰啰们的头头喔！虽然说是头头，也只是比小啰啰们多干了些坏事罢了，在
山寨中除了三大头目以外，就是他最大了，看他一付耀虎扬威的样子，真想扁他一顿。
\n");
        set("gender","男性");
        set("combat_exp",750000);
        set("attitude","peaceful");
        set("age",25);
        set("class","soldier");
        set("str",30);
        set("cor", 30);
        set("int", 30);
        set("con", 30);
        set("kar", 30);
        set("max_force",1000);
        set("force",1000);
        set("max_kee",5000);
        set("kee",5000);
        set("force_factor",12);
        set_skill("stabber",85);
        set_skill("parry",65);
        set_skill("dodge",65);
        set_skill("six-fingers",85);
        set_skill("linpo-steps",65);
        map_skill("stabber","six-fingers");
        map_skill("dodge","linpo-steps");
        map_skill("parry","six-fingers");
        set("chat_chance",5);
        set("chat_msg",({
        (: this_object(),"random_move" :),
        }));
        setup();
        carry_object("/open/ping/obj/b-fan")->wield();
        add_money("silver",10);
}

