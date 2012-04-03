// by poloer
#include </open/open.h>
#include <ansi.h>
#include <dragon.h>
inherit NPC;
inherit F_MASTER;
string ask_tesin();
void use_poison(object me, object viction);


void create()
{
    set_name(HIR"郑雨桥"NOR, ({"jen wu-cho", "jen"}));
    set("gender", "男性");
    set("title", "炎龙谷主");
set("clan_kill",1);
    set("nickname", HIB"暴王"NOR);
    set("age",20);
    set("long","\n看起来非常凶恶的人，脸上充满杀气。\n\n");
    set_skill("move",100);
    set_skill("force",100);
    set_skill("literate",100);
    set("quest/dragon",1);
       
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("chat_msg_combat", ({
                (: perform_action("skystrike.evil-blade") :),
        }));

        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("combat_exp",3000000);
        set_skill("skystrike",100);
set("kee",6000);
set("max_kee",6000);
        set("gin",3000);
        set("max_gin",3000);
        set("sen",3000);
        set("max_sen",3000);
        set("force",5500);
        set("force_factor", 15);
        set("max_force",6000);
        set("inquiry",([
        "龙铁心" : (:ask_tesin:),
        ]));
        set_skill("dodge",100);
        set_skill("unarmed",100);
        set_skill("nine-steps",100);
        set("functions/evil-blade/level",100);
        set("chat_chance_combat",15);
        set("limbs",({"头部","胸部","背部","腰部"}));
        map_skill("dodge","nine-steps");
        map_skill("unarmed","skystrike");
        setup();
// set("default_actions", (: call_other, __FILE__,"query_action" :));
// reset_action();
        carry_object(C_OBJ"/ghostar")->wear();
carry_object(C_OBJ"/dragon-tiger-circle")->wield();
        add_money("gold",50);
}


void greeting(object me)
{
 write(HIC"郑雨桥狂傲的说：
「柳家掌门都败在我的手里了，你还会比他强吗?”
「不过如果想找我较量，当然可以，阎罗王正招生呢！”
"NOR); 
}


void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "jen",environment(ob) );
 if(str=="askgod jen" || str=="askgod jen wu-cho"){
 write(HIY"炎龙谷主狂傲的说：「在本谷主面前求神问卜!?去问阎王吧。”受死吧!!\n"NOR);
 king->kill_ob(who);
 return 1;                                                 
                  }
}
void heart_beat()
{
        if( random(5) < 2 ){
        if(!is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
            if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
                           }
        }
        :: heart_beat();
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
	tell_object(users(),HIM"
       
      "HIW"炎龙谷主说:"HIG" 柳家的人终于来报仇了，冤冤相报何时了啊！
         

"HIG"不过今竟然败在"+HIW+winner->query("name")+HIB"之手真是不甘ㄚ\n"+NOR);

	winner->set("quest/dragon",1);
	new(C_OBJ"/key")->move(winner);

	tell_object(winner,HIW"郑雨桥说:冤冤相报何时了呀~
	罢了！我就把柳家的钥匙交给你吧！\n"NOR,this_player());

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/fire_emblem")->move(environment(winner));
	  message_vision(HIM"\n从郑雨桥的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/fire_emblem",sprintf("%s(%s) 让郑雨桥掉下了炎之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/fire_emblem")->move(environment(winner));
	  message_vision(HIM"\n从郑雨桥的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/fire_emblem",sprintf("%s(%s) 让郑雨桥掉下了炎之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}

         ::die();
      }
string ask_tesin()
{
 if (this_player()->query_temp("find_tesin6")==1)
  {
  this_player()->set_temp("find_tesin7",1);
  return ("龙铁心?早在十数年前..我趁他不注意的时候.封了他的穴.趁机把他关入柳家宝库的秘室中了");
  }
else if (this_player()->query_temp("find_tesin6")==2)
  {
  this_player()->set_temp("find_tesin7",2);
  return ("龙铁心?早在十数年前..我趁他不注意的时候.封了他的穴.趁机把他关入柳家宝库的秘室中了.");
  }
else if (this_player()->query_temp("find_tesin6")==3)
   {
  this_player()->set_temp("find_tesin7",3);
  return ("龙铁心?早在十数年前..我趁他不注意的时候.封了他的穴.趁机把他关入柳家宝库的秘室中了.");
  }


}


