// cloth.c

#include </open/open.h>
#include <armor.h>

inherit EQUIP;

void setup()
{
	if( clonep(this_object()) ) return;
	if( query("armor_prop/armor") > PROP_CLOTH )
	  set("armor_prop/armor", PROP_CLOTH);
	set("armor_type", TYPE_CLOTH);
	if( !query("armor_apply/dodge")
	&&	weight() > 3000 )
		set("armor_prop/dodge", - weight() / 3000 );
}

void init()
{
	add_action("do_tear", "tear");
}

int do_tear(string str)
{
	object ob;

	if( !id(str) ) return 0;

	if( (string)query("material") != "cloth" )
		return notify_fail("你只能撕布料的衣服。\n");

	if( (int)query("teared_count") >= 4 )
		return notify_fail( name() + "的袖口，下襬已经没有多余的布可撕了。\n");

	message_vision("$N从" + name() + "撕下一条布条。\n", this_player() );
	add("teared_count", 1);
         ob = new(COMMON_OBJ"bandage");
        ob->set_name("从" + name() + "撕下的布条", ({ "bandage" }) );
	ob->set("long","从" + name() + "撕下的布条, 可作为包扎用的绷带。\n");
        ob->set("value",0);
	if( !ob->move(this_player()) )
		ob->move(environment(this_player()));
	return 1;
}
