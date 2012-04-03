#include <room.h>

inherit RECORD_ROOM;

void create()
{
	set("short", "巫师会议室");
	set("long", @LONG

	会议室！

	目前只有录音「say”讯息，没限制谁启动录音！
	而且，录音档只能设在 /log 下。

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "back"  : __DIR__"entrance",
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("no_magic", 1);
	seteuid ("ROOT");

	setup();
	call_other("/obj/board/wiz_record_b","???");
}
