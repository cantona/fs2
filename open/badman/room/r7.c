// Room: /open/badman/room/r7
inherit ROOM;

void create ()
{
  set ("short", "警备室");
  set ("long", @LONG
你来到一个宽敞的大房间，这里聚集了许多的盗贼喽喽，有的
人在休息，有的则在喝茶聊天，他们都在这里负责机动待命的工作
，随时准备出动。
    如果你的职位够大的话，随时可以在这里找到手下供你指挥，
不然的话，乖乖当个小喽喽吧。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r14",
  "south" : __DIR__"b5",
]));
  set("light_up", 1);

  setup();
}
