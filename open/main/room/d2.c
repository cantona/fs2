// Room: /open/main/room/d2.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
	set("long", "这儿是一望无际的撒哈拉沙漠，东边有一栋建筑依势而建，
从这儿看过去, 却看不到入口, 不知它的门是在哪一边?
");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"d9",
  "west" : __DIR__"d1",
]) );

  set("outdoors", "/open/main" );


  setup();
}
