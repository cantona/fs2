inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "密林");
        set ("long", @LONG
从小森林走来的景象一比，两旁的小林木不知何时已经换成高耸
入云的百年古木了，树叶漫天遮荫，树林里的光线也愈来愈微弱了，
凶猛的野兽叫声就在不远处传来，诡异的气氛也愈来愈浓厚了。

你可以在路旁看到一张告示牌(sign)。

LONG);  

	set("item_desc",([
	"sign" : "\n\t前\t凡\n\t面\t风\n\t的\t云\n\t森\t镇\n\t林\t民\n\t极\t皆\n\t度\t不\n\t的\t得\n\t危\t进\n\t险\t入\n\t，\t!!\n"
	]));

        set("exits", ([ /* sizeof() == 4 */
        "east"	: __DIR__"town45",
        "west"	: __DIR__"town43",
	]));

        setup();
}