// Room: /u/e/eiei/work/troom3a.c
inherit ROOM;

void create ()
{
  set ("short", "林间小路");
  set ("long", @LONG
    这里的树木长的特别的茂盛，以至于要分清楚小径
    通往的方现更加不容易，不过也因为地理环境的因素，
    听说这个树林里生长着某些对于医疗有特殊疗效的药草
    。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"troom_3a.c",
]));
  set("outdoors", "/u/e/eiei");

  setup();
}
