inherit ROOM;

void create ()
{
  set ("short", "西院走廊");
  set ("long", @LONG
这里是西院的中心点,同时也是个十字路口,东边传来了一些声音,好像
有人在练武,而西边却是一片宁静,隐隐透着一股强而有力的气,不知道那里
是否有着什么武林高手,墙上贴了一张纸(paper),你可以看看上面写了什么。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "
  东 : 武僧练习场
  西 : 牟尼堂(闲杂人等,不得进入)
",
]));
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"aa17",
  "south" : __DIR__"aa15",
  "north" : __DIR__"aa19",
  "east" : __DIR__"aa60",
]));

  setup();
  replace_program(ROOM);
}
