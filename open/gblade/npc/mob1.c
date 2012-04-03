inherit NPC;

void create()
{
        set_name("落头虫", ({ "fly-head adultoid","adultoid" }) );
        set("race", "野兽");
        set("age", 500);
        set("long", "
上古时代才有的怪兽，其大如狗，声能惊人，鸡犬闻之皆走。其头能飞，
以耳为翼。
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "头部", "身体","耳朵"  }) );
	 set("attitude","peaceful");
	 set("combat_exp",10000);
	set_temp("apply/attack",50);
	set_temp("apply/dodge",50);
        set("chat_chance",10);
        set("chat_msg", ({
        "落头兽的头飞了出去在你身边绕了几圈，又回到牠自己身上。\n",
         }) );
       setup();
}
void init()
{
	object ob;
	::init();
	if(interactive(ob=this_player()) && !is_fighting())
	{
	remove_call_out("greeting");
	call_out("greeting",2,ob);
	}
}
void greeting(object ob)
{
	if(ob->query("pass_gblade")<1)
	this_object()->kill_ob(ob);
}
void die()
{
	object ob;
	ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<1)
	ob->set("pass_gblade",1);
::die();
}
