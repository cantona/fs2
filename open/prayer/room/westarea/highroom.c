//open/prayer/room/westarea/highroom.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��ϼ��");
        set("long",@LONG

	����ɽ�ϵ�һ��Сɽ��, ��ǰ������һЩ���ӵ�é
	��, ����Щ�������Ĵ��ҷ�����!!ϼ������, ��һ
	��������Դ֮��Ϣ!!����������ɽ�ķ���, ������
	���ѵ���������ɽȥ��??

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"1",	
        "down":__DIR__"road23",
 
        ]) );
        set("light_up", 1);
        set("no_transmit",1);
//        set("objects",([ /* sizeof() == 1 */
//  "/open/prayer/npc/high-man" : 1,		
//]));
  setup();
}