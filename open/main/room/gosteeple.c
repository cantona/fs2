inherit ROOM;
void create ()
{
set ("short", "浓雾");
  set ("long", @LONG
雾气慢慢的加重了,你的四周仿佛都被雾气所淹没了,
在视线不佳的情形下,你依稀可以看到东边似乎有一座
高塔...
LONG);
set("exits",([
"west":__DIR__"s22",
"east":"/open/steeple/steeple",
]));
  setup();
}
