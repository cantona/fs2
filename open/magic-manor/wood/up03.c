inherit ROOM;
#include <ansi.h>

string *exit = ({ __DIR__"wood13",__DIR__"wood14",__DIR__"wood15",__DIR__"wood16",});

void create()
{
        set("short","¥��");
        set("long", "һ������򵥵�ֱ��ʽ¥�ݣ��������������ϴ���ѱ���ƾ�
����������ͨ��������¥��\n");
        set("exits", ([
	"up"	: exit[random(sizeof(exit))],
        ]));
        set("light", 1);
	set("no_auc", 1);
	set("no_transmit",1);
        setup();

}
