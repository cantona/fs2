// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "客栈");
	set("long", @LONG
一间和这里完全不相衬的客栈，里面生意可是兴隆的很，一
点也不像是穷乡僻壤该有的冷清模样大概是这附近只有这家客栈
的关系吧....想不来都不行。这里似乎已成了进昆仑山的招牌了
，无论是来这求仙或赏景的游客都会到这儿落脚歇息，顺便打听
一些关于昆仑的消息。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"north" :__DIR__"v9",
	"up"    :__DIR__"v13",
]));
	set("objects", ([ /* sizeof() == 2 */
	__DIR__"npc/two" : 1,
	__DIR__"npc/pin" : 1,
          ]));
	set("light_up",1);
	set("outdoors",0);

	setup();
}
