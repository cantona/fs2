// Room: /open/hall/h_room14.c

inherit ROOM;

void create()
{
        set("short","三捕头─秦  忌之厢房");
        set("long", @LONG
此处是总衙三捕头─秦  忌的厢房，一席木制的床铺，床上整齐的
叠着一床豆干似的棉被，可见他是个很自律的人，房里见不到一丝脏乱
，房间干净的让你似乎感到有点汗颜!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "north":__DIR__"h_room11",
]));
        set("objects", ([ /* sizeof() == 1 */
        "/open/hall/npc/chi.c":1,
]));

        setup();
}
