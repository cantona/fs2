// /u/j/judd/room/r14.c
inherit ROOM;

void create ()
{
  set ("short", "中堂后厅");
  set ("long", @LONG
后厅是供人休息的地方，也是儒门接待访客的地方，这里的桌椅
全部都是木制的，中间有一个圆桌，上面放满了各式的水果(fruit)
，不但可以解渴，还可以止饥．
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "fruit" : "这些水果看起来好像很好吃说，但是偷吃是不好的行为．
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r17.c",
]));
  set("light_up", 1);

  setup();
}
