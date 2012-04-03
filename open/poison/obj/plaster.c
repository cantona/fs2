
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("金创药",({"plaster"}) );
	set("long","
最寻常的刀伤药，你可以将它敷在伤口上(dress)。\n");
	set("value",150);
	set("base_weight",50);
	set("base_unit","盒");
	set("unit","盒");
	set_amount(1);
	setup();
}
void init()
{
	add_action("do_dress","dress");
}
int do_dress(string str)
{
	object me=this_player();
	int num=15+random(5);
	if(!str ||str!="plaster") 
	return notify_fail("你想敷甚么呀!\n");
	message_vision("$N将金创药敷在伤口上，伤势渐渐好转。\n",me);
	this_player()->receive_curing("kee",num);
	add_amount(-1);

	return 1;
}
