#include <command.h>
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
     set_name("[32mʥ��̵�����[0m",({"iron board","board"}) );
     set_weight(3000);
     if( clonep() ) 
     set_default_object(__FILE__);
     else 
     {
     set("long",@LONG

     ʥ���ͽ������֮һ, ������������������, �������Ͽ�������
     ʥ��̵�ʥ��ͼ��!!������Ϊʥ�����ͽ�ı���֮��, �����Խ�
     ������������Ϊͽ�ֹ�����������
 
LONG);
     set("unit", "ֻ");             
     set("value",60);
     set("no_sell",1);
     set("no_give",1);
     set("no_auc",1);
     set("no_drop",1);
     set("material","iron");
     }
     init_unarmed(60);
 
     setup();
}
void init()
{
  object me;
  seteuid(geteuid());
  me = this_player();
  this_object()->set_name(""+(string)this_player()->name(1)+"��"HIG"����"NOR,({"iron board","board"}));
}

                   