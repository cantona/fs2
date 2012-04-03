// Room: /open/wiz/program_room.c

inherit ROOM;

void create ()
{
  set ("short", "巫师程式设计心得讨论室");
  set ("long", @LONG
这里是提供巫师讨论程式写作心得的地方，由于大家涌跃参与,
有问题最好能自己从例子里找出解法, 或者从 /doc 下找出来, 最
快的方法则是问线上的巫师, 或者找自己老板(谁叫他要收你), 或
者在这个版看看, 也许就有解答, 如果没有, 再 post 问, 相信很
快就能获得答复. 另外, 在大神菠萝面包的家里也有许多范例可以
供您参考, 请自行前往参观比较.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/wiz/hall1",
]));

  set("no_clean_up", 0);


  setup();
  call_other("/obj/board/program_b", "????");
}
