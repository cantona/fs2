#include </open/open.h>
inherit NPC;
void create()
{
        set_name("段远风",({"duan"}));
        set("long","段远风是段云的三弟子, 他才刚办完师父所交代的事, 因此在这稍微的休息。\n");
        set("gender","男性");
        set("class","scholar");
        set("combat_exp", 240000);
        set("attitude","heroism");
        set("inquiry", ([
        "thief" : "嗯..这件事我在路经京城时也有耳闻, 可惜有要事在身, 无法擒拿此贼。",
        "scar" : "右耳后有伤痕的人？这我倒是不清楚耶。",
        "sad_story" : "师父的伤心往事..嗯, 由于我是带艺拜师, 师父的事我也不太清楚, 你可以去问问大师兄看看。",
        ]));
        set("age",33);
        set("force",800);
        set("max_force",800);
        set_skill("force",50);
        set_skill("unarmed",30);
        set_skill("sunforce",60);
        set_skill("linpo-steps",70);
        set_skill("six-fingers",70);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor", 9);
        set("chat_chance_combat", 30);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
        }));
        setup();
        carry_object(PING_OBJ"neck2")->wear();
        carry_object(PING_OBJ"gloves1")->wear();
        carry_object(PING_OBJ"boots1")->wear();
        carry_object(PING_OBJ"pen1")->wield();
        add_money("gold",3);
        create_family("段家",11,"弟子");
}
