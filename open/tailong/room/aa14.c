inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
这里是连接走道和东院走廊的回廊,从这里往北走就可以到达东院中
新建的玄机房,玄机房中好像住着段家的一代高手－段誉,和他的妻子王
语嫣,他们夫妇俩不久前宣布退出江湖,隐居天龙寺,所以还是不要去打扰
他们吧
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa21",
  "west" : __DIR__"aa12",
]));

  setup();
  replace_program(ROOM);
}
