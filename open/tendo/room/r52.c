// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","һ��������Ϣ��");
        set("long", @LONG
�����Ϣ���Ǹ�����ɵ�һ��������Ϣʱ���õģ�����䷿����
��ˮ������Ժ�һ������ʡ������⻹�м��Ŵ���������ʱ��Ϣһ��
���ظ�һ��ƣ������ġ�
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/obj/beck":1,
]));
set("exits", ([
	"east":__DIR__"r37",
]));
  set("no_fight",1);
  set("no_kill",1);
  set("no_magic",1);
  set("light_up",1);
  set("no_spells",1);
  setup();
}