inherit ROOM;

void create ()
{
 set ("short", "聚贤亭");
  set ("long", @LONG

据说金刀门的第一代门主是一个大将军，当初为了号召义士曾经在这里召
开英雄大会，后来又在这里创立金刀门，为了纪念当初那次的英雄大会就
在这里建了一座亭子，并名为聚贤亭。在这你不禁想像起当年的英雄大会
，许久才会过神来。

LONG);


  set("light_up", 1);
  set("outdoors", "/open/gblade");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"g1-3.c",
	"out" : "/open/gblade/room/g1-1",
]));

  setup();
}
int valid_leave(object me,string dir)
{
 if(dir=="out")
 me->delete_temp("lose_cup");
 return 1;
 }
