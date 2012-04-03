// Room: /open/gsword/room/lake2.c

inherit ROOM;

void create()
{
	set("short", "昆明湖东");
	set("long", @LONG
一阵和风吹佛而过,悉悉酥酥的穿过湖边的花树,花雨与落叶
轻飘而下,落在你的发襟与衣领,你轻轻弹去沾在你身上的花与叶
,望着这花叶中的昆明湖,忘却那尘世中的争战与烦忧....
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"su7",
  "southwest" : __DIR__"lake3.c",
  "northwest" : __DIR__"lake1.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
]));
        set("outdoors","/open/gsword");

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

	setup();
}
