// This is a room made by roommaker.

inherit ROOM;

void create()
{
	set("short", "任务房");
	set("long", "这是一间什么也没有的空房间。\n");
	set("object", ([
	    "/u/w/wade/npc/quests_man"	:	1,
	]) );
	setup();
}
