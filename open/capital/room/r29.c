// Room: /open/capital/room/r29.c

inherit ROOM;

void create ()
{
  set ("short", "永安胡同");
  set ("long", @LONG
由于近镇南门，石板路上不时有马车来来去去，马夫的呦喝声和行
人来来往往的声音此起彼落。北面是一排不起眼的民宅。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r28",
  "east" : __DIR__"r30",
]));

  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
