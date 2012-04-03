//magic book ----> to add magic lv to max 30

inherit ITEM;

void create()
{
        set_name("梦玄仙册",({"papers"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "卷");
		set("long",
              "一册由夜梦小筑历代掌门精心制作的仙术宝卷。\n");
		set("value",800);
		set("material", "paper");
		set("skill", ([
                        "name":                 "magic",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
                        "max_skill":    30,
											// from this object.
		]) );
	}
        setup();
}
int valid_learn(object me)
{
	if(me->query("family/family_name")!="夜梦小筑"
	&& me->query("family/family_name")!="天道派")
          return -1;
        return 1;
}
