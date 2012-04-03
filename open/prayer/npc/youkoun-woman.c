//红姑
#include <command.h>
 
inherit NPC;

string ask_book();

void create()
{
    set_name("妇女",({"woman"}));
    set("gender", "女性");
    set("age",35);
    set("attitude","friendly");
    set("long",@LONG

	她是霞山派的女弟子, 长年乔装躲在此地!!

LONG);
 
    set("combat_exp",522000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("dodge",130);
    set_skill("move",130);
    set_skill("parry",130);
    set_skill("whip",130);
    set_skill("force",130);
    set_skill("sunwhip",130);
    set_skill("fireforce",130);
    map_skill("force", "fireforce");
    map_skill("whip", "sunwhip");
    map_skill("parry", "sunwhip");
    set("inquiry",([
    "霞山派":"[36m霞山派的武学路数, 系师祖所创之[落日鞭法]![0m\n",
    "密笈":(: ask_book :),
    "燕十一":"他.....是我的同门师弟!!不过被周琇虔掳去了....\n",
    "周琇虔":"她就是现任圣火八天门之一--瑶光门的门主!!\n",
 ]));
    setup();
    carry_object("/open/prayer/obj/whip1")->wield();
    add_money("gold", 2);
}

void init()
{
	object who;
	::init();
	if(interactive(who =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
        call_out("greeting",2,who);
        add_action("do_nod","nod"); 
        }
}

int do_nod()
{
	object who=this_player();
	if( who->query_temp("red") == 1  )
	{
	return 0;            
	}
	else
	{
	who->set_temp("help_red", 1);
        write("[36m嗯!!那我等你的好消息!!万事拜托了[0m\n");
        return 1;
        }

}

void greeting(object who)
{
    if( who->query_temp("kill_red") >= 1 ) 
    {
      if( who->query_temp("red") >= 1 )
      {
      write("\n[36m你一定是燕师弟派来的人吧!!希望你能助我一臂之力, 铲除周琇虔
    这个恶毒的女人!!好吗(nod)??[0m\n");
      who->set_temp("red", 2);
      }
      else
      {
      write("\n[31m我知道你是周琇虔那个忘恩负义的女人派来的!!还我师弟来!![0m\n");
      kill_ob(who);
      }
    }
    return;
}


string ask_book()
{
    object who=this_player();
    object ob3=new("/open/prayer/obj/whipbook");
    if( who->query("quests/sunwhip",1) && !present("whipbook",who) )
    {
    ob3->move(this_player());
    return "[36m你自己好好地揣摩揣摩吧!!有朝一日可以用来防身杀敌[0m\n";
    }
    else
    {
    return "[36m本门武学密笈岂可轻易外泄藏匿之处!![0m\n";
    }
}   

void die()
{

    object who;
    who= this_object()->query_temp("last_damage_from");
    if( who && userp(who) ) 
    {
    who->delete_temp("kill_red");
    who->set_temp("kill_red", 2);
    write("[36m我死了之后, 希望你能替我转告师弟燕十一, 他会告诉你密笈的下落的!![0m\n");
    }
    ::die() ;
}


