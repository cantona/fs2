// Room: /d/snow/innerhall.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �����Ժ");
  set ("long", @LONG
�����Ǵ�����ݵ���Ժ��ƽ����ݵ���û�й����������ǲ��ҵ���
�����ģ����������ҵ����ã������ͼҾ���Է��ֱ�λ������һ���ߵ�
�����ԣ������Լ��񷿡����۵��Է��������ϵ��ߵ����ԣ�����������
����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"inneryard",
]));

  setup();
}