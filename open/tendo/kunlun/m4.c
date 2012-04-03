// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "天池");
	set("long", @LONG
愈靠近湖泊不知怎地就愈觉得温暖，在湖的
周围完全看不到积雪，草木也恢复青翠的绿色，
而湖水也不结冰。用手轻轻一触竟然还是温的！
在这冰天雪地中竟还有如此的湖泊，令人猜想不
透。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"west" : __DIR__"m5",
	"south" : __DIR__"m3",
]));
	set("outdoors", "1");

	setup();
}
