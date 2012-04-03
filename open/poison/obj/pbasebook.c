inherit ITEM;

void create()
{
	set_name("基本毒经", ({"poison book","book"}) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "本");
		set("value", 0);
		set("material", "paper");
		set("skill", ([
			"name":   "poison",
			"exp_required":1,
			"sen_cost":   35,
			"difficulty":  15,
			"max_skill":  10,
		]) );
	set("long","这是一本入门毒经，是冥蛊魔教的基本入门书，里面记
载一些基本的用毒知识。\n");
	set("no_drop",1);
	}
	setup();
}
int valid_learn(object me)
{
return 1;
}
