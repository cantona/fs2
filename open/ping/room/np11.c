inherit ROOM;

void create ()
{
  set ("short", "前庭");
  set ("long", @LONG
这儿是前庭的一个角落, 四周栽种了各式各样的奇花异草, 有
些花卉甚至连皇宫也没有, 你看到这些奇花异草, 真想摘一把带回
家种, 然而一想到段家高手众多, 就不由得打消了这个念头......

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np8",
  "west" : __DIR__"np10",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
