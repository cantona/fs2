inherit ROOM;

void create ()
{
  set ("short", "玄机房外");
  set ("long", @LONG
玄机房是天龙寺中最新建造的建筑物, 这间房间是特别建造给段家的
武学奇人段誉夫妇所用作以隐居用的, 因为两人想退出江湖而段誉又对天
龙寺有重大贡献,因此本因方丈破例准予他们夫妇居住在天龙寺,又因为玄
机房内有重大秘密,因此这里是天龙寺三禁地之二,门外有四大护卫在此把
守。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"aa22",
  "east" : __DIR__"aa24",
]));
  set("objects", ([ /* sizeof() == 4 */
"/open/tailong/npc/guard1.c":1,
"/open/tailong/npc/guard2.c":1,
"/open/tailong/npc/guard3.c":1,
"/open/tailong/npc/guard4.c":1,
]));

  setup();
  replace_program(ROOM);
}
