inherit NPC;

void create()
{
	set_name("麻雀",({"bird"}));
        set("race", "野兽");
        set("age", 1);
        set("long", "
一支普通的麻雀 , 正在枝头上高歌 .");
        set("str", 10);
        set("cor", 20);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "头部", "身体",  }) );
	set("chat_chance",10);
        set("chat_msg", ({
	(: this_object(),"random_move" :),
                       }) );
        setup();

}
