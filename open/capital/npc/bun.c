//bun.c

#include <../capital.h>

inherit NPC;

void create()
{
	set_name("卜士仁",({"bun"}));
	set("gender","男性");
	set("title","商行总管");
	set("age",43);
	set("combat_exp",250);
	setup();
}
