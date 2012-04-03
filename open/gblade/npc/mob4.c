inherit NPC;

void create()
{
        set_name("金翅鸥鹏", ({ "gold-brachium roc","roc" }) );
        set("race", "野兽");
        set("age", 550);
        set("long", "
金闪闪的羽毛，锐利的双眼，是一只少见的珍禽异兽，牠那强而有力的翅
膀，尖锐的双爪，就是最佳的攻击武器，也告诉所有的人最好不要惹牠。
");
        set("str", 40);
        set("con", 55);
        set("kee",4000);
        set("max_kee",4000);
        set("verbs", ({ "bite","claw"}));
        set("limbs", ({ "头部", "爪子","翅膀","双眼"  }) );
        set("attitude","peacful");
        set("combat_exp",100000);
	set_temp("apply/attack",100);
	 set_temp("apply/dodge",100);
        set("chat_chance",10);
        set("chat_msg", ({
        "金翅鸥鹏展开双翼鼓动颳起阵阵强风吹的你的脸隐隐作痛。\n",
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
if(ob->query("pass_gblade")<4)
        this_object()->kill_ob(ob);
}
void die()
{
        object ob;
        ob= this_object()->query_temp("last_damage_from");
	if(ob&&userp(ob)&&ob->query("pass_gblade")<4)
	ob->set("pass_gblade",4);
::die();
}

