// herbalist.c

inherit NPC;

string heal_me(object me);

void create()
{
	set_name("杨掌柜", ({ "herbalist" }) );
	set("title", "桑邻药铺");
	set("gender", "男性" );
	set("age", 54);
	set("long",
		"杨掌柜是这附近相当有名的大善人，常常施舍草药给付不起药钱的穷人\n"
		"。此外他的医术也不错，年轻时曾经跟着山烟寺的玄智和尚学医，一般\n"
		"的伤寒小病直接问他开药吃比医生还灵。\n" );
	set("combat_exp", 1300);
	set("attitude", "friendly");
	set("inquiry", ([
		"治伤": (: heal_me :),
		"疗伤": (: heal_me :),
		"开药": (: heal_me :),
	]) );

	set_skill("literate", 70);
	set_skill("dodge", 60);
	set_skill("unarmed", 60);
	setup();
	add_money("coin", 80);
}

string heal_me(object me)
{
	int ratio;

	ratio = (int)me->query("eff_kee") * 100 / (int)me->query("max_kee");
	if( ratio >= 100 )
		return "这位" + RANK_D->query_respect(me) + "，您看起来气色很好啊，不像有受伤的样子。";
	if( ratio >= 95 )
		return "哦....我看看....只是些皮肉小伤，您买包金创药回去敷敷就没事了。";
	
}

