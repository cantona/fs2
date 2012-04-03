// Room: /u/r/ranko/room/v2.c
inherit ROOM;

void create ()
{
  set ("short", "隔世村中");
  set ("long", @LONG
你正踏在隔世村的路上，村里的村民不时投以好奇的眼光，似
乎对于外来的访客并不太适应。两旁是供给村民居住的寻常农舍，
往远方望去则可看到一片片绿油油的稻田及临近的晒谷场。
    南边臭气冲天，原来是一间猪舍，由于村中人口不多，为节省
人力，因此合力出资盖了这间猪舍，将猪只集中看管。

LONG);
 

  set("light_up", 1);
  set("outdoors", "/u/r/ranko/room");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"v6.c",
  "east" : __DIR__"v2-7.c",
]));

  setup();
}
