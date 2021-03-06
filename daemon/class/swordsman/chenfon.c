#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("张乘风", ({"chen fon","fon"}));
        set("long","郑士欣首徒,张乘风二十余年来行侠仗义,早已名满天下,近十余年,
由于掌门人郑士欣遣心于研究仙剑剑法,仙剑派有关迎宾,接客,收
徒等事,皆由乘风负责,乘风处事得体,见识广范,一手仙剑剑法已
达宗师火侯,看来,下任掌门非他末属.\n");
        set("gender","男性");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",46);
        set("class","swordsman");
        set("nickname","风云双侠");
        set("title","仙剑派第四代大弟子");
        create_family("仙剑派",4,"弟子");
        set("score",100000);
        set("sha-stop-1",1);
        set("force",1200);
        set("max_force",1200);
        set("force_factor",10);
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set_skill("sha-array",80);
        set_skill("shaforce",50);       
        set_skill("force",50);
        set_skill("sha-steps",80);
        set_skill("cure",40);
        set_skill("shasword",85);
        set_skill("sword",90);
        set_skill("dodge",80);
        set_skill("parry",100);
        set_skill("move",80);
        set_skill("array",80);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
        map_skill("sword","shasword");
        map_skill("force","shaforce");
        set("str", 30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-1.c")->wield();
        carry_object("/open/gsword/obj/nine_hat.c")->wear();
        add_money("gold",5);
}

 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=100000)
  {
  command("say 刀剑无眼,伤了你就不好了");
  return 0;
  }
  command("say 出招吧!");
  return 1;
 }
        void attempt_apprentice(object ob)
        {
        if(!ob->query_temp("allow_1"))
        {
        command("say 师父说过,不能乱收弟子!");
        return 0;
        }
        command("smile");
        command("say 既然师父答应了,我就收你为徒吧!");
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
	  new("/open/sky/obj6/sun_diamond")->move(environment(winner));
	  message_vision(HIM"\n从张乘风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/sun_diamond",sprintf("%s(%s) 让张乘风掉下了太阳之光钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/sun_diamond")->move(environment(winner));
	  message_vision(HIM"\n从张乘风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/sun_diamond",sprintf("%s(%s) 让张乘风掉下了太阳之光钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

