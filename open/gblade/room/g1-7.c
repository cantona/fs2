inherit ROOM;

void create ()
{
  set ("short", "饭厅");
  set ("long", @LONG

饭桌上摆着好些精致的小点心，藕粉桂花糖糕，松子鹅油卷，真不知道人
的手可以这么巧妙做出这样精致的东西，还有一壶香冽异常的酒，你问了
问旁边的婢女，才知道原来这壶酒是有名目的，唤作‘万艳同杯’也不知
道是用什么酿成的。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g1-8.c",
  "west" : __DIR__"g1-6",
]));

  set("light_up", 1);

  setup();
}
