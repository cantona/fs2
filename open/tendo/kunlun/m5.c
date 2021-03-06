// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "天池");
	set("long", @LONG
愈靠近湖泊(lake)不知怎地就愈觉得温暖，在湖的
周围完全看不到积雪，草木也恢复青翠的绿色，
而湖水也不结冰。用手轻轻一触竟然还是温的！
令人想跳下去游泳在这冰天雪地中竟还有如此的
湖泊，令人猜想不透。

LONG
	);
	  set("item_desc", ([ /* sizeof() == 1 */
  "lake" : "一个美丽的山顶之湖，湖水还是温的令人忍不住想跳下去游泳。",
]));
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m4",
	"south" : __DIR__"m6",
]));
	set("outdoors", "1");

	setup();
}

void init()
{
        add_action("do_jump", "jump");
}
int do_jump(string arg)
{
        object who;
        who = this_player();

        if( !arg || arg!="lake" )
        return notify_fail("跳？跳舞啊??\n");
        tell_object(who,"你闭住呼吸，迅速的跳入湖中，宛若一条游龙。\n");
        who->move("/open/dancer/room/yuaroom");
        tell_room(this_object(),"你看到"+who->query("name")+"以难看的姿势跳入湖中，并以狗爬式缓缓游去。\n");
        return 1;
}
