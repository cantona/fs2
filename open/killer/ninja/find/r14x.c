// open/killer/ninja/find/rx14.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ��Ȼ�����涼�Ը����˵��ˣ���������Ҳ�������ڻҶ��ѣ����Ե�Ȼ����
  ��������û�����󣬾�����Ϸ�������ϧѽ.........
  Ŀ�Ͳ�����ȥ������ڲ�Զ�����Ͽ�Ϸ......
  Ȼ��û��ã��ǹ�ǿ�����Ϣ�����ˣ��Ѿ�����������
  ����Ӱ��û��֮ǰ��һ��ǿ��Ľ����Ѿ�Ϯ������������
  ��Ȼ���������к�Զ��һ�ξ��룬�������ɱ�ǿ��Ľ�������������
  
  ������ǰһ��֮ǰ������ԼԼ��������˵
  ��̫С�����˰ɣ���Ȼ�����ɽ����ʽ�ĵ���ʽ����......��
  
  �ɽ����ʽ�������ɽ����ǲ��к���ʽ�����𣿣���  
  
LONG);
  set("no_transmit",2);
  setup();
}

void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  call_out("greeting",3 , ob);   
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",7);
     ob->set("sen",1);
     ob->set("gin",1);
     tell_object(ob," ��е������𽥻�ɢ....���������״̬..... \n");
     ob->move("/open/killer/room/pillrm.c");
    }
    // �������Ǻܲ����������͵�����ʦ�����ã�һ�������
    else 
     ob->move(__DIR__"r1.c");
}
