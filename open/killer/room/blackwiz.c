#include <room.h>
inherit ROOM;
 void create()
{
  set("short", "������������");
  set("long", @LONG
  ��λ...������ɷǷǷǷǷǳ�֮����,���ϣ������ܹ���ཨ��һЩ
Ҳ��ӭ��ʱ��ˮ���....
                       ��ҿɿ�ʼ�ڴ�������....no idea.




LONG);
        set("exits", ([ /* sizeof() == 1 */
	"south":__DIR__"r3",
	"west":"/open/killer/room/r0.c",
  ]));
       setup();
        call_other("/obj/board/killerwiz_b","???");
}
int valid_leave(object me, string dir)
{
  if (me->query("class")!="killer" && dir=="west")
 return notify_fail("����ɱ�ֵĽ���!������û��[1m������[0m,�����޷�����!\n");

return ::valid_leave(me,dir);
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}