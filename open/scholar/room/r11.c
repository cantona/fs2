// /u/j/judd/room/r10.c
inherit ROOM;

void create ()
{
set("short", "风之通道");
set("long", @LONG
这里的风，不知道为何，强得不得了，可说是寸步难行，经过你
不停的尝试，终于发现只有正中间的部分是没有风的，也就是说，有
一条无风的小路可以继续前进，真不知道到底是怎么设计出这么巧妙
的机关的，走过小路，风室图书馆就到了．
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southwest" : __DIR__"r15.c",
 "northeast" : __DIR__"wind.c",
]));
setup();
}