// Room: /open/capital/room/r40.c

inherit ROOM;

void create ()
{
  set ("short", "永福胡同");
  set ("long", @LONG
杂草丛生的石板路。北面都是些半倾的废屋子，如果想开宗立派又
缺银两的话，这条胡同是个不错的选择，不过可能要终日与地痞流氓为
伍了。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r39",
  "east" : __DIR__"r41",
]));

  set("gopath", "west");

  setup();
}
