// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǹ㳡���ܵ����ȣ������������ʮ�ֿ�������������ʵ��
������ľ���̣������ܵ�������������������ģ�ʹ������ķ��ε�
�����ڰ���̫�����������Ե�ʮ��ҫ�ۡ�
LONG);
set("exits", ([
        "north":__DIR__"r32",
 	"south":__DIR__"r30",
	"west":__DIR__"r48",
	"east":__DIR__"r56",
]));
  set("light_up",1);
  setup();
}