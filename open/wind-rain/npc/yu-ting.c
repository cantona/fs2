// by roger
inherit F_WIND_GUARD;
#include <ansi.h>
#include "wind-rain.h"
void create() {
        
        set_name("骆玉婷",({"lo yu-ting","lo"}));
        set("title","湜雨厅主");
        set("long",@LONG
   她是林静诗从外面收留的小姑娘, 
   对她情同姐妹, 也教 导她武功与
   学问, 是个十分上进的女孩.
LONG);
        set("age",20);
        set("str",30);
        set("int",30);
        set("spi",30);
        set("cor",30);
        set("kar",30);
        set("cps",30);
        set("race","人类");
        set("gender","女性");
        set("attitude","peaceful");
        set("class","fighter");
        set("max_gin",3000);
        set("max_kee",3000);
        set("max_sen",3000);
        set("max_force",5000);
        set("force",5000);
        set("force_factor",10);
        set("combat_exp",1000000);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("lo-steps",100);
        set_skill("move",100);
        set_skill("parry",100);
        set_skill("wind-rain",100);
        set_skill("literate",150);
        set_skill("beauty-fingers",100);
        set_skill("force",150);
        map_skill("unarmed","beauty-fingers");
        map_skill("dodge","lo-steps");
        map_skill("parry","wind-rain");
        map_skill("move","lo-steps");
        set("chat_chance", 10);
        set("chat_msg", ({
        "\n骆玉婷说 : 我是可爱的婷婷:D～～\n",
        "\n骆玉婷说 : 我今年还没有男朋友喔:)\n",
        }) );
        set("soldier_list",([
        "gold-guard":"金护卫(gold-guard)",
        "wind-guard":"风护卫(wind-guard)",
        "thin-guard":"细护卫(thin-guard)",
        "rain-guard":"雨护卫(rain-guard)",
        ]));
        set("soldier_lv",([
        "gold-guard":30,
        "wind-guard":25,
        "thin-guard":20,
        "rain-guard":15,
        ]));
        setup();
        carry_object(C_OBJ"/sun_red_cloth")->wear();
        add_money("gold",10);
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
	  new("/open/sky/obj10/peach_yin")->move(environment(winner));
	  message_vision(HIM"\n从骆玉婷的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/peach_yin",sprintf("%s(%s) 让骆玉婷掉下了桃灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/peach_yin")->move(environment(winner));
	  message_vision(HIM"\n从骆玉婷的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/peach_yin",sprintf("%s(%s) 让骆玉婷掉下了桃灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}



