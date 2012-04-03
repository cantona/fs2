#include <ansi.h>
inherit NPC;
inherit F_MASTER;
#include <ansi.h>
void create()
{
        set_name("唐钰", ({"teng yu","yu"}));
        set("long","
郑士欣三弟子，为人温和内心热情奔放但外表却不善表达。仙剑的各种
武功他都已经学到了相当高的程度，所以平日负责教导第五代弟子剑
法。但近日却似乎有点意志消沈，似乎与他的两个师妹有关。\n");
        set("gender","男性");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",21);
        set("class","swordsman");
        set("nickname",HIW"气寒西北"NOR);
        set("title","仙剑派第四代三弟子");
        create_family("仙剑派",4,"弟子");
        set("inquiry",([        
    "梅影" : "她为什么不肯接受我呢...我等她那么久了...\n",
    "何双双" : "她是我的好师妹...但是我爱梅影在先...\n",
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
        set("sha-stop-3",1);
        set_skill("sword",90);
        set_skill("dodge",70);
        set_skill("sha-steps",90);
        set_skill("sha-array",80);
        set_skill("shasword",90);
        set_skill("shaforce",60);
        set_skill("parry",90);
        set_skill("literate",40);
        set_skill("move",80);
        set_skill("force",50);
        set_skill("array",70);
        set_skill("unarmed",40);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("sword","shasword");
        map_skill("force","shaforce");
        set("str", 30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps", 20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-3.c")->wield();
        carry_object("/open/gsword/obj/yu_cloak")->wear();
        carry_object("/open/gsword/obj/yu-armband")->wear();
        carry_object("/open/gsword/obj/yu-legging")->wear();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
  {
  command("say 不是我不跟你打,我怕出手太重会取你性命");
  return 0;
  }
 command("say 好,我也很久没跟人家过招了,拔剑吧!");
  return 1;
  }

int accept_kill(object who)
{
 who = this_player();
 set_skill("shasword",92);
 set("bellicosity",800);
 command("sigh");
 write(HIY"唐钰眼中闪着异样的光彩：我剑一出手就是你的死期！！\n"NOR);
 return 1;
}
         
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_3"))
        {
        command("say 师父说过,要收徒必需他的同意!");
        return 0;
        }
        command("hmm");
        command("say 好,我就收你为徒!");
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
	  new("/open/sky/obj6/sky_diamond")->move(environment(winner));
	  message_vision(HIM"\n从唐钰的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/sky_diamond",sprintf("%s(%s) 让唐钰掉下了天空之洁钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/sky_diamond")->move(environment(winner));
	  message_vision(HIM"\n从唐钰的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/sky_diamond",sprintf("%s(%s) 让唐钰掉下了天空之洁钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

