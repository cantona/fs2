// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
        
        set_name("炼阴女",({"locha queen","queen"}));
        set("long",
            "\n她是焚天魔王手下屈指一数的大将，端是冷艳无比，想过她这关似乎不简单。\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","女性");
        set("attitude","peaceful");
        set("class","fighter");
        set("bellicosity",3500);
        set("max_gin",6500);
        set("max_kee",17000);
        set("max_sen",6500);
        set("max_force",8000);
        set("force",9000);
        set("force_factor",45);
        set("combat_exp",5800000);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("literate",140);
        set_skill("mogi-steps",140);
        set_skill("move",160);
        set_skill("parry",160);
        set_skill("mogi-strike1",160);
        set_skill("force",160);
        set_skill("badforce",90);
        map_skill("unarmed", "mogi-strike1");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike1");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        setup();
        carry_object(C_OBJ"/lochagem")->wear();
        carry_object(C_OBJ"/ninepill");
        add_money("gold",15);
 }

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,queen;
 ob=this_object();
 queen=present( "queen",environment(ob) );
 if(str=="askgod queen" || str=="askgod locha queen"){
 write(HIY"炼阴女冷笑：「在魔王的地盘上面前求神问卜!?先问问魔王还差不多。”去死吧!!\n"NOR);
 queen->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("炼阴女说道 :美人不随便动手。\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("exert roar");
 command("kill "+who->query("id"));
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
	  new("/open/sky/obj11/black-crystal")->move(environment(winner));
	  message_vision(HIM"\n从炼阴女的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/black_crystal",sprintf("%s(%s) 让炼阴女掉下了黑色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/black-crystal")->move(environment(winner));
	  message_vision(HIM"\n从炼阴女的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/black_crystal",sprintf("%s(%s) 让炼阴女掉下了黑色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}