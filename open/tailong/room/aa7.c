inherit ROOM;

void create ()
{
  set ("short", "中庭 ");
  set ("long", @LONG
这里是天龙寺前院连接左边走道的中庭,从这里向左侧走廊向前直走
就是天龙寺的正殿,大雄宝殿,想参拜大佛或有事想找方丈大师从这边走
就对了,往西似乎是另一条通往外院的走道
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"aa31",
  "west" : __DIR__"aa9.c",
  "east" : __DIR__"aa6.c",
]));
}
