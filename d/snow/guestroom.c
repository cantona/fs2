// Room: /d/snow/guestroom.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �ͷ�");
  set ("long", @LONG
������һ�䲼�õ��൱���µ��᷿���Ӵ��ӿ��Կ������ߵ��쾮��
�ϱߵ�ͥ԰�и�ʽ�������滨��ݣ��Լ������������ĵ����������᷿
�Ķ���ǽ�ϻ�����һ����Ůͼ(painting)��������һλ��װ����������
��ͨ���쾮�ĳ��ڡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"inneryard",
]));

  setup();
}
