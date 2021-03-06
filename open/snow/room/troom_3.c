// Room: /u/e/eiei/work/troom_3.c
inherit ROOM;

void create ()
{
  set ("short", "叉路");
  set ("long", @LONG
    走过满是奇花异草的小路之后，到了这一处叉路。
    向东北方望去，很明显的可以发现其中有一棵树长的比
    其他的树木还要高大。而再往上爬的话自然可以到达更
    高的山顶，不过此处之后的山路崎岖难行，一般人平常
    最多只是到这里赏赏风景而已。
    路旁贴着一张布告(sign)
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "    警告：山中常有异兽出没，无事者请不要逗留。
",
]));

  set("outdoors", "/u/e/eiei/work");

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"troom_2.c",
  "eastup" : __DIR__"troom_3a.c",
]));

  setup();
}
