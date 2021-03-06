// Room: /open/start/room/s4.c

inherit ROOM;

void create ()
{
  set ("short", "凌云村");
  set ("long", @LONG
平静安详的村庄，两旁见到的都是平凡的民舍，
没有什么特殊的建筑，远向南方望去是一片绿油油的
稻田，有几个农夫正在辛勤的耕作。
    南面的房舍是村人们饲养家畜的地方。
北边则是驿站.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/start/room/s2",
  "south" : "/open/start/room/s6",
  "east" : "/open/start/room/s5",
  "north" : "/open/trans/room/room5.c",
]));

  set("outdoors", "/main/start");

  setup();
}
