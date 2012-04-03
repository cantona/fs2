// Room: /u/u/unfinished/room/is5.c
inherit ROOM;

void create ()
{
  set ("short", "沙滩");
  set ("long", @LONG
你正处于小岛的东南角, 站在亮白如雪的沙滩上欣赏无边际的海景, 不经令
你感到格外的神清气爽, 所有的烦恼及不愉快都随着轻微的海风抛诸于脑后. 杀
气, 怒意在这美丽的沙滩上早已消失无形, 让你几乎忘了自己的身分. 北方是沙
滩, 西方是船只搁浅处.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"is8.c",
  "west" : __DIR__"is4",
]));

  setup();
}
