// Room: /open/poison/room/road8
inherit ROOM;

void create ()
{
  set ("short", "山间小径");
  set ("long", @LONG
你走在一条蜿蜒的山路上，地上的碎石子刺痛了你的双
脚，向前一眼望去，有一大片蓊郁的树林，树林里传来各种
动物的鸣叫声，像是在诉说牠们的逍遥快乐，让你忘记双脚
的疼痛，轻松自在的行走。
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/road7",
  "northdown" : "/open/poison/room/road9",
]));

  setup();
}
