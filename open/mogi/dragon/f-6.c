//by Casey
inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());   
        set("short",MAG"�ص�����"NOR);
        set("long", @LONG
������һ������ޱȵķ��䣬������ȫ�������Ÿ�ʬ��ŧ
Ѫ��ζ���������Ż�ѣ����ǲ��ܽ����ܿ���ʮ�����������
�������������ʮ��΢���Ķ��������...


LONG
        );       
  set("light_up", -1);
 set("evil", 1);
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"f-0",
 "south" : __DIR__"f-7",
 
 


]));
  set("no_transmit",1);
  set("no_auc",1);
 
  
  setup();
}

