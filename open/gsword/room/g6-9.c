// Room: /open/gsword/room/g6-8.c
inherit ROOM;

void create ()
{
  set ("short", "后山小径");
  set ("long", @LONG
一条顺着峭壁边缘延伸的小径，宽仅数尺，南边即为万丈深谷，道路
往西方延伸，通往未知的区域！
 
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "牌子上写着 :
擅闯仙剑禁地者 ~~~ 死 !
",
]));
  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g6-10",
  "east" : __DIR__"g6-8.c",
]));

  setup();
}
