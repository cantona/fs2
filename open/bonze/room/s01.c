// Room: /open/soulin/room/s01
inherit ROOM;

void create()
{
  set ("short", "少林寺前广场");
  set ("long", @LONG
	寺前一片广大的空地，为平常时寺内弟子练武之所
	在。

LONG);

  set ("outdoors", "/open/soulin");

  set ("exits", ([	//sizeof() == 2
      "east"	:	__DIR__"s02",
      "north"	:	__DIR__"s04",
  ]) );

  setup();
}
