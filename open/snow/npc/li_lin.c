#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
string ask()
{
	if( this_player()->query("quests/to-kill-2") != 1 )
		return "这个人我有听过，他好像是二十年前的一位名人。\n";
	this_object()->set("title","黑仙罗汉");
	command("say 既然被你知道了，你就不能活命！");
	this_object()->set("max_kee",1500);
	this_object()->set("kee",1500);
	this_object()->set("force",3500);
	this_object()->kill_ob(this_player());
	return "杀呀 !!!!!\n";
}
void create()
{
        set_name("李灵",({"li lin","lin","li"}));
		set("gender","男性");
           set("title","雪苍派授技长老");
	set("combat_exp", 425864);

          set("attitude","heroism");
          set("age",62);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
           set("force",800);
           set_skill("parry",50);
           set("max_force",800);
	set("inquiry",([
	"黑仙罗汉" : (: ask :),
		"后山" : "后山是本派的禁地，是本派关犯人之地。\n",
		"后山密室" : "后山的密室中似乎关了一个重要的犯人在里面。\n",
		]));
            set("force_factor",20);
          set_skill("dodge",40);
            set_skill("force",50);
          set_skill("unarmed",60);
            set_skill("snowforce",50);
           map_skill("force","snowforce");
              set_skill("snow-martial",80);
             map_skill("unarmed","snow-martial");
	set_skill("black-steps",60);
	map_skill("dodge","black-steps");
	setup();
}

void die()
{
	object ob;
	object killer = this_object()->query_temp("last_damge_from");
	if( this_object()->query("title")!="黑仙罗汉" )
		::die();
	ob = new( "/open/snow/obj/corpse" );
	ob->move( environment( this_object() ) );
	if( killer->query("quests/to-kill") ) 
		ob->delete("true-corpse");
	destruct( this_object() );
}
