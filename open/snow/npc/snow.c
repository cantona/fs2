// snow.c
#include <ansi.h>

inherit NPC;

void die()
{
	object killer = this_object()->query_temp("last_damage_from");
    if(!query_temp("last_damage_from"))
    {
      ::die();
      return ;
    }
	if( present("letter",killer) ) killer->set("quests/kill-snow",1);
	::die();
}
int do_move( object me )
{
	remove_call_out("do_move");
	load_object("/open/snow/room/help_room");
	me->move("/open/snow/room/help_room");
}
int do_revive( object me )
{
	remove_call_out("do_revive");
	me->revive();
}
int fight_end( object me )
{
	remove_call_out("fight_end");
	if( !me ) return 0;
    if(me->is_ghost()) return 1;
	if( me->query_temp("no_fear_poison") ) return 0;
	message_vision(HIY "$N突然地感到一阵晕炫 .... " NOR,me);
	message_vision("\n",me);
	tell_object( me , HIC "你的怨世寒毒发作了！\n" NOR);
	this_object()->remove_all_killer();
	me->unconcious();
	call_out("do_move",4,me);
	call_out("do_revive",5,me);
}
int start_fight( object me )
{
	remove_call_out("start_fight");
	if( !me ) return 0;
	command("say 你不是圣贤书 ?");
	command("say 哦 ? 你是代他而来 ? 好吧 ! 一样受死吧 !\n");
	this_object()->kill_ob(me);
}
void create()
{
	set_name("雪魂",({"snow"}));
	set("title","幻影娘子");
	set("gender","女性");
	set("age", 26);
	set("combat_exp", 500000 );
	set("max_kee",1500);
	set("kee",1500);
	set("force",2000);
	set("max_force",2000);
	set("force_factor",20);
	set_skill("unarmed",300);
	set_skill("dodge",300);
	set_temp("apply/damage",60);
	set_temp("apply/armor",40);

	set("str",30);
	setup();
}
void init()
{
	object me = this_player();
	object ob;
	if( (ob = present("letter",me)) && ob->name()==HIR"挑战书"NOR )
	{
		call_out("start_fight",2,me);
		call_out("fight_end",30,me);
	}
}
int accept_fight( object who )
{
	command("say 我现在必须保持体力，恕我不能奉培。");
	return 0;
}
int accept_kill( object who )
{
	command("say 凭你 ....");
	command("laugh");
	return 0;
}
