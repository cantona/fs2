// Room: /u/s/smore/room/suking/suking13.c

inherit ROOM;

void create ()
{
  set ("short", "监狱");
  set ("long", @LONG
这是蜀中城关犯罪的地方，里面有形形色色的犯人，你的西
方，便是铁笼.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/suking4",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/jail" : 1,
]));

  setup();
}
