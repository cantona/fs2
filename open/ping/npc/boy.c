// 段家 书僮  ..made by adam
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("小书僮",({"boy"}));
        set("gender","男性");
        set("class","scholar");
        set("combat_exp", 1000);
        set("attitude","peaceful");
        set("age",10);
        set("chat_chance", 10);
        set("chat_msg", ({
"小书僮道:  在这里pray,会有意想不到的事ㄡ!!\n",
        "小书僮道: 好想学‘一阳心法秘笈’上的武功喔。\n",
        }));
        set("inquiry", ([
        "thief" : "京城出了盗贼喔, 我怎么都不知道?",
        "书房" : "王爷在府中有一间秘密书房, 但要找到‘暗门’才能进去。",
        "暗门" : "好像是在大厅之中, 但我一直找不到, 王爷说, 等我长大才能带我去。",
        "一阳心法秘笈"  : "笨!当然是纪载有关一阳心法的事啊, 嘻嘻。",
        ]));
        set("force",150);
        set("max_force",150);
        set("max_kee",300);
        set("kee",300);
        set("force_factor", 1);
        set_skill("force",10);
        set_skill("unarmed",30);
        set_temp("apply/dodge",30);
        setup();
add_money("gold",3);
}

