// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ������������û�˸��������������
LONG);
set("exits", ([
	"west":__DIR__"r61",
	"south":__DIR__"r63",
]));
  set("light_up",1);
  setup();
}