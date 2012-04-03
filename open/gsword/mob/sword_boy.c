// guard.c

#include <ansi.h>

inherit NPC;

string ask_me(object who);
int tt=2;
int done = 0;
void create()
{        
	set_name("贪财小剑童", ({ "money boy", "boy" }) );
	set("gender", "男性" );
	set("age", 11);
	set("str", 15);
	set("cor", 35);
	set("cps", 25);
	set("int", 15);
	set("long",
		"一位仙剑派的小剑童,他似乎得不到师长的喜爱.\n"
		"他手上提着大包小包,他现正进城来买办.\n" );
        set("combat_exp",200);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		"小剑童说: 唉! 有钱真好.\n",
		"小剑童说: 学剑真无聊.\n",
		"小剑童说: 掌门剑法独步天下,还在蜀山设迷阵,真是无聊.\n",
	}) );
	set("inquiry", ([
		"money": " 你..你...你要给我吗? \n",
		"钱": " 有钱能使鬼推磨,难到你没听过吗?\n",
		"迷阵": "这是本门的密秘,你最好不要多问!!\n",
	]) );
        set_skill("parry", 5);
         set_skill("dodge", 5);
        set_skill("shasword", 2);
        map_skill("sword","shasword");
	setup();
	add_money("coin",100);
        carry_object("/open/gsword/obj/map1");
        carry_object("/open/gsword/obj/suit")->wear();
        carry_object("/open/gsword/obj/woodsword")->wield();
}
int accept_object(object who, object ob)
{   if(done)
   { return 1; }
   else {    
       if( ob->value() < 25 )
        {    say("贪财小剑童说: 就这么一点啊?\n");
             return 1; }
        else { if( tt  <1 )
                 {  say("小剑童说: 哈哈,赚了真多钱,我就告诉你一个密秘吧!!\n" 
                        + "          迷阵只要走 金木土水火 就可以通过了.\n");   
                    set_name("癞皮狗",({"urgly dog","dog"}));
                    set("inquiry", ([
                           "钱": "汪汪!!",
                                   ]));
                    set("long","一只丑陋的癞皮狗,身上满是脓胞和跳蚤.");
                    set("chat_msg", ({
                           "小狗呜噎:...汪...汪...汪...\n",
                           "小狗哀鸣:...呜...呜...呜...\n",
                           }));
                    message("vision",
                             HIY " 突然, 贪财小剑童大叫: 饶了我,师父!! 师父!!\n"
                             " 你见到一阵黑雾陇罩着贪财小剑童.\n"
                             HIR " 你简直不敢相信,贪财小剑童化为一只狗 !!!\n" NOR,
                             environment(), this_object() );
                   done =1 ;          
                } else {                                   
                    say("贪财小剑童说: 谢谢你了,再给一点吧!!\n");
                    tt--;  }
             return 1; }
             }
}                 	

