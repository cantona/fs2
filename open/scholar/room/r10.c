// /u/j/judd/room/r10.c
inherit ROOM;

void create ()
{
set("short", "火之通道");
set("long", @LONG
这条往火室图书馆的道路，相当的吓人，两旁竟然都是火焰，只
有中间有一条红色的小径通往图书馆，胆子不大的人很可能在此就打
退堂鼓了，其实，只要小心的走，是不会受伤的，火室图书馆，就在
前方．
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southeast" : __DIR__"r13.c",
 "northwest" : __DIR__"fire.c",
]));
setup();
}
