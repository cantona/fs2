// Room: /u/o/onion/room/r_room1.c

inherit ROOM;

void create()
{
	set("short", "镖局客房");
	set("long", @LONG
一间干干净净的客房,桌子上连一点灰尘都没有,可知打扫这里的仆人是多认真的了.
客房里还放着一张雕工精美的红桧大床,床头上雕着蟠龙浮云,床尾刻着水池青莲,你
心想着连客房都如此气派,想必此镖局的声势和威望有多高了...
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room3",
]));
	set("valid_startroom", "1");

	setup();
}
