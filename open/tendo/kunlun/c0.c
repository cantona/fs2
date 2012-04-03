inherit ROOM;

void create()
{
	set("short", "昆仑山顶");
	set("long", @LONG
偌大的银色山谷，终年白雪皑皑，地上积了
一层薄薄的雪，虽是如此还是长了不少平地难得
一见的花草。前方有片奇特的树林终年云雾缭绕
你也许可以穿越(pass)看看。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"east" : __DIR__"m1",
]));
	set("outdoors", "1");

	setup();
}

void init()
{
	add_action("do_pass","pass");
}

// modified by babe
int do_pass()
{
	object who = this_player();
	tell_room( this_object(), who->query("name")+ "往树林走去。\n", who );
	who->move(__DIR__"c1");
	if( who->query("food") > 200 )
		who->add( "food", -10 );
	return 1;
}
