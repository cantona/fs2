// Room: /u/d/dhk/questsfan/rm21
inherit ROOM;

void create ()
{
  set ("short", "树林左翼");
  set ("long", @LONG
这里是约是嵩山山腰处，往西南走好像会通往＂藏仙谷″
，不过那只是传闻，也不知道是不是真有那地方。此地依旧云
雾迷蒙，气氛神秘，奇声随侍左右。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm27",
  "northeast" : __DIR__"rm8",
]));

  setup();
}
