#include </open/open.h>
inherit NPC;
int do_say();
string do_thief();
void create()
{
	set_name("武林豪客", ({ "fighter" }) );
	set("race", "人类");
	set("gender", "男性");
	set("age", 33);
	set("class","fighter");
	set("long","他是一位武林里的豪客, 身形魁梧, 脸生横肉, 嘴大唇厚, 铁髭如蜂窝, "+
        "他为了闯出一番功名而到京城来碰碰运气。\n");
	set("cps", 5);
	set("str", 30);
	set("cor", 20);
	set("kar",10);

        set( "inquiry", ([
       	  "name"  : "待我闯出一番事业来再说吧。",
       	  "here"  : "这里是京城啊, 我也为了前途而来到这儿, 你呢?",
	  "thief" : (: do_thief :),
        ]));	 	
        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
	(: this_object(),"do_say" :),
	 }) );
		
        set_temp("apply/attack", 50);
        set_skill("dodge",30);
        set_skill("parry",40);
        set_skill("blade",60);
	set_skill("her-blade",50);
	map_skill("blade","her-blade");
        set("combat_exp",5000);
	setup();
        add_money("silver",1);
        carry_object(CAPITAL_OBJ"Bblade")->wield();
}

string do_thief()
{
	object ob=this_object();
	object me=this_player();
	if( ob->query_temp("show_mark")==getuid(me) )
	{
	  command("say 既然大人为办案而来, 小的这就原原本本的告诉你了。");
command("say 此名大盗的武功似乎是平南城段家一派的六脉神剑，且此盗的右耳后有小伤痕(scar)。");
	  me->set_temp("thief",3);
	  return("我就知道这么多了");
	}
	else
	  return("哈哈哈!!有天夜里我起来小解时恰巧碰到那名大盗, 才两三招便把他打的落荒而逃, 至于他的长相我可就不能跟你说了, 我要自个把他抓来领赏, 哈哈哈....");
}

int do_say()
{
	object ob=this_player();
	tell_room(environment(this_object()),
	"豪客喝道：可恶!!你这"+RANK_D->query_rude(ob)+", 让大爷我来教训你!!\n");
}
	
void defeated_enemy(object ob)
{
	say("[36m豪客冷笑一声道 : 没本事也敢到京城撒野。[0m\n");
        remove_killer(ob);
}        
