// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "道路");
  set ("long", @LONG
这里离蜀中已经很远了，天气却不知怎地似乎有回升的现
象，并不像先前那样地冰冷。  在这里山势为之平缓，平坦的
高原更凸显出前方那座山脊的宏伟高大，凝神望去....似乎是
武林的道教胜地--------<<昆仑山>>!!

LONG);

  set("objects", ([ /* sizeof() == 1 */
//"/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"east" : "/open/tendo/m3",
"north" : "/open/tendo/kunlun/v1",
]));

  setup();
}
