// Room: /u/d/dhk/questsfan/rm23
inherit ROOM;

void create ()
{
  set ("short", "右林曲径");
  set ("long", @LONG
这里是约是嵩山山腰处，往东北走好像会通往＂日日甘霖″
。此地依旧云雾迷蒙，气氛神秘，奇声随侍左右。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"rm8",
  "eastup" : __DIR__"rm11",
]));
  set("outdoors", "/u/d");

  setup();
}
