// Room: /open/gsword/room/su4.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
走在宽阔的青石板大道下,依稀可想像蜀中城过去的兴荣,然
而蜀中城就竟是蜀州要城,虽然没落,尚保有过去的一丝繁华,南方
就蜀中城的闹区,你可以在那里买些东西, 西方则是著名的蜀中风
景区,蜀山.北方则是将军府.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/froad3",
  "south" : "/open/gsword/room/su3",
  "north" : "/open/gsword/room/suking",
  "east" : "/open/gsword/room/su13",
]));

  setup();
}
