// Room : /open/clan/sky-wu-chi/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
        set( "cmkroom", 1 );
        set( "exits", ([ /* sizeof() == 7 */
		"east"      : "/open/clan/sky-wu-chi/room/room6.c",
		"up"        : "/open/clan/sky-wu-chi/room/room5.c",
		"down"      : "/open/clan/sky-wu-chi/room/room3.c",
		"west"      : "/open/clan/sky-wu-chi/room/room4.c",
		"south"     : "/open/clan/sky-wu-chi/room/room177.c",
		"room"      : "/open/clan/sky-wu-chi/room/room17.c",
]) );
        set( "no_clean_up", 0 );
        set( "short", "$HIC$ξ$HIY$天极殿$HIC$ξ$NOR$" ); 
	set( "build", 579 );
        set("long",@LONG
这里是本帮的大厅，也是各方英雄好汉在此聚集开会，宴客之地
。一踏入此厅，可见所有物品摆设皆井然有序，条理分明。相传是由
高人所设计，和天上的三垣二十八星宿，五星日月的运转行度，有一
种玄妙的契合，故而可以万古常存。在大厅后面的墙上，挂着一把绝
世神器「屠魔刀”，这是「无上先师”令东来赠送帮主的礼物。在大
厅的两侧墙上，则挂了两句对联，左是「藉武道以窥天道”，右是「
藉太极以窥无极”。是帮主勉励帮众的话也是帮名「天道无极”的由
来，由此可知帮主的学问知识之深几近天人。在大厅右方的石板上，
刻了‘天下风云’四个大字，为的是能使本帮派能更进步，更加壮大
，以求各英雄豪杰多多留言，不吝指教。(look board)

LONG);
        setup();                                             
        call_other( "/obj/board/sky-wu-chi_b", "???" );
        }

