inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"琰 扬 湖"NOR);
	set("long",@LONG
绕着琰扬湖边走着，让你似乎遗忘了你正身处于危险的邪灵界之
事，一样有着动人的鸟啼声、美艳的花、芳香的水气，以及秀丽的景
色，你不禁怀疑，这里是曾经造成整个大地恐慌的五邪灵使之一的水
邪将--水柔缠　所居住的地方？
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":2,
__DIR__"npc/mob02":1,
]));
	set("exits",([
"south":__DIR__"a-01",
"north":__DIR__"a-03",
]));
	setup();
}

 