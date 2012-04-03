// Room: /open/main/room/M16.c

inherit ROOM;

void create ()
{
  set ("short", "少室山");
  set ("long", @LONG
	这里是天山山脉的少室峰，也是这块大陆上最大的
	佛教圣地＝少林寺之所在，从这儿石阶转向西北而
	上，在石阶的尽头有座山门。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "westup" : "/open/main/room/M15",
  "south" : "/open/main/room/M20",
  "eastdown" : "/open/main/room/m18",
  "eastup" : "/open/ping/questsfan/rm1",
]));

  setup();
}
