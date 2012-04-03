//book.c

inherit ITEM;

void create()
{
	set_name("刀谱",({"blade book","book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
			"一本刀谱 , 写着使刀的各种法门 .\n");
		set("value", 800);
		set("material", "paper");
		set("skill", ([
			"name":			"blade",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
			"max_skill":    40,
											// from this object.
		]) );
	}
        setup();
}
