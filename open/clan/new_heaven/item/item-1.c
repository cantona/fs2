// /open/clan/new_heaven/item/item-1.c
inherit ITEM;

void create()
{
 	set_name("云椅", ({ "cloud chair", "chair" }) );
	set_weight(1);
if( clonep() )
                set_default_object(__FILE__);
        else {
	set("long","这是一张用云做的椅子
");
	set("unit","张");
	set("value",1);
	set("clan_name","新天堂");
}
}
