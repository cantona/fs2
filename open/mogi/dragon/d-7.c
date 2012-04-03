//by Casey
inherit ROOM;

void create ()
{
  set ("short", "谷中盆地");
  set ("long", @LONG
沉猛的吼声远远的传了过来，让人觉得异常恐怖。地上的脚印的让你
看的胆寒 ,杂草中不知藏着什么生物 ,人就像处在暗处一样，随时有危
险的威胁，不知随时可能会命丧这里 ,一座峭壁在你的旁边 ,上面传来
阵阵的雷鸣声。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dragon-mini" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 4 */
 "south" : __DIR__"d-13",
 "east" : __DIR__"d-8",
"north" : __DIR__"d-4",

 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
