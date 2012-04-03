// Room: /open/poison/room/road18
inherit ROOM;

void create ()
{
  set ("short", "内庭");
  set ("long", @LONG
这里是一个小庭院，院旁栽种了几棵垂柳，垂柳随风起
舞，悠闲的飘曳着，庭内插了数根梅花桩，平常教徒们便是
在此勤练武功掌法和轻功，由桩上光滑的磨痕可见教徒们平
日练功之勤。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/trainee" : 3,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"garden1",
  "west" : __DIR__"room11",
  "east" : __DIR__"road16",
]));

  setup();
}
