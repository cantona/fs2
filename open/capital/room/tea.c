// Room: /open/capital/r31.c

#include </open/capital/capital.h>
	
inherit ROOM;
									
void create ()
{
  set ("short", "紫藤芦");
  set ("long", @LONG
茶馆。老板修养很好，取了个很雅的名子，四周也都种了一些藤蔓
，延着墙壁长着，一片绿意，煞是好看。店里茶香四溢，感觉暖烘烘的
。茶馆就是茶馆，小道消息最多的地方，武林大事，芝麻小事，这儿都
有，由其这儿的小二，人称天耳通，大小事都知晓，要问甚么事，找他
就对了。

LONG);

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/waiter1" : 1,
]));

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/r31",
]));

  set("gopath", "west");

  setup();
}
