// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "小桥");
  set ("long", @LONG
你正站在一做石桥上 ,两排低低的栏竿护着桥上之人不致落水 ,几只鸳
鸯悠游于桥下 ,触手可及 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/trainee-7.c" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g4-16.c",
  "east" : "/open/gsword/room/g4-7.c",
]));

  setup();
}
