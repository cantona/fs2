// Room: /open/wu/room/school16
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG
这是正晴武馆二楼穿堂。由于这儿是走廊的角落，所以显得有一点阴暗
，看到东边透出一些灯光，你不由地想去看一看究竟。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/wu/room/school15",
  "east" : "/open/wu/room/school17",
]));

  set("light_up", 1);
  setup();
}
