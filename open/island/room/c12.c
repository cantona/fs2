#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", HIB+"������"+NOR);
  set ("long", @LONG
��������һ��޴�ı����� ,�����Ĺ�â��ңԶ�ı���͸
���� ,͸�Ź������������� ,�Ĵ�����ʪʪ������ ,���ж�
����С�Ľ���...


LONG);
 set("exits", ([ /* sizeof() == 4 */
 "southeast" : "/open/island/room/c10",  
 "south" : "/open/island/room/c10",
 "northeast" : "/open/island/room/c15",
 "northwest" : "/open/island/room/c22",


]));

 
 set("light_up", 1);
 
 setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
        // 5������
        call_out("greeting", 2, ob);
   }
  add_action("do_team","team");

}

int greeting (object who)
{
  object room=environment(who);
//  �ж�player�Ƿ����������
  if(this_object() == room )
 who->add("kee",-70);
return 1;
}

int do_team(){
   object me=this_player();
   tell_object(me, "���ֽű���Ĳ���ʹ��!!\n");
   return 1;
}


