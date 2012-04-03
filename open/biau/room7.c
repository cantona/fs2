// Room: /u/j/jcder/room/room3.c

inherit ROOM;

void create()
{
	set("short", "北厢通道");
	set("long", @LONG
一阵阵凉风吹习而来，你正走在北厢的通道上，向东看去，可以见到后厢
房的情景，庭中有一口井，井旁种着一些奇花异草，似乎有些不伦不类，北边
有一排房间，隐约有人在谈论甚么，风声沙沙，院里还有些不知名的草，正随
风摇曳着．
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"son_room0",
  "south" : __DIR__"room6",
]));

	setup();
}
