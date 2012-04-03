//by Casey
inherit ROOM;

void create ()
{
  set ("short", "谷中盆地");
  set ("long", @LONG
沉猛的吼声远远传了过来，让人觉得异常恐怖。地上的脚印的让你
看的胆寒，杂草中不知藏着什么生物，人就像处在暗处一样，随时有危
险的威胁，不知何时便会命丧于此，东边的钟乳洞中，有个幽静的地底
湖泊，然而湛蓝色湖水发出的迫人寒气，却使你不敢潜入一探究竟。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dragon-mini" : 3,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 43*/
 "south" : __DIR__"d-15",
 "west" : __DIR__"d-8",
"north" : __DIR__"d-5",

 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
