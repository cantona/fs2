inherit ROOM;

void create ()
{
  set ("short", "����֮���ִ��᳡");
  set ("long", @LONG
�����ǿ���ռ������ִ��Ļ᳡, ������һ��, ֻ�������Ѽ���
��ǰ�������ֵĹ���, ���������Ѿ�������μ�����������, ������һ
�����ڱصõ�����

LONG);

  set("light_up", 1);
  set("pkroom", 1);
  set("no_auc", 1);
        set("no_transmit", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room08.c",
  "west" : __DIR__"room11",
]));

  setup();
}