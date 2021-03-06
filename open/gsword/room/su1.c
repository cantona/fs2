// Room: /open/gsword/room/su1.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
 走在宽阔的青石板大道下,依稀可想像蜀中城过去的兴荣,然
而蜀中城就竟是蜀州要城,虽然没落,尚保有过去的一丝繁华,北方
就是蜀中城的闹区,东西方则是一般的住宅.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su2.c",
  "south" : "/open/gsword/room/su0",
  "west" : "/open/gsword/room/su5",
  "east" : "/open/gsword/room/su8",
]));

  setup();
}
