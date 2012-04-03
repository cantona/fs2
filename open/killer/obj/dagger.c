#include <weapon.h>
#include <ansi.h>
inherit DAGGER;

void create()
{
        set_name(HIC "灭神匕首" NOR,({"god dagger"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long","这是叶秀杀与庄静柔与柴荣三人之间的信物，\n
当年的事件之后，这把匕首就不知去向，如今居然出现在你的手上。\n
可以利用它转换本身的灵力，变成强大的伤害力，使对手受到伤害(hurt)。\n");
                set("value",1000);
                set("material", "steel");
        
                set("no_sell",1);
        }
        init_dagger(80);

// These properties are optional, if you don't set them, it will use the
// default values.

        set("wield_msg", "$N从怀中摸出一把$n握在手中。\n");
        set("unwield_msg", "$N将手中的$n藏入怀中。\n");

// The setup() is required.
        setup();
}

void init()
{
    if( this_player()==environment() )
    {
      add_action("do_hurt","hurt");
      add_action("do_auc","auc");
    }
}

int do_auc(string str)
{  
   if (str=="god dagger")
   {
     message_vision("$N觉得灭神匕首，已经没用了，因此将匕首折断了\n",this_player());
     destruct(this_player());
     this_player()->set("sellring",2);
     return 0;
   }    
}

int do_hurt(string arg)
{
   int buf,sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   sk=me->query_skill("dagger",1);
   if (!arg )
   return notify_fail("你想射空气呀？\n");
   target = present(arg, environment(me)); 
   if(!target) return notify_fail("找不到这个人!!\n");
   if(!me->is_fighting(target) )
   return notify_fail("战斗中才能使用唷!!\n");
   if(this_player()->query("class") != "killer")
   return notify_fail("这是杀手专用的东西\n");
   if(this_player()->query_skill("dagger",1) < 50 )
   return notify_fail("小朋友，短兵刃练好一点，再用吧！\n");
   if( target->query("no_kill") ) 
   return notify_fail("这家伙你不能动就是不能动。\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("这里禁止战斗。\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("看清楚点,它并不是活物。\n");
   if(me->query("atman") < 50)
       return notify_fail("抱歉！灵力不够啦！\n");
   if( target == me ) 
       return notify_fail("杀手目前还没有，练尸魂人的打算啦！不要找死啦！\n");
   if(target->is_busy())
       return notify_fail("仁慈一点啦！他正被你的灵气银光制住，动弹不得\n");

  if ( me->is_fighting(target) || me->is_killing(target) )
  {
   tell_object(me,HIG"双手握住匕首，将自身的灵力灌入匕首之中。\n"NOR);
   tell_object(me,HIG"只见匕首发出一道耀眼的光芒，一道银光急射而出\n"NOR);
   if( random(sk) > random(target->query("dodge",1)) )
     {//dodge lv 100的话，因为对手dodge不定，以lv 100来算
        tell_object(me,HIM"对手一不留神，被银光射中，受到严重伤害\n" NOR);
        target->add("kee",-random(sk));
        target->start_busy(1);
        me->add("atman",-50);
        return 1;
     }
   else
    {
        tell_object(me,HIM"$N发现了你的行动，轻易的闪过去\n" NOR,target);
        me->add("atman",-10);
        me->start_busy(1);
        return 1;
     }
  }
  return notify_fail("想利用bug呀！，战斗中才能用啦！\n");
}

int wield()
{
  if(!this_player()) return 1;
 if(this_player()->query("class") != "killer")
    return notify_fail("这是杀手专用的东西\n");
 if(this_player()->query_skill("dagger") < 50 )
     return notify_fail("小朋友，短兵刃练好一点，再用吧！\n");
 else 
 {
::wield();
  }
  return 1;
}
