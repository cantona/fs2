// Room: /open/ping/room/road1.c
inherit ROOM;

void create ()
{
	set("short", "石板大道");
	set("long", "走进了平南城,仍是一片歌舞平升,半点也见不到战争的气息
,路上的行人嘻嘻嚷嚷,偶尔有几位军人通过, 才有一点张紧张的
味道,西方就是平南闹区,也\\许你可以过去看看.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/poison/room/pingroom.c",
//"south" : __DIR__"war_room",
  "west" : __DIR__"road2.c",
  "east" : __DIR__"edoor",
]) );

  set("outdoors", "/open/ping" );


  setup();
}
