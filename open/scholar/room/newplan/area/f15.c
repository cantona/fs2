// Room: /u/s/sueplan/newplan/area/f15.c
inherit ROOM;

void create ()
{
  set ("short", " ����");
  set ("long", @LONG
����е���С��������ʢ����Ұõ�壬�����ݱ������֦����ѹ���ˣ�
һ·����Ĳݾ��ϣ��鲼��С�ò�����С�ĳ��գ�����һƬ�̻����ĵ�̺
��ӭ����ǰ��������Ų�֪����С�����������ߣ�Զ����Լ�����������죬
�ƺ��Ƿ������ֻ�����������
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"f11",
  "north" : __DIR__"f16.c",
]));

  setup();
}