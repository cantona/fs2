#include <ansi.h>
inherit NPC;
#include <ansi.h>
inherit F_MASTER;
void create()
{
        set_name("梅影", ({"may ying", "may"}));
        set("long","
梅影外柔内刚，容貌遇雪尤清，经霜更艳。一身白衣看起来颇有出尘脱俗的味道
是仙剑派的女弟子，在仙剑七侠中排行第五。梅影因为心思细腻兼且头脑灵活所
以被指派为仙剑的财物总管。和何双双是姊妹关系，同时进入仙剑派。但个性和
何双双不同，较为温柔婉约。\n");
        set("gender","女性");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",20);
        set("class","swordsman");
        set("title","仙剑派第四代女剑侠");
        set("nickname",HIW"东城飞雪"NOR);
        create_family("仙剑派",4,"弟子");
        set("inquiry",([        
        "唐钰" : "三师哥是好人哪...但我已经看破俗情了...希望他能和我小妹子...\n",
        ]));
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
        set("sha-stop-5",1);
        set_skill("literate",60);
        set_skill("parry",90);
        set_skill("dodge",90);
        set_skill("shasword",80);
        set_skill("sha-steps",80);
        set_skill("shaforce",70);
        set_skill("sha-array",70);
        set_skill("force",50);
        set_skill("sword",80);
        set_skill("move",80);
        set_skill("array",70);
        set_skill("cure",50);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
        set("str",20);
        set("cor",30);
        set("per",30);
        set("int",40);
        set("cps",20);
        set("con",30);
        set("spi",15);
        set("kar",30);
        setup();
        carry_object("/open/gsword/obj/sword-5")->wield();
        carry_object("/open/gsword/obj/may_ring")->wear();
        add_money("gold",5);
}
  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
   {
    command("say 身体发肤,受之父母,要好好爱惜啊!");
    return 0;
    }
    command("say 点到为止唷...");
    return 1;
    }
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_5"))
        {
        command("say 没师父的允许,我不敢自做主张!");
        return 0;
        }
        command("smile");
        command("say 以后你就跟着我学点武功吧");
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
	  new("/open/sky/obj6/ocean_diamond")->move(environment(winner));
	  message_vision(HIM"\n从梅影的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/ocean_diamond",sprintf("%s(%s) 让梅影掉下了海洋之心钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/ocean_diamond")->move(environment(winner));
	  message_vision(HIM"\n从梅影的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/ocean_diamond",sprintf("%s(%s) 让梅影掉下了海洋之心钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

