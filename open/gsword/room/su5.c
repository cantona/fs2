// Room: /open/gsword/room/su5.c

inherit ROOM;

void create()
{
	set("short", "青石小径");
	set("long", @LONG
走在青石小径上,这里已不是蜀中闹区,高大的建筑渐渐减少,取代
的是一般平房,人潮,也渐渐的消失了.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"su6",
  "east" : __DIR__"su1",
]));

/*	由于砍掉 beggar.c 所以干脆这儿也关掉
        set("objects", ([
        "/open/gsword/mob/beggar" : 1,
        ]) );
*/
        set("outdoors","/open/gsword");
	setup();
}
