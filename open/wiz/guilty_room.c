// Room: /u/b/bss/guilty_room
inherit ROOM;

void create ()
{
  set ("short", "狂想天牢");
  set ("long", @LONG
这是一间四周以铁栏竿围起来的监牢, 里面住的都是一些穷凶
恶极的罪犯, 看来都是因为违反了player_rules或是利用bugs被关
进来的, 以前的巫师会二话不说的那些犯罪的人purge,但是难免有
玩家会觉得被冤, 想要上诉, 所以作了这么一间房间, 最主要是让
玩家有上诉的管道
这间房间照理说是没办法出去才对,如果谁先找到方法出去的话,我就会将他减刑
要上诉的人请post
LONG);

  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
]));
  set("no_magic", 1);
  set("light_up", 1);

  set("valid_startroom",1);
  set("no_transmit",1);
  set("guilty_room",1);
  setup();
  call_other("/obj/board/guilty_b","???");
}
