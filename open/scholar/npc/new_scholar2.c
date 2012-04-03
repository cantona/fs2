#include <ansi.h>

inherit NPC;
void create()
{
        set_name("新进弟子", ({ "new man","man"}));
        set("gender", "男性" );
        set("age", 20);
        set("str", 25);
        set("cor", 45);
        set("cps", 25);
        set("int", 30);
        set("long",
                "刚加入儒门的儒生, 也是儒门的新进弟子。\n");
        set("combat_exp",8000);
        set("chat_chance", 1);
        set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say 床前明月光....疑似地上霜...."):),
                (: command ("say 举头望明月....低头思故乡....") :),
        }) );
        set_skill("parry", 70);
        set_skill("unarmed", 70);
        set_skill("dodge", 40);
        set_skill("winter-steps", 40);
        map_skill("dodge","winter-steps");
        setup();
        add_money("silver",30);
        carry_object("/obj/cloth")->wear();
}

