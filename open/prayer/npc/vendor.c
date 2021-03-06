///u/r/rence/npc/vendor.c

#include "/open/open.h"
inherit F_VENDOR;

void create()
{
        set_name("流动摊贩",({"vendor"}));
        set("gender", "男性" );
        set("age", 27);
set("long", @LONG
在西域里专门设摊卖些小东西的人,你可以列出(list)他卖些什么...
LONG
        );
        set("combat_exp",135);
        set("attitude", "friendly");
        set_skill("dodge", 60);
        set_skill("hammer", 30);
        set_skill("parry", 27);
        set("chat_chance",3);                              //说话的机率
        set("vendor_goods", ({
                COMMON_OBJ"bandage",
                COMMON_OBJ"pill",
                COMMON_OBJ"pill1",
 COMMON_OBJ"mass",
                COMMON_OBJ"plaster1",
                GS_OBJ"map",
                CAPITAL_OBJ"tea",
                "/obj/example/wineskin",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
        }) );
        setup();
        carry_object("/obj/example/chicken_leg")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(3) ) {
                case 0:
 say("小贩跑过来拉着你说: 这位"+RANK_D->query_respect(ob)
                        +"来买些东西巴!\n");
                        break;
                case 1:
                say("小贩嘶声么\喝道: "+RANK_D->query_respect(ob)
                        +"过来看看吗!?\n");
                        break;
                case 2:
                say("小贩高声喊道: 宝物大放送,"+RANK_D->query_respect(ob)
                        +"要的话，我可以算便宜一点喔!\n");
                        break;
  }
}

