inherit ROOM;


void create()

{
  
	set ("short", "杀手练习室");
  
	set ("long", @LONG

		这是初级杀手训练的地方

		想要成为好的杀手必须经过不断的锻炼

		而这里便是培育优良杀手的房间之一



看来这里是当年的另一间训练室了，根据叶秀杀所说，
当年杀手就只有这些房间而已，看来真是够小的帮派呀！！
（杀手的创帮原因请看help killer.create）
LONG);

  
	set("light_up", 100);
	set("no_magic", 10);
  
	set("exits", ([ /* sizeof() == 1 */

        "north":__DIR__"r5",
	
]));
  
/*
set("objects",([
	
	"open/killer/npc/trainee1" :3, 
		]));
 
*/
	setup();

}
