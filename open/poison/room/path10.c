// Room: /open/poison/room/path10
inherit ROOM;

void create ()
{
  set ("short", "蝙蝠洞");
  set ("long", @LONG
当你走入这洞穴时，引起数以千计的蝙蝠惊动，满洞飞
舞的蝙蝠几乎遮住你的视野，隐约间可看到这是一个四壁凹
凹凸凸的钟乳石洞，四处栖息着大小不同的蝙蝠，其中有一
只十分奇特的大蝙蝠。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"path5",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/bat" : 2,
  "/open/poison/npc/batking" : 1,
]));

  setup();
}
