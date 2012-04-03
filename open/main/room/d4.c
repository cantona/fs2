// Room: /open/main/room/d4.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
	set("long", "这儿是一望无际的撒哈拉沙漠，四周只现出闪闪发光的海市蜃楼
也不知哪里是出口, 不时还出现沙漠特有的风暴, 恐怕难逃生天了吧?!
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"d3",
  "south" : __DIR__"d11",
  "east" : __DIR__"d5",
]) );

  set("outdoors", "/open/main" );


  setup();
}
