// Room: /open/ping/room/soldier1.c
inherit ROOM;

void create ()
{
  set ("short", "军营便门");
  set ("long", @LONG
你的西方,就是本朝在平南城的驻军所在,这里是军营的侧门
,你看到伙夫们正忙着搬运东西.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"soldier2.c",
  "east" : __DIR__"road9",
]));

  setup();
}
