inherit ROOM;

void create ()
{
  set ("short", "北堂火");
  set ("long", @LONG
不知是不是迷信的关系，总觉得脸上有着烫烫的感觉，难道是紧
张的原因，好像是从书籍发散过来的，这里的书本可真奇妙呀，还是
只是巧合。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
