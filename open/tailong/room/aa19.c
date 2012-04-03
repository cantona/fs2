inherit ROOM;

void create ()
{
  set ("short", "西院走廊");
  set ("long", @LONG
从这往东望,远远的就可以看到天龙寺的主建筑物--大雄宝殿,天龙寺
的大雄宝殿比起其他寺庙要来得华丽多了,然而定睛一看,在大雄宝殿的
后面又延伸出一个小房间,不知道那间房间里面有着什么。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa20",
  "south" : __DIR__"aa16",
]));

  setup();
  replace_program(ROOM);
}
