inherit ROOM;

void create ()
{
  set ("short", "瀑布里");
  set ("long", @LONG
仙剑前山的瀑布里，这里到处泥泞，令人无法想像这里竟然会有人
定眼一看，你眼前的人竟是金风细雨楼楼主--李梦枕。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/pool",

]));

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/lee1.c" :1, ]));
  setup();
}
