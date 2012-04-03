// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
  set ("short", "苍松迎客");
	set( "build", 282 );
  set ("long", @LONG
你走在蜀山小径上,两株青松向你迎来,碧绿的针叶,挺拔的枝
干,像似以满心的愉悦,欢迎你的到来,你抬头西望, 昂然的蜀山就
在你眼前,这里就是进入蜀山的入口:____苍松迎客____ .
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"froad2",
  "east" : __DIR__"su4",
"north" : "/open/tendo/m1",
]));

  setup();
}
