inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("张凯",({"charn-kai","kai"}));
        set("title","饰夜天卫");
	set("long","
他是守护一楼楼主刁千刃的
三大护卫之一, 也是刁千刃
的义弟, 性格却与其兄大异
特趣, 刀法是三人之最.
");
	set("gender","男性");
        set("inquiry",([
             "仙剑派":"这.这...这是好久以前的事了...",
             "封印":"你怎么知道我知道呢???",
             "仙剑酒鬼":"唉~~~那是我在仙剑时，对我最好的师兄...当年因为我到
                         仙剑封印区去...结果连累到师兄也......唉~~~`",
             "封印区":"我也不确定...在仙剑后山那有一个杵着奇怪雕像的地方...
                       我因为不小心触碰到那几尊雕像...所以被当时的掌门除出
                       仙剑....不过也因此让我结识了刁大哥...",
             "雕像":"那是几尊很奇怪的雕像..每个雕像上还有印记...我想..那就
                     识破封印的方法.....不过...究竟是如何..可能得去问仙剑的
                     长老了。",]));
	set("combat_exp",9000000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
         set("max_force",25000);
         set("force",25000);
         set("max_kee",25000);
        set("force_factor",20);
	set_skill("blade",100);
        set_skill("golden-blade",100);
	set_skill("parry",100);
        set_skill("wind-rain",75);
	set_skill("dodge",100);
        set_skill("move",70);
        set_skill("lo-steps",80);
        map_skill("blade", "golden-blade");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object(C_OBJ"/three-star-blade")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say 竟敢动风雨楼的人！");
  return 1;
}

void die()
{    
	object winner = query_temp("last_damage_from");
	int j;
	if(!winner)
	{
	::die();
	return ;
	}

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/blue-crystal")->move(environment(winner));
	  message_vision(HIM"\n从张凯的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/blue_crystal",sprintf("%s(%s) 让张凯掉下了蓝色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/blue-crystal")->move(environment(winner));
	  message_vision(HIM"\n从张凯的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/blue_crystal",sprintf("%s(%s) 让张凯掉下了蓝色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}