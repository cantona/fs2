#include <ansi.h>
inherit NPC;
void create()
{
        set_name("妇女", ({ "woman"}) );
        set("gender", "女性" );
        set("age",30);
        set("str", 17);
        set("cor",35);
        set("cps", 25);
        set("int", 15);
        set("long",
                "一位正在忙着帮她的老公工作.\n");
        set("combat_exp",8000);
set("max_kee",3000);
        set("attitude", "peaceful");

        set_skill("dodge", 7);
        set("chat_chance",20);
        set("chat_msg",({
        "妇女唉气的说：唉!天天有洗不完的衣服。\n",
        }));
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 15);
}
int accept_kill(object ob)
{
 command("say 你以为女人是好欺负的吗?");
 command("say 纳命来!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 嗯!!就让我来陪你玩玩几招吧。");
return 1;
}

