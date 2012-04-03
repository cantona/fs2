// Room: /u/m/moner/room/room/class/r1.c 
inherit ROOM;
 
void create ()
{
set("short","魔龙塔");
  set ("long", @LONG

这里是魔龙塔最后的一层，一踏入这里，四周的空气好像沉重了起来，
耳中听不到一丝的声音，令你以为自己的双耳已失去作用了，你努力的
睁眼四顾，地上覆着一层薄薄的灰尘，显示这里少有人来。

LONG);

  set("exits", ([ /* sizeof() == 6 */
  "春" : __DIR__"r7.c",
"夏":__DIR__"r8.c",
"冬":__DIR__"r9.c",
  "秋" : __DIR__"r8.c",
]));
set("no_transmit",1);
set("objects",([
"/daemon/class/blademan/npc/corpse7.c":4,
]));
  setup();
  replace_program(ROOM);
}
