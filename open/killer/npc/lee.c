// /open/center/npc/vendor.c
//先期堆出，以后在改卖东西
#include "/open/open.h"

inherit F_VENDOR;

void create()
{
set_name("李大牛", ({ "lee" }) );
set("gender", "男性" );
set("age", 42);
set("long", @LONG
他是杀手总坛的专卖员,是叶秀杀的好意为杀手们特别引进的，卖甚么可用(list)知道
LONG);
set("attitude", "friendly");
set("combat_exp",163);
set_skill("dodge",20);
set("vendor_goods", ({
            GS_OBJ"woodsword",
    GS_OBJ"sword",
            GS_OBJ"woodblade",
    "/obj/example/dagger",
    "/open/gblade/obj/blade",
            "/open/ping/obj/fan-2",
    "/open/poison/obj/longwhip",
    "/open/gblade/obj/pen",
}) );

set("greeting_msg", ({
     "来ㄡ!! 来ㄡ!! 快来快买,晚来晚买!!\n",
    "武器超值大拍卖!! \n",
        "先生小姐,买把武器防身吧!! 当色狼,打色狼,都很实用喔!!\n",
}) );
setup();
        carry_object("/open/gsword/obj/dirty_cloth")->wear();
carry_object("/obj/example/dagger")->wield();
}