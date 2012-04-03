// Room: /u/s/sueplan/test/test
inherit ROOM;

void create ()
{
  set ("short", "八卦阵角");
  set ("long", @LONG

你步入此地，看到眼前有一人用恶狠狠的眼神瞪着你
此地是八卦阵的阵角，看来他挡在你面前，打倒他不可了。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/guard7.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"q9.c",
  "east" : __DIR__"q8.c",
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
if(dir=="enter"&&present("guard",environment(me)))
  {
return notify_fail("你发觉有人挡在你面, 不让你过!!!\n");
   }
  return 1;
}
