// Room: /open/ping/room/road4.c
inherit ROOM;

void create ()
{
  set ("short", "石板大道");
	set( "build", 32 );
  set ("long", @LONG
走到这里,算是平南城的地理中心了,两条石板大道交错而过
,北方可到段王府,段王爷正在招揽书生,如果你是书生的话,也许
可以过去看看,东方则是平南闹区,你也许可以在那买些物品.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/woman" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"road8",
  "north" : __DIR__"road7.c",
  "west" : __DIR__"road5.c",
  "east" : __DIR__"road3",
]));

  setup();
}
