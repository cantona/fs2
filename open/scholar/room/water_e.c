inherit ROOM;

void create ()
{
  set ("short", "东堂水");
  set ("long", @LONG
不知是不是迷信的关系，总觉得这里的空气又溼又冰，难道是紧
张的原因，总觉得是从书籍发散过来的，这里的书本可真奇妙呀，还
是只是巧合。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"water.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_water.c" : 1,
]));

  setup();
}
