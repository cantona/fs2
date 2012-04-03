// crazy_dog.c

inherit NPC;

void create()
{
	set_name("仙剑派 小剑童", ({ "washboy", "boy" }) );
	set("race", "人类");
	set("age", 13);
	set("long", "他手执扫帚，气定神闲专心的打扫着这无尽的石阶。\n");
	set("attitude", "peaceful");
	set("str", 17);
	set("cor", 15);
	set("combat_exp",40);
	set("chat_chance", 6);
	set("chat_msg",({
"小道童喃喃道∶真是倒楣，每次都被那两个醉鬼，赌鬼师叔奴役，一下叫我打扫石
阶一会而又叫我帮他们捶背按摩，改天我一定要跟师父告状。\n",
"小道童喃喃道∶不过听一些年长的师兄们说，那两个醉鬼，赌鬼师叔当年可也曾经
叱咋江湖，好像还曾经追随祖师爷斩魔除妖，不过，看他们现在这个样子，我看八成是
假的吧！\n"
	}));
	set_temp("apply/attack", 5);
	set_temp("apply/damage", 2);
	set_temp("apply/armor", 2);

	setup();
       add_money("coin",50);
}
