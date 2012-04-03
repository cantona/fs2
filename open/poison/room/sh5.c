// Room: /open/poison/room/sh5.c
inherit ROOM;

void create ()
{
  set ("short", "药铺");
  set ("long", @LONG
甫一踏近此处，一股刺鼻的药味迎面向你扑来，在你眼前的是
一个紫檀木所制的大柜子横靠在对面墙上，柜子上有着许多的小抽
屉，每一个抽屉的前面均有一标签注明其所放置的药材种类，本店
除了卖各种药材供客人抓药外，亦卖有寻常的刀伤药和一些补品。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v2-7.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/mer4.c" : 1,
]));
  set("light_up", 1);

  setup();
}
