// Room: /open/wu/room/luroom4.c
// 泷山武馆的练武场
inherit ROOM;
void create()
{
        set("short", "练武场");
        set("long", @LONG
你站在泷山派练武场的一角,你眼前摆满了许多的木头人,木头人身上拳
痕磊磊,指痕处处,想必是武馆弟子用来练拳的地方,你看到教头正在教导
武馆弟子如何发劲、拆招的方式。
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "north" : __DIR__"luroom3",
        "east" : __DIR__"luroom7",
]));
        set("objects", ([ /* sizeof() == 1 */
        "/open/wu/npc/c_trainee" : 3,
        "/open/wu/npc/c_trainer" : 1,
     ]));
        setup();
}
