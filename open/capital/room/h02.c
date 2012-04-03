// Room: /open/capital/room/h02.c

inherit ROOM;

void create ()
{
  set ("short", "文来胡同");
  set ("long", @LONG
这儿卖的东西仍然是一些文房四宝, 不过看起来的品质似乎刚刚所
看到的还要好, 果然是「货比三家不吃亏”。这里的商家声音也喊的更
大声的, 吆喝声此起彼落, 你不禁也被吸引过去看个究竟。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/h01",
  "east" : "/open/capital/room/h03",
]));

  set("outdoors", "/open/capital");


  setup();
}
