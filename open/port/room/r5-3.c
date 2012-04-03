// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
  set ("short", "海岸");
  set ("long", @LONG
这里是枫林港的海岸 . 为免海水倒灌 , 或是有人遭到意外
 , 居名们在海岸旁加修了一道护堤 . 一条石子铺成的小路向东
西方延伸 . 这一带是枫林的旧区 , 住在这里的居民大多以捕鱼
为生 , 生活均十分困苦 . 北边为一栋平常的渔户 .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/island/npc/son.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"r5-5",
  "west" : __DIR__"r5-4",
  "east" : __DIR__"r5-2",
]));
  set("light_up", 1);
  set("outdoors", "/open/port");

  setup();
}

