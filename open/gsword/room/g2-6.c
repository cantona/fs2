// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "广场");
  set ("long", @LONG
这是仙剑派众弟子们平时练剑的场所 ,你看到数百位仙剑弟子们正挥汗练剑 ,
整齐一致的呼喝声 ,响遍全山 ,近年来仙剑何以如此兴盛 ,光看这气势 ,你就
明白八九成了 .西边有条长廊 ,连接春秋阁 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/g2-7.c",
  "west" : "/open/gsword/room/g2-13.c",
  "south" : "/open/gsword/room/g2-18.c",
  "east" : "/open/gsword/room/g2-5.c",
]));

  setup();
}
