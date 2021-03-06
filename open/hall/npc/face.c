inherit NPC;
inherit F_MASTER;
#include <ansi.h>

void create()
{
        set_name("冷面煞", ({ "cool face", "cool", "face" }) );
        set("title", "县衙捕头统领");
        set("nickname", "[1;31m血剑[0m");
        set("gender", "男性" );
        set("age", 46);
        set("str", 50);
        set("cor", 50);
        set("cps", 50);
        set("int", 50);
        set("spi", 50);
        set("kar", 50);
        set("per", 50);
        set("con", 50);

        set("max_atman", 5000);
        set("max_force", 5000);
        set("max_mana", 5000);
        set("atman", 5000);
        set("force", 5000);
        set("mana", 5000);
        set("force_factor", 5);

        set("long",@LONG
    这是一位相貌堂堂的男子，没有人知道他的来历～但他高深莫测的
武功却使他能摄服每一个和他较量过的人，他的武功之高....实是不能
用言语形容之。
LONG);

        set("combat_exp", 900000);
        set("score", 20000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
        "哈哈哈～～小子!!看看‘魂天八式’的厉害!!!!\n"
        "让你知道天有多高地有地厚!!小子!!\n"
        }) );

        set_skill("unarmed", 60);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set("inquiry", ([
          "赤血剑" : "你想试剑吗～～",
          "thief"  : "可恨我有要事在身, 不能亲手逮捕那京城大盗。",
        ]) );

        setup();
        carry_object(__DIR__"obj/redsword")->wield();
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
	  new("/open/sky/obj10/banyan_yin")->move(environment(winner));
	  message_vision(HIM"\n从冷面煞的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/banyan_yin",sprintf("%s(%s) 让冷面煞掉下了榕灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/banyan_yin")->move(environment(winner));
	  message_vision(HIM"\n从冷面煞的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/banyan_yin",sprintf("%s(%s) 让冷面煞掉下了榕灵之印于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

