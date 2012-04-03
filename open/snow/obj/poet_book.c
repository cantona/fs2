//book.c

#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIC"独孤诗文集"NOR,({"poet book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "本");
		set("long",
	"这本书是独孤愁生平所写的诗文总集。\n");
		set("value",800);
		set("material", "paper");
		set("skill", ([
			"name" : 		"literature",
											// to learn this skill.
			"sen_cost":		30,				// gin cost every time study this
			"difficulty":	20,				// the base int to learn this skill
											// modify is gin_cost's (difficulty - int)*5%
			"max_skill":	40,
											// from this object.
		]) );
	}
        setup();
}
