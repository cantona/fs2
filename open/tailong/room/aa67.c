inherit ROOM;

void create ()
{
  set ("short", "练武场");
  set ("long", @LONG
天龙寺虽不比少林寺招收众多的俗家弟子,但好歹天龙寺也
是大理的武学重镇,段家以前若发生内乱也是需要仰赖天龙寺的
武力,因此天龙寺都会在此训练寺内的僧徒,以备不时之需。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"aa66",
  "south" : __DIR__"aa64",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tailong/npc/monkf2.c":2,
]));

  setup();
  replace_program(ROOM);
}
