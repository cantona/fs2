#include <ansi.h>
inherit NPC;

void create()
{
        set_name("李元济",({"vice-leader li","li"}));
        set("title","守卫队副队头");
        set("long","守卫队的副队头 , 在守卫队待了十年的时间了 ,
对枫林港了若指掌 , 他正站在了望台上俯瞰着枫林港 .\n");
        set("gender","男性");
        set("combat_exp",30000);
        set("attitude","heriosm");
        set("age",34);
        set("class","soldier");
        set("int", 30);
        set("con", 30);
        set("kar", 30);
        set_skill("blade",60);
        set_skill("her-blade",50);
        map_skill("parry","her-blade");
        map_skill("blade","her-blade");
        set_skill("parry",60);
        set_skill("dodge",50);
        setup();
        carry_object("/open/port/obj/wolf_blade")->wield();
        carry_object("/open/port/obj/wolf_cloth")->wear();
        carry_object("/open/port/obj/wolf_hat")->wear();
        carry_object("/open/port/obj/wolf_ring")->wear();
        carry_object("/open/port/obj/wolf_legging")->wear();
        add_money("gold",1);
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj10/cypress_yin")->move(environment(winner));
	  message_vision(HIM"\n从李元济的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/cypress_yin",sprintf("%s(%s) 让李元济掉下了柏灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/cypress_yin")->move(environment(winner));
	  message_vision(HIM"\n从李元济的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/cypress_yin",sprintf("%s(%s) 让李元济掉下了柏灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

