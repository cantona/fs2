// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "广场");
  set ("long", @LONG
这是仙剑派众弟子们平时练剑的场所 ,你看到数百位仙剑弟子们正挥汗练剑 ,
整齐一致的呼喝声 ,响遍全山 ,近年来仙剑何以如此兴盛 ,光看这气势 ,你就
明白八九成了 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
	"/open/gsword/npc/trainee3":1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-12.c",
  "north" : "/open/gsword/room/g2-6.c",
]));

  setup();
}
