// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "道路");
  set ("long", @LONG
风声飕飕，寒意更甚。远方的山顶，依稀飘着几朵白云，一
片银白。已让你分不清是山或云?!
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"west" : "/open/tendo/m4",
"east" : "/open/tendo/m2",
]));

  setup();
}
