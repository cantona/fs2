// Room: /u/u/unfinished/room/is2.c
inherit ROOM;

void create ()
{
  set ("short", "斜坡");
  set ("long", @LONG
西高东低的斜坡, 遍地都是坚硬的大岩石, 岸边只有几株干枯的树干, 荒凉
无生气, 看来这座岛应该是做荒岛吧. 北边是树林, 树木长的十分高大, 就算在
阳光普照的天气, 北边的树林看起来还是十分阴森. 再往西边爬上去便是石丘了
.

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"is1",
  "east" : __DIR__"is3.c",
]));
  set("outdoors", "/u/u");

  setup();
}
