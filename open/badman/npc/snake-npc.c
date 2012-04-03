// snake.c by powell

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("蛇群", ({ "snake" }) );
	set("race", "野兽");
	set("greeting_msg", ({
		"\n\n突然，你发现眼前是一群正慢慢蠕动的蛇群!\n"+
                "这些蛇身上都有鲜艳的色彩，想必都含有剧毒。\n"+
                "你唯一的念头就是赶快离开这儿....\n\n\n\n\n"+
                HIR"哇! 你被这群蛇咬了一口。\n\n"NOR+
                HIB"蛇群开始四散而去.....\n"NOR }) );
        this_player()->apply_condition("snake_poison", 10);
        call_out("gone",1); 
	setup();
}
void gone()
{
	destruct(this_object());
}
