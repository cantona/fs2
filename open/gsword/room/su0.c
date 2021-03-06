#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "蜀中城之南门");
	set( "build", 6 );
  set ("long", @LONG
一座斑驳的石砌城门展现在你眼前,似乎在诉说着蜀中城的悠
远历史,高耸的城墙,沧殇的匾额(sign),告诉你这城也曾经有过辉
辉煌的时候,如经她已从历史中退役,只剩仙剑派还留在这里...
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "
这是一座古老的匾额,只见上面题着:

    纵使鹅毛难飞越  龙盘虎踞蜀中城

                  承平元年,开城纪念
",
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/main/room/[2]",
  "north" : "/open/gsword/room/su1.c",
]));

  setup();
}
