// Room: /open/main/room/r9.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
走到这里,你已渐渐远离人迹,走在宽广的蜀州盆地上,却让
你有一种苍茫的感觉,道路在此通向北方或西方,而你,却也不知
何处可走,去求仙呢? 还是回去温暖的凌云村?
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r8",
  "north" : __DIR__"r6",
  "south" : __DIR__"m2",
]));

  setup();
}
