//皇城禁卫军

#include </open/capital/capital.h>

inherit NPC;
								
void create()
{
        set_name("吴永平",({"manager wu","manager","wu"}) );
	set("title","粮草总兵");
        set("officer_power",20);
	set("max_officer_power",20);
	set("gender","男性");
	set("age",33);
	set("class","officer");
	set("officer_class","粮草总兵");
	set("str",30);
	set("long","禁卫军的粮草总兵，负责全军的粮食供给，责任重大。\n");
	set("inquiry", ([
        "thief" : "哈..关我啥事, 只要天不塌下来就好了。",
	]));
									
	set("combat_exp",30943);
	set_skill("blade",70);
	set_skill("parry",70);
	set_skill("dodge",70);
	set_skill("her-blade",60);
	map_skill("blade","her-blade");
	setup();
	carry_object(CAP_OBJ"Ns_suit")->wear();
	carry_object(CAP_OBJ"Ns_boots")->wear();
	carry_object(CAP_OBJ"Ns_hat")->wear();
        carry_object(CAP_OBJ"Sblade")->wield();
	add_money("silver",20);
				
}

int accept_fight(object who)
{
	return notify_fail(query("name")+"说：放肆!!\n");
}
