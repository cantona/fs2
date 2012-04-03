// 风行山寨
inherit NPC;
void create()
{
       set_name("小啰啰",({"soldier"}));
set("long","
他是山寨里头的小啰啰，奉大头目的命令在这里查看有没有可疑的人物，没事就喜
欢欺压善良的老百姓，不过看起来好像也不怎么样，三两下子就可以把他干掉了吧。
\n");
        set("gender","男性");
        set("combat_exp",250000);
        set("attitude","peaceful");
        set("age",22);
        set("class","soldier");
        set("max_force", 700);
        set("force", 700);
        set("max_kee", 700);
        set("kee", 700);
        set_skill("unarmed",85);
        set_skill("dodge",65);
        set_skill("parry",45);
        set_skill("six-fingers",75);
        set_skill("linpo-steps",55);
        map_skill("unarmed","six-fingers");
        map_skill("parry","six-fingers");
        map_skill("dodge","linpo-steps");
        set("chat_chance",10);
        set("chat_msg",({
         (: this_object(),"random_move" :),
        }));
        setup();
        add_money("silver",5);
}

