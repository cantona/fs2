inherit ROOM;

void create ()
{
  set ("short", "北院走廊");
  set ("long", @LONG
这里是天龙寺的北院,从这里往外望去就是陡峭的山壁了,而往南侧
看去便是雨花院,这也是天龙寺中的一个有名的建筑物。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa27",
  "west" : __DIR__"aa29",
]));
}
