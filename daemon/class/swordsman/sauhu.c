#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("赵鹤", ({"sau hu", "hu"}));
        set("long","郑士欣第四爱徒,赵鹤原是一名书生,曾中过举人,在23岁时因考进士
落第,愤而尽毁其书,学剑于郑士欣,赵鹤因入门较晚,因此年纪比师兄
们都大,平时赵鹤负责传弟子们剑诀,因其学识渊博,仙剑派弟子往往能
很容易的理解其中函意,仙剑派近年来之所以如此兴盛,赵鹤也贡献良多.\n");
        set("gender","男性");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",52);
        set("class","swordsman");
        set("title","仙剑派第四代四弟子");
        create_family("仙剑派",4,"弟子");
        set("score",100000);
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        set("sha-stop-4",1);
        set_skill("literate",60);
        set_skill("parry",100);
        set_skill("dodge",60);
        set_skill("shasword",70);
        set_skill("sha-steps",70);
        set_skill("shaforce",80);
        set_skill("sha-array",60);
        set_skill("force",60);
        set_skill("sword",70);
        set_skill("move",70);
        set_skill("array",60);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
        set("str",25);
        set("cor", 30);
        set("per", 25);
        set("int", 35);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-4")->wield();
        add_money("gold",5);
}
  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
   {
    command("say 身体发肤,受之父母,要好好爱惜啊!");
    return 0;
    }
    command("say 领教高招");
    return 1;
    }
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_4"))
        {
        command("say 没师父的允许,我不敢自做主张!");
        return 0;
        }
        command("smile");
        command("say 既然是师父的意思,我就收你为徒!");
        command("recruit "+ob->query("id"));
        ob->set("marks/仙剑七侠",1);
}

void die()
{
	object head,winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }

	if(winner->query_temp("head") == 3 )
	{//要求解第三进职的玩家，一定要自己杀死七子之一
	//所以设下head 4，如果不是在解第三进职的玩家，并不会拿到人头
	message_vision(HIY"可恶！居然会败在你的手下,看来武林将有一阵腥风血雨\n"NOR,this_object());
	message_vision("说完之后他就倒下了。。。。\n",this_object());
	winner->set_temp("head",4);
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}
	if ((winner->query("class") == "killer") && (winner->query_temp("head") != 4))
	{//避免条件连续两次成立（因为解headkill之谜的一定是杀手）
	//想将七子的人头家在杀人名单中，所以是杀手来砍七子，亦可以得到人头
	//但是因为不是在解第三进职，所以并不会设定步骤值
	message_vision(HIY"可恶！居然会败在你的手下,看来武林将有一阵腥风血雨\n"NOR,this_object());
	message_vision("说完之后他就倒下了。。。。\n",this_object());
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/desert_diamond")->move(environment(winner));
	  message_vision(HIM"\n从赵鹤的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/desert_diamond",sprintf("%s(%s) 让赵鹤掉下了沙漠之荒钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/desert_diamond")->move(environment(winner));
	  message_vision(HIM"\n从赵鹤的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/desert_diamond",sprintf("%s(%s) 让赵鹤掉下了沙漠之荒钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

