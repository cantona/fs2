// Room: /open/capital/room/r07.c

inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
������Խ��Խ�ӽ����ǻʹ��Ĵ��ſ���, ����Կ���ǰ���Ĺ�����
װ��������ȭͷ���ͭ�������������ԶԶ���������������ĳ���, ��
�Ź�ǽ�Ĵ�����ʯ·�����������ȥ��

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r05",
  "east" : __DIR__"r08",
]));
  set("gopath", "east");

  setup();
}