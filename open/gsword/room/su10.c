// Room: /open/gsword/room/su10.c

inherit ROOM;

void create ()
{
  set ("short", "石板大道");
  set ("long", @LONG
走在宽阔的石板大道下,你来到了蜀中城的市区,蜀中城的一般居
民都居住在此,你可以感觉到蜀中城的宁静与悠闲,来来往往的居民穿
梭在街上,这是一个平静的城市.你的东方有一家私塾, 西方则是一间
民房.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sworder" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/swordhouse",
  "north" : "/open/gsword/room/su11",
  "south" : "/open/gsword/room/su9",
  "east" : "/open/gsword/room/school",
]));

  setup();
}
