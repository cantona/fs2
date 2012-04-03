// Room: /open/main/room/maiu-3.c
inherit ROOM;

void create ()
{
  set ("short", "江边小村");
  set ("long", @LONG
几间小屋林立在江边,应是苗人的住所,屋中隐隐传来歌声,
曲意凄凉,似乎道尽了苗人生活的悲苦.
LONG);

  set("objects",([
      "/open/ping/npc/maiu-guard" : 1,
     ]));
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"maiu-4.c",
  "east" : __DIR__"maiu-2",
]));
  set("outdoors", "/open/main");

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
