inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "西北广场");
        set ("long", @LONG
云风镇中的广场西北角，这是云风镇中所有居民们休息聊天的场
所，偶而有些武林侠客也会利用这地方比武，还有三五个小孩不时的
在这广场中成群的嬉戏游玩，好不快乐。北方接着北镇道。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"      : __DIR__"town09",
        "south"      : __DIR__"town21",
        "east"       : __DIR__"town16",
        "southeast"  : __DIR__"town37",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/oman"	: 1,
	__DIR__ "npc/woman"	: 1,
	]));

        setup();
}
