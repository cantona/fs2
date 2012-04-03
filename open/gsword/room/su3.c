// Room: /open/gsword/room/su3.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
	set( "build", 632 );
  set ("long", @LONG
这里是蜀中的闹区,嘻嘻嚷嚷,尽是来逛街的人潮,往西是一家
钱庄,东方则是一家商店,你也许可以在那里买些东西.	
LONG);

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/sells2" : 1,
  "/open/gsword/mob/woman" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su4.c",
  "west" : "/open/gsword/room/subank",
  "south" : "/open/gsword/room/su2.c",
  "east" : "/open/gsword/room/sushop",
]));

  setup();
}
