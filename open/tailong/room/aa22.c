inherit ROOM;

void create ()
{
  set ("short", "东院走廊");
  set ("long", @LONG
这里是东院的中心点,同时也是个十字路口,西边传来了一些声音,好像
有人在练武,而东边却是一片宁静,不过好像有四个人影在那边,你是否该过
去看看呢,墙上贴了一张纸(paper),你可以看看上面写了什么。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa64",
  "south" : __DIR__"aa21",
  "north" : __DIR__"aa26",
  "east" : __DIR__"aa68",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "
  东:玄机房(闲杂人等不得进入)
  西:武僧练习场
",
]));

  setup();
  replace_program(ROOM);
}
