//open/prayer/tanshun/22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",@LONG

        ���ܹܵ��鷿����, վ�ż�λ����. ���Ƕ������ܹ�����
        �����ڵ����о�����ѡ������, ���𱣻��ܹܵİ�ȫ, ��
        �������ܹ��鷿�ڵ���Ҫ��Ʒ.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"28",                //�ܹܷ�
        "west":__DIR__"23",             //�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,              //����
                
]));
     
  setup();
}