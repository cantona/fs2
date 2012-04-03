// Room: /open/poison/room/room6
inherit ROOM;

void create ()
{
  set ("short", "前殿");
  set ("long", @LONG
这里是冥蛊魔教的前殿，内部雕梁画栋，一片黄彩，殿
内两旁摆了两排雕刻精巧的檀木椅，中间则摆了三张华丽的
太师椅，这里是教内用来接待贵宾和议论教内总总事务的地
方。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road15",
  "north" : __DIR__"road16",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/visitor.c" : 1,
  "/open/poison/npc/greeter" : 1,
]));
  set("light_up",1);

  setup();
}
