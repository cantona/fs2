#include "/open/open.h"
#include <ansi.h>
inherit F_VENDOR;

void create()
{
        set_name("阳明德",({"yang ming teck","yang","ming","teck"}));
        set("gender", "男性" );
        set("age", 35);
        set("long", @LONG
他是阳家药店里的老板，他的买的各式各样药材，应有尽有。
LONG
        );
        set("combat_exp",20000);
        set("nickname",HIR"药到病除"NOR);
set("title","专治狂犬病");
        set("attitude", "friendly");
        set_skill("dodge", 40);
set("no_lyssa",1);
        set_skill("unarmed", 20);
        set("vendor_goods", ({
        COMMON_OBJ"bandage",
"/open/marksman/obj/super_pill",
        COMMON_OBJ"pill",
        COMMON_OBJ"pill1",
        COMMON_OBJ"pill2",
"/open/doctor/pill/ff_pill",
        COMMON_OBJ"plaster",
        COMMON_OBJ"plaster1",
        COMMON_OBJ"plaster2",
        }) );
        setup();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(3) ) {
                case 0:
                say("阳明德靠近你说: 这位"+RANK_D->query_respect(ob)
                    +"来买些特制补品吧!\n");
                break;
                case 1:
                say("阳明德客气的道: 这儿什么药材都有 "+RANK_D->query_respect(ob)
                    +"要过来看看吗!?\n");
                break;
                case 2:
                say("阳明德高声喊道: 来来来, "+RANK_D->query_respect(ob)
                    +"要的话，我可以算便宜一点喔!\n");
                break;
        }
}
int accept_kill(object ob)
{
 command("say 哼!连医生你也敢杀，真是无药可救。");
 command("say 纳命来!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 你没有看见我在急救病人吗?给我闪都别的地方去。");
return 0;
}
