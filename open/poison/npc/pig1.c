
# include <ansi.h>
inherit NPC; 

void create()
{
	set_name("猪公",({"pig"}));
	set("long","一只体型庞大的猪公，懒洋洋的躺在地上睡觉。");
	set("age",3);
	set("str",7);
	set("con",8);
	set("race","野兽");
	set("max_kee",70);
	set("max_gin",70);
	set("max_sen",70);
	set("limbs",({
	"头部","身体","尾部","腹部"}) );
	set("verbs",({"bite"}) );
	set("chat_chance", 4);
	set("chat_msg",({
}) );
	set("combat_exp",100);
	setup();
}
void greeting(object me)
{
	if (!me || environment(me) != environment()) return;
{
	command("fool "+me->query("id"));
}
}
