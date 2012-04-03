// Room: /open/wiz/entrance.c

#include <login.h>
inherit ROOM;

void create()
{
	set("short", "巫师会客室");
	set("long", @LONG
这里是巫师和玩家聊天的地方，如果你有什么意见要让巫师们知道，在这里
留言是最快的途径，不过如果是对于游戏中的问题，请您先确定我们提供的说明
文件里没有说明，再提出疑问，巫师的主要职责并不是教玩家如何玩。
    有问题是必然的事情, 但是重点在于找出解决之道, 而不是补偿等等问题,
当然, 就算要补尝玩家的损失, 请勿造成不公平现象, 最好有其他巫师在场见证
或者自行 post 之. 对于做坏事的玩家, 也请在此提出讨论. 对于 bug, 请负责
的巫师尽快修正.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"fund_office",
  "west"  : __DIR__"hall1",
  "down"  : "/open/common/room/inn",
  "south" : __DIR__"area",
  "east"  : __DIR__"eq",
  "meeting" : __DIR__"meeting",
]));
  set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/server" : 1,
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("no_magic", 1);

	setup();
	call_other("/obj/board/player_b","???");
}
