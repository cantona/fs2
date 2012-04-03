// Room: /open/ping/room/road6.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
这里是平南城的西区,每次苗人的进犯,这儿都是首当其冲,
然而这里的百性似忽已习惯刀枪下过日子, 依然悠闲的作生意
,你的南方便是军营,驻有守城的大军.
北边似乎是一处森林,看起来有点阴森!
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"road10",
  "north" : __DIR__"m2",
  "west" : __DIR__"wdoor.c",
  "east" : __DIR__"road5",
]));
  set("outdoors", "/open/ping");

  setup();
}
