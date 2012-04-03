// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "后花园");
  set ("long", @LONG
你正置身于一个极致的小花园中 ,红梅绿竹 ,青松翠柏 ,布置的极具
匠心 ,池塘中数对鸳鸯悠游其间 ,池旁有四只白鹤 .东边一座小桥跨越池
塘而过 .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g4-13.c",
  "east" : "/open/gsword/room/g4-14.c",
]));

  setup();
}
