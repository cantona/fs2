// Room: /u/c/cyw/room/r1
inherit ROOM;

void create ()
{
  set ("short", "忍术练习场");
  set ("long", @LONG
这是女影门平时练忍术的地方,四周不断的有穿着黑衣装的忍者
在练习着密术,从他们婀娜多姿的体态可以看出黑衣装内应该是女人
,在一棵百年神树下有个漂亮的女子在传授这些黑衣人武功你往她的
方向走去一阵阵让人心神为之一荡的幽香传入你的鼻中,原来她正是
女影门的最高首领,真是人如其名是个香甜可爱的美女。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/japan/npc/master.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/u/c/cyw/room");
  set("exits", ([ /* sizeof() == 1 */
  "west" : "/u/c/cyw/workroom.c",
]));

  setup();
}
