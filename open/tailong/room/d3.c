inherit ROOM;

void create ()
{
  set ("short", "小木屋");
  set ("long", @LONG
屋子里面相当的干静，虽然家俱全都是木头制品，但是却不
贵给人有很粗糙的感觉，在你面前看书的正是段誉，只看他拿着
一本易经兴趣盎然的读着。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"d2",
]));
  set("objects",([
  "/open/tailong/npc/duanyu.c" : 1,
]));
  set("no_transmit",1);
  setup();
}
