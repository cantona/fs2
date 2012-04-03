// Room: /open/poison/room/room14
inherit ROOM;

void create ()
{
  set ("short", "林间小屋");
  set ("long", @LONG
这是一间小小的木屋，看起来破破烂烂的，根本不是一
个安适的住处，仔细一看居然有人在此居住，让你感到十分
惊讶，如此简陋的小屋，究竟是何人能安命于此呢？
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road4",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/woman" : 1,
]));

  setup();
}
