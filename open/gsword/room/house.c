#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "简陋的竹屋");
	set("long", "这屋子内除了几张桌椅，空荡荡一无所有，不过酒倒是堆满了墙的一角，地上还留有
一些破碎的酒坛碎片，和一大滩的酒水，可见得这屋子的主人嗜酒成性，以到了如痴
如狂的地步了。
");

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/drunkard.c" : 1,
]) );

  set("outdoors", "n" );

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"rroad3",
]) );


  setup();
}
