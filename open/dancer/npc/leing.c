//leing.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
        set_name("小玲",({"leing"}));
        set("gender", "女性" );
        set("age", 19);
set("long", @LONG
负责夜梦小筑伙食的弟子，虽是负责伙食武功还是不错的....
LONG
        );
        set("combat_exp",10000);
        set("attitude", "friendly");
        set_skill("dodge", 35);
        set_skill("dremagic", 35);
        set_skill("dreamdance", 45);
        set_skill("paull-steps", 45);
        set_skill("magic", 45);
        set_skill("unarmed", 35);
        set_skill("move", 35);
        set_skill("parry", 35);
        map_skill("unarmed","dreamdance");
        map_skill("parry","dreamdance");
        map_skill("dodge","paull-steps");
        map_skill("move","paull-steps");
        map_skill("magic","dremagic");
        set("vendor_goods", ({
                CAPITAL_OBJ"tea",
                "/obj/example/wineskin",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
        }) );
        setup();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",35);
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                say("小玲靠近你小声的说: 这位"+RANK_D->query_respect(ob)
                        +"来买些东西巴!\n");
                        break;
                case 1:
                say("小玲嘶声么\喝道: "+RANK_D->query_respect(ob)
                        +"过来看看吗!?\n");
                        break;
        }
}
