inherit ROOM;

void create ()
{
  set ("short", "山间小径");
  set ("long", @LONG
沿路森林荫荫郁郁 ,鸟语花香 ,更有许多的猴子回荡于山谷之间
 ,看的令人心旷神怡 ,真是一个好地方。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room34.c",
  "east" : __DIR__"room32",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/monkey1.c" : 1,
]));

  setup();
}
