// blade_book.c

inherit ITEM;

void create()
{
	set_name("连阳七诀剑谱", ({ "sun_sword_book","book" }));
	set_weight(100);
    set("no_auc",1);
set("no_sell",1);
set("no_drop",1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
    "这是一本记载仙剑连阳剑法的剑谱, 上面有许多人形图案, 看起来并不好领悟\n");
		set("value", 10);
		set("material", "paper");
		set("skill", ([
			"name": "sun_fire_sword",		// name of the skill
                    //  "exp_required": 300000,
											// to learn this skill.
                        "sen_cost":     40,
                        "difficulty":   35,
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    100,
											// from this object.
		]) );
	}
        setup();
}


int query_autoload()
{
if(this_player()->query("family/family_name")=="仙剑派" && this_player()->query("quest/sun_fire_sword",1)==1)
return 1;
}
