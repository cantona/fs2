inherit ROOM;

void create ()
{
  set ("short", "LPC 说明之 简介 -- mudlib");
  set("long", @LONG
定义你所连线进去的 LPC 程式集合.  driver 本身不是一个 game, 只是一
段程式, 允许你创造一个多使用者的环境, 你可以把 LPC 想成一般 C 语言
的编译程式, 而 mudlib 就像该编译程式的函式库(很粗略的比喻).
mudlib 定义常常被使用到的物件, 例如 /std/room.c 或 /std/user.c
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
