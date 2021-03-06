#include <ansi.h>
inherit ITEM;

int level=0;
void create()
{
   seteuid(getuid());
   set_name("忍者猴",({ "nija monkey","nija","monkey" }) );
   set("long",@LONG
       这是一只忍者猴子,你可以饲养(feed)它,让他长大,还可以帮他改名字(rename),
       等到它长的够大了,便可以放他出去背刺敌人(mob_bak),你可用verify来看他长的
       程度到多少。但是，因为他是活物，所以必须喂他，他才会恢复原有的力量

LONG);
   set("unit","条");
   set("no_sell",1);
   set("no_drop",1);
   set("weight",50);
   setup();
}

void init()
{
    if( this_player()==environment() )
    {
       add_action("feed_pet","feed");
       add_action("rename_pet","rename");
       add_action("bit_pet","mob_bak");
       add_action("verify_pet","verify");
    }
}

int feed_pet(string arg)
{
   object obj,me=this_player();
   int expm;

   if(!arg)  return notify_fail("指令格式: feed <杀手密药>\n");
   if(!(obj=present(arg,me)))
       return notify_fail("你身上没这样东西。\n");
   if(obj->query("id") != "killer pill")
       return notify_fail("你只能喂它杀手密药。\n");
   message_vision("$N喂了"+this_object()->name()+"一颗杀手密药。\n",me);
   if (!me->query("monkey_exp"))
   { 
      me->set("monkey_exp",1); 
      me->set("monkey_lv",1);
   }    
   expm=random(20);
   me->add("monkey_exp",expm);
   expm=me->query("monkey_exp");
   if (expm >= 100)  //升级
   {
    level =me->query("monkey_lv");
     level += 1;
     if (level > 100)
       level=100;
     me->set("monkey_lv",level);
     me->set("monkey_exp",1);
     expm=0;
   }
   obj->add_amount(-1);
   this_object()->set("lv",me->query("monkey_lv"));
   this_object()->set("exp",me->query("monkey_exp"));
   this_object()->set("bak_times",0);
   return 1;
}

int rename_pet(string arg)
{
   if(!arg) return notify_fail("你想把他改成什么名字呢?\n");
   arg = trans_color(arg);
   this_object()->set_name(arg + NOR,({ "nija monkey","nija","monkey" }) );
   write("你替你的宠物取了个名字叫"+this_object()->name()+"。\n");
   return 1;
}

int bit_pet(string arg)
{
   int pow,bak_times,t_kee,buf;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();
   pow = ob->query("lv");
   bak_times=ob->query("bak_times");
   if( !arg )
       return notify_fail("你想叫"+ob->name()+"去背刺谁？\n");
   target = present(arg, environment(me)); 
   if( target->query("no_kill") ) 
       return notify_fail("这家伙你不能动就是不能动。\n");
   if( !wizardp(me) && environment(me)->query("no_fight") )
       return notify_fail("这里禁止战斗。\n");
   if( !target->is_character() || target->is_corpse() )
       return notify_fail("看清楚点,它并不是活物。\n");
   if( target == me ) 
       return notify_fail(ob->name()+"看起来并不想背刺你。\n");
   if( pow < 5 ) 
       return notify_fail(ob->name()+"还不够大喔,再多喂他一些杀手密药吧。\n");
   if( bak_times > 2)
       return notify_fail(ob->name()+"很累了，再多喂他一些杀手密药吧。\n");

   message_vision(
   ""+ob->name()+"潜入房中的暗处，准备背刺$n。你摒息的看着它\n\n",me,target);
   buf=random(pow);
   if( buf > 15 )
   {
    if( buf > 30 )
    {
     message_vision(HIG"$N毫无警觉,被"+ob->name()+HIR+"背刺了！\n" NOR,target);
     t_kee=target->query("max_kee")/13;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 60 )
    {
     message_vision(HIG"$N毫无警觉,被"+ob->name()+HIR+"狠狠地背刺了！\n" NOR,target);
     t_kee=target->query("max_kee")/10;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    if( buf > 90 )
    {
     message_vision(HIG""+ob->name()+HIR+"狠狠地使出双重背刺！！$N受创很深！\n" NOR,target);
     t_kee=target->query("max_kee")/5;
     target->add("kee",-t_kee);
     ob->add("bak_times",1);
     return 1;
    }
    message_vision(HIG"$N一个不留意,被"+ob->name()+HIR+"背刺了！\n" NOR,target);
    t_kee=target->query("max_kee")/20;
    target->add("kee",-t_kee);
    ob->add("bak_times",1);
    return 1;
   }
   else
   {
    message_vision(HIC"$N急急忙忙往后跳开, 被"+ob->name()+HIC+"吓出了一深冷汗。\n" NOR,target);
    target->add("sen",-5);
    ob->add("bak_times",1);
    return 1;
   }
}
  
int verify_pet(string str)
{
  int lv,expm;
  object obj=this_object();

  lv =  (int)obj->query("lv");
  expm = (int)obj->query("exp");
  write(obj->name()+"      目前等级   :  "+lv+"\n\n");
  write(obj->name()+"      目前经验值 :  "+expm+"\n\n");
  return 1;
}

int query_autoload ()
{
  if (this_player()->query("quest/rain") == 1)
    return 1;
  return 0;
}