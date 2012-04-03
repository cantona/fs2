// Room: /open/ping/room/inn.c

inherit ROOM;

void create ()
{
  set ("short", "木板吊桥");
  set ("long", @LONG
这里可是正晴武馆的私人吊桥,正晴武馆就在吊桥的那一边,
你如果没事的话,还是不要去惹这平南城的大富豪.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road9",
  "east" : "/open/wu/room/luroom1",
]));
  set("outdoors", "/open/wu");

  set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );

  setup();
}
