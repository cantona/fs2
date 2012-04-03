// Room: /open/hall/h_room13.c

inherit ROOM;

void create()
{
        set("short","衙门师爷─神算子之厢房");
        set("long", @LONG
这里是衙门师爷─神算子的厢房，房里放着一张并不太华丽的床，
床旁边放着一张桌子，桌上摆着一些衙门公文及重大罪犯之名单，桌子
旁是个破旧的书柜，柜内放置着古今名书，倘若你仔细一瞧，这一些书
都是已翻烂而又重新装订的!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "north":__DIR__"h_room10",

]));
        set("objects", ([ /* sizeof() == 1 */

"/open/hall/npc/mas":1,
]));

        setup();
}
