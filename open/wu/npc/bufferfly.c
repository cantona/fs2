inherit NPC;

void create()
{
        set_name("玉面蝴蝶", ({ "butterfly" }) );
        set("race", "野兽");
        set("age", 1);
        set("long", "
稀有且珍贵的蝴蝶，翩翩飞舞在花丛间，姿态显的格外地娴静高雅，仔细
一瞧，发现其头部有一抹淡淡的斑点，色泽犹如碧玉一般。");
        set("str", 10);
        set("cor", 20);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "头部", "身体",  }) );
        set("combat_exp",600);
	set("chat_chance",10);
	/*
        set("chat_msg", ({
	(: this_object(),"random_move" :),
                       }) );
	*/
        setup();

}
