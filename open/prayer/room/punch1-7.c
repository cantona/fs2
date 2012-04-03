//open/prayer/room/punch1-7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "总坛大听");
  set ("long", @LONG

    再往前走便是圣火教副教主，处理教徒门一切事务及指导弟子们武功
的大厅了，你看到不少的教徒络绎不绝的走进走出，想必副教主是一位能
力极佳的人，才能处理教务并教导武功． 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/vice-manager" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/prayer/room/punch1-3",		//`副帮主
	"south" : "/open/prayer/room/punch1-9",		//`大厅
]));

  setup();
}
 
