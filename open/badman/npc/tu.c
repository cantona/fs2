// tu.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("屠娇娇", ({ "tu jau jau", "tu", "jau" }) );
	set("nickname", "不男不女");
	set("class", "bandit");
	set("attitude", "peaceful");
	set("gender", "女性");
	set("age", 39);
	set("long", "你正在怀疑你眼前的这个人究竟是个美女还是美男子，但是你大概永远也\n搞不清，因为屠娇娇的易容术堪称天下第一，少有人能看到她的真面目。\n");

	set("str", 25);
	set("cor", 26);
	set("int", 35);
	set("spi", 25);
	set("cps", 30);
	set("con", 22);
	set("per", 35);
	set("combat_exp", 600000);

	setup();
	add_money("gold", 10);
}
