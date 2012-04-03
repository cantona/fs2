// made by ccat
// ����,����������call һ�����ι��޵�ȱ��,ʹ�õı���Ҳ��Ϊ��.

#include <ansi.h>
#include <weapon.h>
inherit SWORD;
object user;
int sp,max;
void create()
{
     set_name( "������",({"fire dragon sword","sword"}) );
     set_weight(7500);
     if( clonep() ) 
               set_default_object(__FILE__);
     else {
            set("long","����ս����,�л��������ħ����.\n"
                      +"�������: sword_fire,�������:sword_check\n"
                      +"����ս�����Զ�����,����Խ��,����Խǿ.");
            set("unit", "��");             
            set("value",20000);
            set("material","steal");
            set("wield_msg", "$N�ӽ�������������.\n");
            set("unwield_msg", "$N�ѻ�������ؽ�����.\n");
           }         
        init_sword(55);
        setup();
}

void init()
{
     add_action("do_wield","wield");
     add_action("do_check","sword_check");
     add_action("do_fire","sword_fire");
}

int do_wield(string str)
{ 
     ::wield();
     if( query("equipped") ) 
     {
        user = this_player();     // ȡ��ʹ����
        sp = 0;
        max = user->query_skill("sword",1);
        if(max > 70)  max=70;
        set_heart_beat(1);
     } 
}
int do_check()
{
 
 if( query("equipped") )
   write("�����������ɱ���� "+sp+" ��.\n");
 return 1;
}
void heart_beat()
{
  if( user->is_fighting() && query("equipped") && sp < max )
  {
   sp++; 
  }
  return;
}

int do_fire()
{
  object *enemy;
  int i,pp;
  
  if( max < 15)
  {
    write("��Ľ���̫��,�޷���������.\n");
    return 1;
  }
  
  if( user->is_fighting() && query("equipped") )
  {
    enemy=user->query_enemy();
    i=random(sizeof(enemy));
    if( environment(user) == environment(enemy[i]) )
    { 
       if( random(250)+max > enemy[i]->query_skill("dodge") )
      {
        if( sp < 2)
        {
          message_vision("һ��С���Ǵ�$N���г����ɳ�,����$n,������ȫû"
                            +"���������!!!\n",user,enemy[i]);
          sp=0;
          return 1;
        }else if( sp < 10 )
        {
          message_vision(HIR+"һ��С�����$N���г����ɳ�,����$n!!!\n"
                         +NOR,user,enemy[i]);
          pp = sp;
        }else if( sp < 20 )
        {
          message_vision(HIR+"$N���г���������һָ,���ܻ���ٿȻ�ӵص�ð"
                         +"��,ȼ����$n!!!\n"+NOR,user,enemy[i]);
          pp=sp*2;               
          enemy[i]->apply_condition("burn",(int)sp*1.5);
        }else if( sp < 30)
        {
          message_vision(HIR+"$N���г���һ��,ֻ�����ϵ���,��������һƬ,"
                      +"$n���������ܻ���!!!\n"+NOR,user,enemy[i]);
          pp=sp*3;
          enemy[i]->apply_condition("hellfire",(int)sp/2);
        }else if( sp < 40)
        {
          message_vision(HIR+"$N���𳤽�,ֻ�����ܾ��￪ʼ��ȥ,���������"
                            +"��ͻȻ͸��,һ�������ԭ��ʵ��ը��$n����!!!\n"
                            +NOR,user,enemy[i]);
          pp=sp*4;
          enemy[i]->apply_condition("hellfire",(int)sp/2);                  
        }else{
          message_vision(HIR+"$N����һ��,ֻ��$n���ݻ�������,һ����ɫ����"
                            +"�Ƶض���,һͷײ����$n!!!\n"
                            +NOR,user,enemy[i]);
          pp=sp*5;
          enemy[i]->apply_condition("hellfire",(int)sp/2);
        } 
        sp=0;
        enemy[i]->receive_damage("kee",pp,user);
        COMBAT_D->report_status(enemy[i], 0);
      }else
      {
        message_vision(HIR+"$N�����л�����...����û�гɹ�...\n"
                      +NOR,user);         
        sp=sp*0.7;
      }
     }
   }
  return 1;
}  