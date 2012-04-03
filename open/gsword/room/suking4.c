// Room: /u/s/smore/room/suking/suking4.c

inherit ROOM;

void create ()
{
  set ("short", "府衙大厅");
  set ("long", @LONG
走进这大厅，周围肃穆的气氛让你不敢四处乱看，不过你依
然可以感觉得到四周的装设气派堂皇，又不流于俗套可见大将军
左正也不是一个只会打战的草包.
    向西去是本城拘禁犯罪的监狱，向北可以到左侍卫房.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/gsword/room/suking13",
  "north" : "/open/gsword/room/suking5",
  "east" : "/open/gsword/room/suking3",
]));

  set("light_up", 1);

  setup();
}
