inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",HIC"-�˹��Թ�-"NOR);
        set("long", @LONG
���Ư���㲻֪���ںη�����ǰ���Ǹ���̫��ͼ��Ư��������ǰ��Ǭ��
�����ԡ����ԡ�����..��ͼ���������������ǰ��Ư��!!
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "Ǭ��" : "/open/wu/room/gen9",
  "����" : "/open/wu/room/gen10",
  "����" : "/open/wu/room/gen12",
  "����" : "/open/wu/room/gen15",
]));
  set("no_transmit",1);
  set("no_auc",1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/corpse2" : 4,
]));
  setup();
}
