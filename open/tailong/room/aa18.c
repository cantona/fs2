inherit ROOM;

void create ()
{
  set ("short", "牟尼院");
  set ("long", @LONG
走进牟尼院内,顿时感到压力倍增,面前是天龙寺中的三大高僧"观、
相、参",三个人若列名在武林中也都是数一数二的高手,如今三人都聚在
此,天龙寺果然是一个卧虎藏龙之地。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"aa17",
]));
  set("objects", ([ /* sizeof() == 3 */
"/open/tailong/npc/chian.c":1,
"/open/tailong/npc/guan.c":1,
"/open/tailong/npc/shian.c":1,
]));

  setup();
  replace_program(ROOM);
}
