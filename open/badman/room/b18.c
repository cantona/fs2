// Room: /open/badman/room/b18
inherit ROOM;

void create ()
{
  set ("short", "恶人谷南街");
  set ("long", @LONG
热闹依旧的街道。这里虽说是与世隔绝，可是该有的都有。小
贩的么喝声此起彼落；而行人虽多脚步匆匆，不过人人摩肩擦踵的
拥挤模样，与外界相比，也是自成另一个天地。

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/chi_un.c" : 1,
  "/open/badman/npc/e.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"b19",
  "east" : __DIR__"b17",
]));

  setup();
}
