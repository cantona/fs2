// Room: /open/death/room/h1-7
inherit ROOM;

void create ()
{
  set ("short", "第一殿--通道");
  set ("long", @LONG
你走进这里，南方不远处所传来的阵阵惨叫声不断的震撼着你，不
用怀疑，地狱近了....只见身旁的鬼卒都不怀好意的对你笑着，脸上的
表情仿佛是说:‘嘿嘿 ! 你死定了！’
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"h1-2",
  "east" : __DIR__"h1-6",
]));
  set("light_up", 1);

  setup();
}
