// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","�ߵ�");
set ("long",@LONG
�ɺ�ձë���أ�����ɢ��һ��һ���ɫ�ҷ���������������������
���Ŵ���������ƿ����ͷ�����ŵĹ����ݣ����������߲�����ɻ�
���ƣ�ǽ�Ϲҵģ����ƴ�ɽˮ������ī�� 
LONG);



  set("exits", ([
            "south" : __DIR__"a21",
            "west"  : __DIR__"a4",
                ]));

        setup();
}
