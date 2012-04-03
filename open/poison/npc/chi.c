#include <ansi.h>
 

inherit NPC;

void create()
{
	set_name("窃贼 小七", ({"chi"}) );
	set("gender", "男性");
	set("long","
一个偷偷摸摸的小贼，看他的样子好像是为了要寻找甚么稀世珍宝
而来。\n");
	set_skill("dodge",30);
	set("age", 21);
	set("str",22);
	set("con",21);
	set_skill("throwing",20);
	set_skill("unarmed", 20);
	set("max_kee",500);
	set("max_sen",310);
	set("max_gin",320);
	
	set("combat_exp",5000);
	set_temp("apply/armor",30);
	set_temp("apply/dodge",16);
	set("chat_chance",10);
	set("chat_msg", ({
		"小七贪婪的说道:听说魔教得到一样稀世珍宝。\n",
		"小七喃喃自语:不知监牢要怎样才能进入。\n",
		"小七微笑的对你说:你也是来寻宝的吗?\n",
		"小七偷偷对你说:听说宝物是藏在监牢中。\n",
}) );

	set("inquiry", ([
	 	"宝物" : "听说那宝物是叫炼甚么壶来着。\n",
		"监牢" : "要进监牢需要一把特殊的钥匙。\n",
		"钥匙" : "钥匙在谁身上那就不得而知了。\n",
]) );
 	setup();
	add_money("silver",1);
	carry_object("/open/poison/obj/boots.c")->wear();
	carry_object("/obj/cloth.c")->wear();
	carry_object("/open/poison/obj/ball.c")->wield();
}
	
  
