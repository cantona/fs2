inherit ROOM;

void create ()
{
  set ("short", "山崖");
  set ("long", @LONG
"哇哈哈哈哈哈"一爬上来 ,你不禁对自己的轻功造诣大感满意 ,
登上这万丈高崖 ,环顾四周景物 ,一股豪气顿时涌现心头 .路边
有一只猴子 ,正看着你的表现而大惑不解 .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room33.c",
  "eastdown" : __DIR__"room26",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/monkey2.c" : 1,
]));

  setup();
}
