inherit ROOM;

void create ()
{
  set ("short", "西院走廊");
  set ("long", @LONG
你沿着走廊往前走 ,沿路看着天龙寺中的各式华丽建筑,突然在眼前延
伸出了一条叉路,往东北方一望,那边好像有个美丽的花园,你可以试着往那
边走过去看看,说不定会有什么奇遇哦。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa13",
  "north" : __DIR__"aa16",
]));

  setup();
  replace_program(ROOM);
}
