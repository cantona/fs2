// Room : /open/clan/red_fire/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "$HIY$【$HIR$红莲教$NOR$ $HIC$广场$HIY$】$NOR$" );
	set( "build", 623 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room36.c",
		"north"     : "/open/clan/red_fire/room/room4.c",
		"up"        : "/open/clan/red_fire/room/room113.c",
		"down"      : "/open/clan/red_fire/room/room136.c",
		"west"      : "/open/clan/red_fire/room/room38.c",
		"south"     : "/open/clan/red_fire/room/room24.c",
		"enter"     : "/open/clan/red_fire/room/room17.c",
]) );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "stone" : "
                                      $HIY$╭╮
                                  $HIC$╭──╮
                                  │  ││
                                $HIY$╭╮$HIC$  ││─╮
                              $HIY$╭╮$HIC$╭─╮│  │
                           $HIY$╭╮$HIC$╭──╮│$HIY$╭╮╮
                          $HIC$╭─╮│    │╭─╮$HIY$╭╮
                      $HIC$╭─│╭───╮││  │─╮
                      │╭─╮  │  │││││  │
                    $HIY$╭╮$HIC$│││$HIY$╭╮  $HIC$│$HIY$╭╮$HIC$││ $HIY$╭╮

          $HIC$圣火$HIY$岩$NOR$──传说是由位于$HIY$圣域$HIC$天外天$NOR$的$HIR$圣火山$NOR$，因为吸取
          了$HIR$日$HIG$月$HIY$精$HIB$华$NOR$，在经过$HIM$仙人$NOR$施法将火焰熔合后，才可得到的
          $HIY$岩石$NOR$，据说此岩$HIM$非硬非软$NOR$、$HIM$极硬极软$NOR$！？只要用适当内力
          即可在$HIY$岩石$NOR$面上书写。


",
]) );
	set( "long", @LONG


                                 $HIY$●$HIR$红莲教$NOR$ $HIC$广场$HIY$●$NOR$


        呼！你轻轻的降了下来，再次的证明你的轻功非凡，抬头放眼望去......
        哇......好大的广场，而地面是用从未见过的$HIY$岩石$NOR$砌成$HIR$莲花$NOR$的形状，奇怪
        的是为何这些$HIY$岩石$NOR$的颜色如此鲜红？难道......这里就是传说中的人间仙
        境──$HIR$红莲教$NOR$！你再次环顾四周，突然！！你看到了一件不可思议的事..
        ....$HIC$圣火$HIY$岩$NOR$(look stone)为何会出现在$HIR$红莲教$NOR$中，这一连串的惊讶伴随着
        你强烈的好奇心，使你赶紧想踏入教内，了解这一切的真相。






LONG);
	set( "no_clean_up", 0 );
	setup();
	call_other( "/obj/board/red_fire_b", "???" );

	}
