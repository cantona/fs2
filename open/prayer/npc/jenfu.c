#include <ansi.h>

#include "/open/open.h"
inherit NPC;

string answer_head()
 {
 int head;
 head=this_player()->query("head",1);
   return sprintf("你一共杀了%d个铁血队员!!\n",head);
  }

int head;

void create()
{
	object ob;
	set_name("任  褔",({"older man","older","man"}));
	set("long","他是专门兑换铁血部队人头的任家老奴. \n");
	set("gebder","男性");
	set("title","任家老奴");
	set("combat_exp",100);
        set("attitude","friendly");
	set("age",60);
	set("str",40);
        set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",40);
        set("inquiry",([
        "铁血":(: answer_head :)
        ]));
        set("list",([
        "金刚指环": ([
                "local":"/open/snow/obj/figring",
	    "head": 50,
                "amount":10,
                "id":"figring",
                ]),
        "红宝石戒指": ([
                "local":"/open/gsword/obj/ring-1",
	    "head": 30,
                "amount":10,
                "id":"ruby_ring",
                ]),
	"雪莲丹": ([
                "local":"/open/gsword/obj/ff_pill",
                "head": 10,
                "amount":100,
                "id":"pill",
                ]),
	"日轮碎星破": ([
                "local":"/daemon/class/fighter/star",
                "head": 50,	     
	    "amount":10,
                "id":"destoryer",
                ]),
        	"冰雪神戒":([
                "local":"/open/ping/obj/ring-2",
                "head": 35,
	    "amount": 20,
                "id":"ice_ring",
                ]), 
        	"邪云神扇": ([
                "local":"/open/ping/obj/fan-1",
	    "head": 35,
                "amount":20,
                "id":"evil_fan",
                ]),
]));

	setup();
}

void init()
{
	add_action("do_list","list");
	add_action("do_want","want");
}
int do_list(object me)
{
	string *name;
	int i;

        me=this_player();
        name = keys(query("list"));
	tell_object(this_player(),"目前所能换到的奖品: \n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}

int do_want(string weapon)
{
	object ob;
	if(this_player()->query("head")<=10)
            {
	command("say 想要赏赐就多杀一点敌人呀!!\n");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say 你想要什么赏赐?\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
		command("say 这样东西现在缺货。\n");
		return 1;
	}
 if (this_player()->query("head") < query("list/"+weapon+"/head") ) {
    sprintf("你一共杀了%d个铁血队员!!\n", head);
    command("say 等你铁血杀够了再来换吧!\n");
      return 1;  
  }
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(1);
        add("list/"+weapon+"/amount",-1);
	this_player()->add("head",-query("list/"+weapon+"/head"));
            ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
	message_vision( "$N拿给$n所要的"+ob->name()+"\n",this_object(),this_player());
		return 1;  
}
