inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
这里是连接走道和西院走廊的回廊,从这里往北走就可以到达西院
中的牟尼堂,牟尼堂内常有着天龙寺的高手在清修, 所以如果自己没有
几分斤两还是不要只身冒险比较好
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa11",
  "north" : __DIR__"aa15",
]));

  setup();
  replace_program(ROOM);
}
