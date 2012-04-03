// blade_book.c

inherit ITEM;

void create()
{
	set_name("基础剑谱", ({ "book" }));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
			"这是一本简单的剑谱,随便一个武馆都找的到.\n"
			"然而若你想学剑,这到是适合初学者的好书.\n");
		set("value", 10);
		set("material", "paper");
		set("skill", ([
			"name": 		"sword",		// name of the skill
                        "exp_required": 500,
											// to learn this skill.
                        "sen_cost":             30,
                        "difficulty":   30,
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    30,
											// from this object.
		]) );
	}
        setup();
}
