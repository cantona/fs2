// Room: /u/s/smore/room/suking/suking1.c

inherit ROOM;

void create ()
{
  set ("short", "府衙入口");
  set ("long", @LONG
一踏入这里，很少有人能不被这气势无比雄伟的入口给震
摄住，高达九尺的大门，雕满着一头头仿佛要破空而去的龙纹
，龙的眼睛更冷冷的凝视着你，使你心中不由得升起一股又是
害怕又是尊敬的感觉.
LONG);

  set("light_up", 1);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/suking3",
  "out" : "/open/gsword/room/suking",
]));

  setup();
}
