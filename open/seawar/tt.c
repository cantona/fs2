inherit NPC;
#include <ansi.h>

void create()
{
        set_name("海贼",({"sea thief","thief"}));
        set("age",28);
        set("gender","男性");
        set("attitude","aggressive");
        set("long","
倭寇中，用来处理杂事的人，并非武功不强，而是在相比较下
，属于最低层次的一群，是以只配分派到这种工作。\n");
	set("max_kee",1);
        setup();
}
void die()
{
object me,ob,obj,npc;
int i,j;

        ob = this_object();
        me = ob->query_temp("last_damage_from");

        message_vision(HIW"
\n$N警觉生命受到威胁，急忙拿出腰间的玄冥符，将之贴于掌中，$n眼明
手快，见即驭气取物，将玄冥符夺走。\n\n"NOR,ob,me);
	new(__DIR__"tally")->move(me);

	::die();
}
