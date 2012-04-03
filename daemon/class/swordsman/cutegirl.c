#include <ansi.h>
inherit NPC;
inherit F_MASTER;
#include <ansi.h>
void create()
{
        set_name("何双双", ({"cute girl","girl"}));
        set("long","
何双双外刚内柔，看到这天仙般的容貌，你简直不敢相信 -- 她
竟是仙剑七侠之一跟梅影同时进入仙剑派，个性和梅影不同较为
活泼开朗。但最近似乎有点闷闷不乐，眼神微微有忧愁的影子...\n");
        set("gender","女性");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",18);
        set("nickname",HIC"纤云弄巧"NOR);
        set("class","swordsman");
        set("title","仙剑派第四代女剑侠");
        create_family("仙剑派",4,"弟子");
        set("inquiry",([        
        "忧愁" : "唉...三师哥好像比较喜欢五师姐...只好祝福他们了...\n",
        ]));
        set("sha-stop-6",1);
        set("score",100000);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        set("max_kee",1200);
        set("kee",1200);
        set("gin",1200);
        set("max_gin",1200);
        set("sen",1200);
        set("max_sen",1200);
        set_skill("array",60);
        set_skill("literate",40);
        set_skill("shasword",80);
        set_skill("shaforce",50);
        set_skill("parry",70);
        set_skill("dodge",80);
        set_skill("sword",70);
        set_skill("move",90);
        set_skill("sha-array",60);     
        set_skill("force",50);
        set_skill("sha-steps",80);
        map_skill("array","sha-array");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set("str",25);
        set("cor", 30);
        set("per", 40);
        set("int", 40);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-6")->wield();
        add_money("gold",5);
        carry_object("/open/gsword/obj/yuboots")->wear();
        carry_object("/open/gsword/obj/yubracelet")->wear();
        carry_object("/open/gsword/obj/yugem")->wear();
        carry_object("/open/gsword/obj/yucloth")->wear();
        carry_object("/open/gsword/obj/yuskirt")->wear();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("smile");
   command("say 不好吧 !");
   return 0;
  }
  command("say 好 ,我就领教你的高招 !");
  return 1;
  }
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_6"))
        {
        command("say 没师父的同意,我不敢自做主张!");
        return 0;
        }
        command("blush");
        command("smile");
        command("say 以后可要乖乖听师父的话喔 !");
        command("giggle");
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
	  new("/open/sky/obj6/moon_diamond")->move(environment(winner));
	  message_vision(HIM"\n从何双双的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/moon_diamond",sprintf("%s(%s) 让何双双掉下了月亮之柔钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/moon_diamond")->move(environment(winner));
	  message_vision(HIM"\n从何双双的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/moon_diamond",sprintf("%s(%s) 让何双双掉下了月亮之柔钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

