inherit ROOM;

void create ()
{
  set ("short", "猪舍");
  set ("long", @LONG
一进门就闻到一股腥味 ,天哪 .....怎么会跑到猪舍来ㄋ ?眼看
着他们一步步的逼近 ,喔喔 !真是恶心死了。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/open/poison/npc/pig3.c" : 2,
  "/open/poison/npc/pig2.c" : 1,
  "/open/poison/npc/pig1.c" : 1,
]));

  setup();
}
