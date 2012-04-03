// Room: /open/main/room/d8.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
	set("long", "这里是撒哈拉沙漠的西边, 往西看过去是一片绿油油的草原, 
偶而有也兽出没, 炙热的天气, 来到这儿仿佛看到老家似的温馨。
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"s9",
  "west" : __DIR__"s6",
  "north" : __DIR__"d1",
  "east" : __DIR__"d9",
]) );

  set("outdoors", "/open/main" );


  setup();
}
