#include <ansi.h>
inherit ROOM;

void create ()
{
	set ("short", "������");
	set ("long", @LONG
��δ��������ſ��Ϸ�����һ���Ҷ���š������ᡱ�������
���֣�������δ����ǰ�����������̵�ӡ�󣬶�������ҵ�������
�Ǿ���˽��еġ���Բ�桱��
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);

	set("exits", ([ /* sizeof() == 3 */
	"south"	: __DIR__"manor10",
	]));

	set("objects", ([ /* sizeof() == 2 */
	__DIR__ "npc/funyun-jen" : 1,
	]));

	set("light_up", 1);

	setup();
}