// Room: /d/oldpine/epath2.c

inherit ROOM;

void create()
{
	set("short", "古木夹道");
	set("long", @LONG
 你走在蜀山小径上,四周都是百年的古榕,参差交杂的枝干遮
敝了天空,却挡不住凉凉的风透入,你在树阴下行走,踩着枯黄的落
叶,心想: 好个蜀州的绿色隧道...
LONG
	);
	set("exits", ([
     "east" : __DIR__"froad3.c",
     "west" : __DIR__"froad1.c",
]));
        set("outdoors","/open/gsword");
	setup();
}
