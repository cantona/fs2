// Room: /u/o/ookami/teikei.c 
inherit ROOM;
 
void create ()
{
  set ("short", "帝国华击团．花组．天龙寺分部");
  set ("long", @LONG
这里是帝国华击团花组的天龙寺分部,在你前面有一个石碑(stone)
,你可以看看上面写些什么,站在你面前的那个人就是帝国华击团花组的
队长,大神一郎
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
天龙寺落成于民国87年8月9日
 由xboy监工
ookami负责修建
MADE IN TAIWAN
请大家爱用国货
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"aa41",
]));
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/ookami1.c" : 1,
]));
  set("no_magic", 1);
  set("valid_startroom", 2);

  setup();
  replace_program(ROOM);
}
