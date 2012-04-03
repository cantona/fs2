// Room: /open/gsword/room/suroom4.c

inherit ROOM;

void create ()
{
  set ("short", "民房");
  set ("long", @LONG
一间普通的民房,平淡的摆设,然而却洒扫干净,一般的蜀中
市民都居住在如此环境里.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su11",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/woman" : 1,
]));

  setup();
}
