#include <ansi.h>
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
        set_name("小二",({"small two","small","two"}));
        set("gender", "男性" );
        set("age",25);
        set("long", "天龙客栈的小二 , 他正忙着招呼客人 .\n");
        set("attitude", "friendly");
        set("combat_exp",30000);
        set("nickname",HIY"利牙快嘴"NOR);
        set("vendor_goods", ({
        "/obj/example/chicken_leg",
        "/obj/example/dumpling",
        "/obj/example/wineskin",

        }) );

        setup();
}
void greeting(object ob)
{
        command("say 最近生意真差，没啥客人住房。 ");
        command("say 还好还有一位老人住宿，否则本店要关门啰。");
}

int accept_kill(object ob)
{
 command("say 没有看到我在忙吗?真不知好歹，敢动到我头上!");
 command("say 纳命来!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 小兄弟，我现在忙着招呼客人，等一下才陪你玩。");
return 0;
}
