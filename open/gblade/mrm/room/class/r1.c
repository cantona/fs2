// Room: /u/m/moner/room/room/class/r1.c 
inherit ROOM;
 
void create ()
{
   set ("short", "魔龙塔");
  set ("long", @LONG

这里是魔龙塔最后的一层，一踏入这里，四周的空气好像沉重了起来，
耳中听不到一丝的声音，令你以为自己的双耳已失去作用了，你努力的
睁眼四顾，地上覆着一层薄薄的灰尘，显示这里少有人来。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r2.c",
"down":"/open/gblade/mrm/room/room/r20.c",
]));
set("no_transmit",1);
  setup();
  replace_program(ROOM);
}
