
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name("九天玄女羽裳",({"goddness cloth","cloth"}) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
else	{
	set("meterial","silk");
	set("unit","件");
	set("value", 1000);
	set("armor_type","cloth");
	set("armor_prop/armor",25);
	set("armor_prop/dodge", 5);
	set("armor_prop/force", 3);
	set("long","
一件不知用甚么质料制成的衣裳，上面隐隐约约散发着迷蒙的色彩，穿上它
似乎便有神力保护着。\n");
	}
	setup();
}
