// Room : /open/clan/sky-wu-chi/room/room3.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
寒风山庄，看似清寒极冷，实际上却是一个鸟语花香的别墅
没有那冬寒，又哪来的别树一格的独特温馨，这里不但没有那刺
骨的寒风，也没那扰耳的风戾声，只那寒若冰的外观下，有着大
家喜悦的欢笑声，以及那人情似暖的友情下，共同建立的大家庭
而以。
LONG);
	set( "short", "$HIC$寒泉穴$NOR$" );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "build", 22 );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "no_clean_up", 1 );
	set( "item_desc", ([ /* sizeof() == 2 */
  "ll" : "",
  "sign" : "放武器或防器请打:    put  XXXXX
拿武器或防器请打:    take XXXXX


此处拿放还未完成...请大家加油完成100间ROOM^^
",
]) );
	set( "eqroom", 1 );
	setup();

	}
