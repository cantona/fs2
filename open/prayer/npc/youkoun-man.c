//燕十一
#include <command.h>
 
inherit NPC;

string ask_red()
{
    object who=this_player();
    if( who->query_temp("youkoun") >= 4 )
    {
    who->set_temp("red",1);
    return("[36m她现在在那里我也不知道, 不过我在你身上已经做了记号, 只要她一见到就会发现了!![0m\n");
    }
    else
    {
    return("[36m相信你已经从周琇虔那里听到不少东西了吧!![0m\n");
    }
}

string ask_whip()
{
    object who=this_player();
    if( who->query_temp("kill_youkoun") && who->query_temp("help_red") && !who->query("quests/sunwhip"))
    {
    who->set("quests/sunwhip",1);
    who->set_skill("sunwhip",5);
    who->add("max_force",50);
    return("[36m你帮了我就等于是帮了霞山派了!!这落日鞭法就传了你吧!![0m\n");
    }
    else
    {
    return("[36m落日鞭法是不能够随便就传授他人的!!您还是不要打它的主意吧!![0m\n");
    }
}

void create()
{
    set_name("燕十一",({"man-eleven","man","eleven"}));
    set("title", "霞山");
    set("gender", "男性");
    set("age",32);
    set("attitude","friendly");
    set("long",@LONG

	霞山派弟子--燕十一, 因故被囚于此, 全身伤痕累累
	不过眼神中仍是透出一股精壮之光.........

LONG);
 
    set("combat_exp",432000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 25);
    set("force",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("dodge",150);
    set_skill("move",150);
    set_skill("parry",150);
    set_skill("whip",120);
    set_skill("sunwhip",120);
    set_skill("force",120);
    set_skill("fireforce",120);
    map_skill("force", "fireforce");
    map_skill("whip", "sunwhip");
    map_skill("parry", "sunwhip");
    set("inquiry",([
    "霞山派":"[36m霞山派的武学路数, 系师祖所创之[落日鞭法]![0m\n",
    "秘笈":"[36m秘笈藏在红姑那里!!不过我被困于此没人知道!![0m\n",
    "落日鞭法":(: ask_whip :),
    "红姑":(: ask_red :),
 ]));
    setup();
    carry_object("/open/prayer/obj/ligature")->wield();
}

void greeting(object who)
{
    if( who->query_temp("kill_red") >= 2 ) 
    {
    write("    [36m你竟然杀了我师姐, 还想要我派鞭法的密笈!!哼!!霞山派从此与
    你永无宁日!!我现在就先跟你拼了!!\n");
    kill_ob(who);
    return;
    }
}

void die()
{

    object who;
    who= this_object()->query_temp("last_damage_from");
    if( who && userp(who) ) 
    {
    who->set("kill_eleven", 1);
    write("\n[36m谢谢你杀了我, 我在下面可以快乐地跟师姐在一起了!![0m\n");
    }
    ::die() ;
}
