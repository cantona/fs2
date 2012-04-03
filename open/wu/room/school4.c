// Room: /u/d/devils/school4.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG
你站在正晴武馆的东北隅,你眼前摆满了武器架,武器架上刀枪剑戟
样样齐全，在众多架子之中以放棍的武器架雕饰最为华丽，棍架上还挂
着一个牌子(sign)。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"school7",
  "west" : __DIR__"school3",
]));

        set("outdoors", "/open/wu");
        setup();
        set("item_desc", ([
                "sign": "武器用毕，记得放回原位\n"
        ]) );
}
