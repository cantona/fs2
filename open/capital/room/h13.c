// Room: /open/capital/room/h13.c

inherit ROOM;

void create ()
{
  set ("short", "萝卜胡同");
  set ("long", @LONG
未建城之前这里本来是一片的萝卜园，后来为了能够顺利的征收此
块土地，地主只好接受居民的要求，取名为萝卜胡同。
    虽然这里已经没有萝卜园了, 但是居民在自宅的院子里还是自个架
个架子, 种几根又白又嫩的大萝卜, 送礼自用两相宜。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r70",
  "east" : __DIR__"h14",
]));
  set("outdoors", "/open/capital");

  setup();
}
