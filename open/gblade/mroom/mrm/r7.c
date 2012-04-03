// Room: /u/m/moner/water/r7.c
inherit ROOM;

void create ()
{
  set ("short", "广场");
  set ("long", @LONG

    这里是魔刀门的广场，是魔刀门内召集门徒，比试武艺，或其它
非常时刻的重要地方，广场往南、北方向延伸，看起来可以容纳数千
人。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 3 */
"north":__DIR__"r7-1.c",
"west":"/open/gblade/room/mrm1/r2.c",
"south":__DIR__"r1-1.c",
  "east" : __DIR__"r6.c",
]));
        set("objects",([
"/open/gblade/npc/man1.c":3,
]));
  setup();
}
