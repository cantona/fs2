#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("王药师",({"doctor wang","doctor","wang"}));
	set("long","一个斯斯文文的中年人 ,王药师于四 ,五年前于森林中遭遇
盗贼 ,幸逢张乘风经过 ,得以安然无恙 ,王药师为报答救命
之恩 ,自愿来到仙剑帮忙,你可以看看他有些甚么药(list).\n");
	set("gender","男性");
	set("combat_exp",6200);
	set("attitude","friendly");
	set("age",41);
	set("class","doctor");
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
        set("vendor_goods", ({
                GS_OBJ"g_pill",
//              GS_OBJ"g_pill_10",
//  不用这个了..
        }) );
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("cure",40);
	set_skill("literate",40);
	setup();
	carry_object("/open/gsword/obj/robe_2")->wear();
	add_money("silver",5);
}
