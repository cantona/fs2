inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� ��"NOR);
	set("long",@LONG
һ����ľ����������Ե�ͨ�����о���ʮ�ֵ���խ��ڣ�������
��ͨ������������ͨ�����᷿��
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"east":__DIR__"b-13",
"west":__DIR__"b-15",
"south":__DIR__"b-17",
]));
	setup();
}

 