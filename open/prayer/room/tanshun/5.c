//u/r/rence/room/tanshun/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        这里是议事厅的正中央, 地上铺着一片深红色滚边的地毯
        . 地毯一直延伸到北边门主的座椅下面, 往南则一直通到
        玄关. 议事厅的四周则站着天璇门内的高职位门徒, 等着
        跟门主报告最新情况.

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",             //议事厅
        "south":__DIR__"8",             //议事厅
        "east":__DIR__"4",              //议事厅
        "west":__DIR__"6",              //议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
   setup();
}
