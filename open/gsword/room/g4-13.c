// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "大花圃");
  set ("long", @LONG
这是一个大花圃 ,花圃中尽是深红和粉红的玫瑰 ,争芳竞艳 ,娇丽无俦 .
春风和栩 ,但觉满鼻芳香 ,几支蝴蝶穿梭其中 ,蝶舞花开 ,真是人间一大美
景 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/bee" : 2,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/gsword/room/g4-8.c",
  "south" : "/open/gsword/room/g4-16.c",
  "east" : "/open/gsword/room/g4-12.c",
]));
  set("clean_up",0);
   set("objects",([
  "/open/gsword/npc/swordman-1.c" : 1,
 "/open/gsword/npc/swordman-2.c" : 1,
 "/open/gsword/npc/swordman-3.c" : 1,
  ]));
  setup();
}
