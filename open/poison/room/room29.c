inherit ROOM;

void create ()
{
  set ("short", "农家正厅");
  set ("long", @LONG
这里是农家的正厅 ,厅中坐着一位穿着简朴的男人 ,看来他就是
这里的主人吧 ..... ?不过看他那犀利的眼神 ,好像不是一般的
农人喔 ,真奇怪 ,这里怎么会有这种人ㄋ ?

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room31",
  "north" : __DIR__"room30",
  "west" : __DIR__"room28",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/long.c" : 1,
]));

  setup();
}
