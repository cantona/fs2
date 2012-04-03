#include <ansi.h>
inherit NPC;
void create()
{
        set_name("布衣", ({"npc10","chan"}));
        set("title", ""HIW"【天帝】"NOR"");
        set("long", "此乃天界双尊之一的布衣，掌管天界的一切。\n");
        set("age", 1000);
        set("str", 50);
        set("cor", 50);
        set("int", 50);
        set("spi", 50);
        set("cps", 50);
        set("kar", 50);
        set("force", 50000);
        set("max_force", 50000);
        set("force_factor", 20);
        set("combat_exp", 10000000);
        set("max_kee",30000);
        set("kee",30000);
        set("race", "人类");
        set("gender", "男性");
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set("bellicosity",10000);
        set("s_kee",400);
        set("max_s_kee",400);
        set("family/family_name","仙剑派");
        set("sec_kee","tiger");
        set_skill("force", 100);
        set_skill("fireforce",120);
        set_skill("unarmed", 120);
        set_skill("sword", 120);
        set_skill("universe",200);
        set_skill("sun_fire_sword", 120);
        set_skill("nine-steps", 120);
        map_skill("unarmed","universe");
        map_skill("sword", "sun_fire_sword");
        map_skill("dodge", "nine-steps");
        map_skill("parry","wind-rain");
        map_skill("force","fireforce");
        set_temp("apply/damage", 90);
        set_temp("apply/armor", 90);
        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        
        
        setup();
        carry_object("/u/s/superobs/obj/cloth");
        carry_object("/open/gsword/obj/dragon-sword.c")->wield();
        add_money("gold",25);
}

int accept_kill(object who)
{
who=this_player();
command("say 敢对我下重手，也不先事先探探我是谁\n");
kill_ob(who);
command("charge "+who->query("id"));
command("perform fireforce.gold-fire");
command("open king");
command("wear all");
command("cmd usekee "+who->query("id"));

    return 1;
}
int accept_fight(object who)
{
who=this_player();
command("say 我从不心软的，你准备受死吧\n");
kill_ob(who);
command("charge "+who->query("id"));
command("open king");
command("perform fireforce.gold-fire");
command("wear all");
command("cmd usekee "+who->query("id"));

    return 1;
}
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){                 //ok by chan
 object who=this_player();
 object ob,chan;
 ob=this_object();
 chan=present( "chan",environment(ob) );
 if(str=="askgod chan" || str=="askgod chan"){
write(HIY"布衣怒喝说：「对天神求神问卜，真是想死了唷。”!!\n"NOR);
 command("perform fireforce.gold-fire");
 chan->kill_ob(who);
 return 1;
                  }
}

void heart_beat()
{
        object env, mob = this_object();
        int i;

        set_heart_beat(1);

        if( query("kee") < 0)
            mob->die();
           
        

        if( query_temp("heal") < 30 ) 
        {
            if( query("force") < 10000)
             {
                mob->add("force",10000);
             }
            if( query("kee") < 10000 ) 
            {
                mob->receive_curing("kee",4000);
                mob->receive_curing("gin",300);
                mob->receive_curing("sen",300);
                mob->receive_heal("kee",4000);
                add_temp("heal", 1);
                tell_room(environment(), HIY+name()+"呼唤出小岚"+
                     "慢慢的运用仙术帮布衣疗伤.\n"+NOR);
            }
        }
        ::heart_beat();
}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void die ()
{
	 object me=query_temp("last_damage_from");
	if(!present("fight_card",me))
	{
	tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
	destruct (this_object ());
	return ;
	}
	if(!me->query("quest/start_game"))
	{
	tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
	destruct (this_object ());
	return ;
	}
	if(me->query("quest/start_game")< 11)
       {
        tell_object(users(),HIY"
	恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第十层试炼□塔"HIG"’"HIY"通过！！

	"HIW"希望"+me->query("name")+"能不负众望，改天勇闯梦幻楼层"HIG"‘"HIY"天□阁"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",11);
	me->move(__DIR__"ticket");
        destruct (this_object ());
	return ;
        }
	{
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	me->move(__DIR__"ticket");
	destruct(this_object());
	:: die();
	}
}