#include <room.h>
inherit ROOM;

void create()
{
	set("short","ˮ֮������");
	set("long",@LONG
	�㼸��������������۾�����Ϊ��һ������������Ȼ����ˮ�ף�
	����ֻ�����峺�ĺ�ˮ����Χ�ţ����ǣ���ˮ��Ȼ������û�˴���
	���ǣ�����һ�Ե�ʯ���Ͽ��š����С�ɽ��졯������������һ�С�
	ˮ֮ʬ�����ڴ˴����أ����û������ˢ�ӣ����Ǿ��������һ������ɣ�
	�����������������װ��û���������ˣ�
LONG);
      
set("objects",([
    "/open/killer/headkill/npc/i_ghost":1,
		]));
	set("light_up",10);
        setup();
}