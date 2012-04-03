// 基础刺术

inherit ITEM;

void create()
{
	set_name("基础刺术集", ({ "stabber_book","book" }));
	set_weight(900);
	if( clonep() )
	  set_default_object(__FILE__);
	else 
	{
	  set("unit", "本");
	  set("long","这是一本讲述基本刺术的书籍, 作者署名「杨书文”。\n");
          set("value", 300);
	  set("material", "paper");
	  set("skill", ([
	  "name" : "stabber",		// name of the skill
          "exp_required" :  100,
				        // to learn this skill.
          "sen_cost" : 22,              // gin cost every time study this
          "difficulty" : 20,
					// modify is gin_cost's (difficulty - int)*5%
          "max_skill":  30
	  ]) );
	}
}

