// Room: /u/s/smore/room/suking/suking8+.c

inherit ROOM;

void create ()
{
  set ("short", "将军席");
  set ("long", @LONG
这里就是将军席，也就是平西大将军　左正平日办处理公事
的地方，将军虽然年记已经老大不小了，但是处理起公务倒还是
有条不紊，这不单只是将军的工作成果，他的左右手师爷　张冰
也是助益良多
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/suking11+",
  "south" : "/open/gsword/room/suking6.c",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/zuozhen" : 1,
  "/open/gsword/mob/zhang" : 1,
]));

  set("light_up", 1);

  setup();
}
