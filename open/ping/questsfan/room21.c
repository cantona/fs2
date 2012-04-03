// Room: /u/d/dhk/questsfan/room21
inherit ROOM;

void create ()
{
  set ("short", "白晶层");
  set ("long", @LONG
这一层位于谷缘的结晶都呈现乳白色的光芒，所以顾
名思义这一层的结晶叫＂白晶石 ″，因其颜色是乳白色的
不时还会冒出乳白色的液体，传闻若喝下这些液体一口就
会使你皮肤雪白、还老还童。你一路观看过延途一层层各
式各色的晶石，另你感到致身于仙境中的感觉、眼花撩乱
，忽而好极忽而郁闷…变的多愁善感。

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"room22",
  "northup" : __DIR__"room20",
]));

  setup();
}
