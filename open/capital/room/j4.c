// Room: /open/capital/room/j4
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
��̸������Խ��Խ����ǰ��Ҳ��Щ�����ߡ����ɵ���ð�շ���һ��
��ǰȥ���������ڸ���ô������������¥�ݵ����ҡ�������Ȼ�ǲ�����
̦��ʯ�ڡ��м�����ɣ�������⡣

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"j2",
  "north" : __DIR__"j3",
]));

  setup();
}