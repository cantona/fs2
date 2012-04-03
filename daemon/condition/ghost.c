//阴魂不散
//必需经由特别方式才能解除的状态之一
#include <ansi.h>

int update_condition(object me, int duration)
{
  object ob1,ob2;
  ob1=new("/u/n/neverend/npc/ghost1.c");
  ob2=new("/u/n/neverend/npc/ghost1.c");

  if( duration >= 15 )
  {
    if ( random(100) > 15 )
    {
     tell_object(me,HIB"\n数道阴魂由地底窜起并朝着这边飞了过来!!\n"NOR);
     message("vision",me->name() + "阴魂缠身，好像做了什么亏心事似的，引来厉鬼报复。\n"NOR,environment(me), me);
     ob1->move(environment(me));
     ob1->kill_ob(me);
     ob1->set_leader(me);
     ob2->move(environment(me));
     ob2->kill_ob(me);
     ob2->set_leader(me);
    }else{
    message_vision(HIB"$N的后面好像有什么东西在跟着!!\n"NOR,me);
    }
  }

  else if( duration >= 1 )
  {
    if ( random(100) > 15 )
    {
     tell_object(me,HIB"\n一道阴魂由地底窜起并朝着这边飞了过来!!\n"NOR);
     message("vision",me->name() + "阴魂缠身，好像做了什么亏心事似的，引来厉鬼报复。\n"NOR,environment(me), me);
     ob1->move(environment(me));
     ob1->kill_ob(me);
     ob1->set_leader(me);
    }else{
    message_vision(HIB"$N的后面好像有什么东西在跟着!!\n"NOR,me);
    }
   }
  if( duration < 1 )
  return 0;
  return 1;
}

