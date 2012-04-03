#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
        // 我多加了个 id == swordsman, wade in 1/4/1996
        set_name("柳毅",({"master swordsman","master","swordsman"}));
	set("long","剑士公会三长老 ,负责在署中城接收新会员 .\n");
        set("gender","男性");
        set("guild_master",1);
        set("class","swordsman");
        set("nickname","飞音剑");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",43);
        set("title","剑士公会三长老");
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("force",3000);
        set_skill("literate",40);
        set("kee",3000);
        set("max_kee",3000);
        set("max_force",3000);
        set_skill("array",70);
        set_skill("move",60);
        set_skill("force",50);
        set_skill("dodge",80);
        set_skill("parry",90);
        set_skill("sword",100);
        set("force_factor",10);
//      set_skill("hammer",20);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
             (: command,"perform sword.swordkee" :),
        }));
        setup();
        carry_object("/open/gsword/obj/heaven-sword")->wield();
        add_money("gold",10);
}

void init()
{
        add_action("do_join","join");
}
int do_join()
        {
        if(this_player()->query("class"))
                return notify_fail("你已经加入其他工会了。\n");
        this_player()->set("class","swordsman");
        message("system",HIW "柳毅纵声大呼 :\n
欢迎" +this_player()->name()+"加入剑士公会!!\n\n"NOR,users());
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj10/surname_yin")->move(environment(winner));
	  message_vision(HIM"\n从柳毅的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/surname_yin",sprintf("%s(%s) 让柳毅掉下了柳灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/surname_yin")->move(environment(winner));
	  message_vision(HIM"\n从柳毅的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/surname_yin",sprintf("%s(%s) 让柳毅掉下了柳灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}


