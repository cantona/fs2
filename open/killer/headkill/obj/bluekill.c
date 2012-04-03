#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
        set_name(HIB"蓝凤绝杀令"NOR, ({"bluekill card","card"}) );
	set("long",
"这就是传说中的蓝凤绝杀令，经历了千辛万苦后，终于拿到手了。\n"+
"蓝凤组并不会任意出动，只有杀手全力追杀的人头才会出动，因此可以利用它来追杀。\n"+
"使用法：bluekill xxxxx    xxxx是指该玩家的ID，且必须为杀手全力追杀的人头\n"+
"只有一次的机会，必须在该角色死亡后立刻去拿人头，交给叶秀杀\n");

	seteuid(getuid());
	set("unit","张");
        set("base_unit", "张");
	set("no_sell",1);
	set("no_give",1);
	set("no_drop",1);
	set("no_auc",1);
	set("value",0);
	set("weight",500);
	set_amount(1);
        setup();
}

void init()
{
  if( this_player()==environment() )
  {
    add_action("blue_kill", "bluekill");
  }
}

int blue_kill(string arg)
{      

   object ob,me=this_player();
   string obn;
   object ob1,ob2,ob3,ob4;

   ob1=new("/open/killer/headkill/npc/blunpc1");
   ob2=new("/open/killer/headkill/npc/blunpc2");
   ob3=new("/open/killer/headkill/npc/blunpc3");
   ob4=new("/open/killer/headkill/npc/blunpc4");


   if( !arg )                      return 0;
//   if( !ob = present(arg,me) )     return 0;
//   if( ob != this_object() )       return 0;
   if (me->query_temp("head") != 9)
        return notify_fail("你怎么拿到这一支令牌的？\n");
   if(me->query("combat_exp") < 650000)
        return notify_fail("你这种战斗经验这么少的小鬼头，也想要蓝凤组出动？\n");
    ob=find_player(arg);
    if(!ob) ob=find_living(arg);
    if (!ob) ob=LOGIN_D->find_body(arg);
    if(!ob)
      return notify_fail("你想追杀的人不在线上哦???\n");
    if(ob==me)
      return notify_fail("你想追杀自己呀!!!有没有搞错呀???\n");
     if(ob->query("title") != HIR"杀手全力追杀的人头"NOR)
      return notify_fail("这种小角色，蓝凤组不会出动啦！\n");

    if (!me->query("use_blue") )
        me->set("use_blue",1);
    else
        me->add("use_blue",1);
    obn=ob->query("name");
    //防止使用瞬间移动
    ob->set_temp("no_transmit",1);  
    message_vision(HIM"$N使用蓝凤绝杀令,要派蓝凤组追杀$n\n",me,ob);
    //证明这个玩家使用过蓝凤绝杀令
    me->set_temp("head",10);
    message("system",HIW "蓝凤组组长乔小雨千里传音：‘\n
                蓝凤组听令，蓝凤绝杀令已现，全力追杀" +ob->name()+"，至死方休!!’\n\n "NOR,users());
    if (me->query("use_blue") > 4)
    {
            message("system",HIW "蓝凤组组长乔小雨千里传音：‘\n蓝凤组听令" 
        +me->name()+"第"+me->query("use_blue")+"次请我们出动’\n\n "NOR,users());
    }   
     ob4->move(environment(ob));
     ob3->move(environment(ob));
     ob2->move(environment(ob));
     ob1->move(environment(ob));
     message_vision(
             HIM"突然之间四道人影从四方闪出蓝凤组的杀手出现这里。\n"NOR,ob);
     message_vision(
             HIM"蓝凤杀手喝道："+ob->name()+" 你的死期到了!!\n"NOR,ob,ob);

     ob4->kill_ob(ob);
     ob3->kill_ob(ob);
     ob2->kill_ob(ob);
    // ob1->kill_ob(ob);  因为此人是用背刺
     ob4->set_leader(ob);
     ob3->set_leader(ob);
     ob2->set_leader(ob);
     ob1->set_leader(ob);
     add_amount(-1);
     return 1;
}


