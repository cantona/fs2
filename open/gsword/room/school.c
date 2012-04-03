// Room: /open/gsword/room/school.c

inherit ROOM;

void create ()
{
  set ("short", "私塾");
  set ("long", @LONG
这里是一家私塾,蜀中市民大都是在此完成他们的学业,你听到学童
朗朗的读书声,也让你想起你的求学生涯,不也那么天真,可爱.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su10",
]));

  set("objects",([
  "/open/gsword/npc/teacher" : 1,
   ]));
  set("light_up", 1);

  setup();
}
