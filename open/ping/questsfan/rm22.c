// Room: /u/d/dhk/questsfan/rm22
inherit ROOM;

void create ()
{
  set ("short", "左林曲径");
  set ("long", @LONG
这里是约是嵩山山腰处，往西北走好像会通往＂石林″。
此地依旧云雾迷蒙，气氛神秘，奇声随侍左右。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"rm15",
  "southeast" : __DIR__"rm8",
]));
  set("outdoors", "/u/d");

  setup();
}
