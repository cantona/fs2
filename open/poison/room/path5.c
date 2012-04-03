// Room: /open/poison/room/path5
inherit ROOM;

void create ()
{
  set ("short", "密道");
  set ("long", @LONG
来到这里你发现两旁墙壁留有碧血斑斑的旧痕迹，到处
剑痕累累，刀迹处处，似乎在此曾发生过一场大血战。地上
躺着数具枯骨，极为阴森恐怖。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"path10",
  "east" : __DIR__"path4",
  "northwest" : __DIR__"path6",
]));

  setup();
}
