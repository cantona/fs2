// Room: /open/killer/room/r11.c
inherit ROOM;

void create ()
{
  set ("short", "训练室");
  set ("long", @LONG
这里是要当一个好的杀手的起点,有许多练习生会陪你们的。
在这个地方新任杀手们可以，好好的练习自己的身手。
有一对联：
      多多用鸡腿，激发出潜力。
      太早用暗器，基础不稳固。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"r13.c",
  "west" : __DIR__"r0.c",
    "up" : __DIR__"r11u.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/train_c.c" : 3,
]));
  set("light_up", 10);

  setup();
}