// Room: /u/m/moner/open/room/r11.c 
inherit ROOM;
void create ()
{
  set ("short", "大道尽头");
  set ("long", @LONG

   行至大道尽头, 明亮的天色已被浓密的枝叶覆盖住, 走在草地上,
不时发出窸窸窣窣的声音, 环顾四方, 一个人影也没有, 跟先前的明
亮舒适真有天壤之别, 你每走一步, 心脏就扑通扑通的跳, 好像四周
都是陷阱一般, 更加的小心翼翼, 风行山寨终于到了。。


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r12.c",
  "enter" : __DIR__"r10.c",
]));
  set("outdoors", "wind");

  setup();
  replace_program(ROOM);
}
