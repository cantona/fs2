inherit NPC;

void create()
{
        set_name("六足双头蛇", ({ "two-heads snake","snake" }) );
        set("race", "野兽");
        set("age", 500);
        set("long", "
一条十多丈长的巨蛇，两颗硕大的舌头再拟面前晃来晃去，还不时耀武
扬威的对你吐着蛇信，从口中散发出的臭味，闻了欲恶。
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "头部", "足部","尾部"  }) );
        set("attitude","peacful");
        set("combat_exp",98000);
	set_temp("apply/dodge",70);
	 set_temp("apply/attack",80);
	set("chat_chance",10);
        set("chat_msg", ({
        "六足双头蛇张开雪盆大口一口就把一只不知名的怪兽吞了下去。\n",
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
  if(ob->query("pass_gblade")<3)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<3)
	ob->set("pass_gblade",3);
::die();
}
