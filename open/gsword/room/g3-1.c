// Room: /open/gsword/room/g3-1.c
inherit ROOM;

void create ()
{
  set ("short", "仆人卧房");
  set ("long", @LONG
一间宽广的大屋 ,一张好大的床从东自西 ,如果躺满人的话 ,少说
也能睡个三四十个 ,房间中除了一张床外 ,别无它物 ,所有在仙剑派内
的长工 ,菜农 ,小童等 ,皆居于此 .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/g3-2",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/worker":1,
  "/open/gsword/npc/worker-1":1,
]));

  set("light_up", 1);

  setup();
}
