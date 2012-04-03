// Room: /u/m/moner/open/room/r6.c 
inherit ROOM;
 
void create ()
{
  set ("short", "大厅");
  set ("long", @LONG
    这里是二头目刘信的大厅, 放眼望去, 一片银白色, 所有的摆设都是
纯银制品。现在刘信是风行山寨内的二当家, 所有的事情雷霸几乎都放手
给刘信去做, 刘信看你闯进来, 对你邪恶的笑着, 他不似张继那么冲动 ,
但是看似有很深的心机, 让你摸不透, 你不禁打了个冷颤。


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r5.c",
]));
set("objects",([
"/open/ping/npc/5.c":1,
]));

  setup();
  replace_program(ROOM);
}
