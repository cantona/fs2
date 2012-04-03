// Room: /u/m/moner/water/room3.c
inherit ROOM;

void create()
{
  set ("short", "涯底");
  set ("long", @LONG

顺着藤蔓攀爬而下, 你来到了山谷底, 抬头仰望, 只能隐隐约约的看
见山顶。浩大的瀑布从上倾泻而下, 仿如一抹天笔, 划空而至, 水气氲氤
间, 你看见幢幢的绿影。奔腾的水势汇集而成一座湖泊, 平静的水面荡然
波, 水底却有一股暗流, 好像另有出路。

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
set("exits", ([ /* sizeof() == 1 */
"west":"/open/gblade/mrm/r1",
]));
  setup();
}
void init()
{
  add_action ("do_climb","climb");
}
int do_climb (string str)
{
  object    me;
if(str!="robe")
return notify_fail("你又不是乌龟，干麻用爬的！\n");
me = this_player();
message_vision("$N双手拉住藤蔓，小心往上爬。\n",me);
me->move(__DIR__"room2.c");
tell_room(environment(me), sprintf ("%s抓着藤蔓，很辛苦的爬了上来。\n",
me->short()), me);
return 1;
}
