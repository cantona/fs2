#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string askwho();
string askcard();
string askkee();

void create() 
{
            object ob;
            set_name("神秘男子",({"special man","man"}));
            set("long","他是名震江湖的一代杀手，黑牙联的头目。\n");
            set("gender","男性");
            set("class","killer");
            set("combat_exp",6000000);
            set("attitude","heroism");
            set("age",50);
            set("str", 99);
            set("cor", 99);
            set("cps", 99);
            set("per", 99);
            set("int", 99);
	    set("kee",4000);
	    set("max_kee",4000);
	    set("gin",1200);
	    set("max_gin",1200);
	    set("sen",1200);
	    set("max_sen",1200);
	    set("atman",1300);
	    set("max_atman",1300);
	    set("mana",1400);
	    set("max_mana",1400);
            set("force",5000);
            set("max_force",5000);
            set_skill("force",100);
            set_skill("move",100);
            set_skill("throwing",100);
            set_skill("shade-steps",120);
            set_skill("rain-throwing",120);
	    set_skill("spells",50);
	    set_skill("magic",60);
            set_skill("dagger",120);
            set_skill("dodge",120);
	    set_skill("shadow-kill",100);
	    set_skill("blackforce",90);
            	map_skill("dagger","shadow-kill");
		map_skill("throwing","rain-throwing");
		map_skill("dodge","shade-steps");
		map_skill("force","blackforce");
		map_skill("move","shade-steps");
		set_temp("apply/armor",70);
		set("force_factor",10);
set("inquiry",([ 
    "你是谁" : (: askwho :),
    "蓝凤绝杀令" : (: askcard :),
    "杀意魔气" : (: askkee :),
]));

setup();
// 这代表设定他为第二代主席  
//create_family("黑牙联",2,"主席");
carry_object("/open/killer/obj/dagger")->wield();
}

string askwho()
{
	if (this_player()->query_temp("head") != 8)
		return "哼。。。作弊来到此处，也想问我是谁？";
	else
	{
		this_player()->set_temp("askwho",1);
		command("say 哈哈。。。我是谁？唉。。。这也难怪，我消失也已经有十来年了吧？");
		command("say 小子，看你的装扮应该是新生代特级杀手吧！");
		command("say 难得你有办法来到这里，好吧，老夫就是叶孤城");
		return "你有什么事情找老夫呢？，是为了(蓝凤绝杀令)吗？";
	}
}

string askkee()
{
	if (this_player()->query("quest/head-kill") != 1)
		return "哼。。。凭你也配拥有杀意魔气？";
	if (this_player()->query("sec_kee") == "mkill")
		return "少年的，你耍我呀！你不是有杀意魔气了吗？";
	else
	{
		command("say 傻孩子，别乱放弃杀手的灵气！就让我赐你吧！\n");
		message_vision("$N由掌心窜出一道紫气射入$n体内。\n",this_object(),this_player());
	this_player()->set("sec_kee","mkill");
	}
}
string askcard()
{
	object obj;

	if (this_player()->query_temp("head") != 8)
		return "哼。。。作弊来到此处，也想找我要蓝凤绝杀令？";
	else
	{
		if (this_player()->query_temp("askwho") != 1)
			return "你又不知道他是谁，居然乱找人要蓝凤绝杀令";
		command("nod");
		command("say 难得你有办法来到这里，就给你蓝凤绝杀令吧！");
		obj = new("/open/killer/headkill/obj/bluekill.c");
		obj->move(this_player());
		message_vision("$N给$n一张"+obj->name()+"。\n",this_object(),this_player());
		command("say 利用蓝凤绝杀令去追杀<杀手全力追杀的人头>，使用法就写在它上面");
		command("say 既然来到这里，就让老夫助你一臂之力，让你可以再次突破魔气杀的限制吧!");
message_vision("叶孤城迅速在你身上拍击，送入内力，让你体内魔气杀限制再次突破",this_player());
		this_player()->set("upkee",1);
		this_player()->set_temp("head",9);
		return "打pass way就可以离开这里！";
	}
}
		
int accept_fight(object ob)          
{
	command("say 你是真的要跟我挑战吗??\n");
	message_vision( this_object()->name()+"脸上一副鄙视的样子。\n",ob);
	return 0;
}

int accept_kill(object ob)
{
	command("say 没想到你真有勇气, 敢跟我挑战!!!\n");
	message_vision( this_object()->name()+"突然变脸，脸上出现杀气。\n",ob);
	this_object()->set("bellicosity",5000);
	command("cmd bellup");
	return 1;
}
