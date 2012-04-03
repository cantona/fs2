// Room: /open/main/room/d1.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
	set("long", "这里是撒哈拉沙漠的西边, 往西看过去是一片绿油油的草原, 
偶而有也兽出没, 炙热的天气, 来到这儿仿佛看到老家似的温馨。
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"s3",
  "south" : __DIR__"d8",
  "east" : __DIR__"d2",
]) );

  set("outdoors", "/open/main" );


  setup();
}
