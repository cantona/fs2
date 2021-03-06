#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("林宏升",({"master lin","master","lin"}));
	set("long","没有人知道他的来历，也没人知道他的武功有多深；是一个神密莫测的人物，"+
"在三年前因风云际会，使他创立了〔圣火教〕，也不知他是用何方法建立这个庞大的组织，"+
"也因为如此, 他被江湖上的人称为〔武林神话〕。\n");
	set("gender","男性");
	set("class","prayer");
 	set("nickname","武林神话");
        set("title","圣火教皇～～");
        set("combat_exp",5000000);
        set("attitude","heroism");
	set("age",75);
        set("max_kee",10000);
	set("str", 50);
	set("cor", 50);
	set("cps", 45);
	set("per", 30);
	set("int", 42);
	set("force",20000);
	set("max_force",20000);
	set("force_factor", 100);
        set("max_gin",2800);
        set("max_sen",2800);
        	set_skill("superforce", 180);
        	set_skill("cure", 120);
        	set_skill("dodge", 150);
	set_skill("force",180);
        	set_skill("move", 150);
        	set_skill("parry", 150);
        	set_skill("stick",150);
        	set_skill("unarmed",150);
        	set_skill("array",150);
        	set_skill("literate",150);
	set_skill("fire-catch",150);
	set_skill("shift-steps",150);
        	set_skill("universe",150);
        	map_skill("force","superforce");
	map_skill("dodge","shift-steps");
	map_skill("move","shift-steps");
	map_skill("parry","universe");
        	map_skill("stick","fire-catch");
        	map_skill("unarmed","universe");
        	set("functions/blood/level",60);
	set("chat_chance_combat", 40);
        	set("chat_msg_combat", ({
		(: perform_action("force.ball") :),
		(: perform_action("force.hand") :),
		(: perform_action("force.sword") :),
		(: exert_function("blood") :),
        }));
	setup();
	carry_object("/u/k/kael/fire-cmd");
	add_money("thousand-cash",10);
	create_family("圣火教",1,"教皇");
}

void init()
{
     	add_action("do_join","join");
    	add_action("do_select","select");
            add_action("do_verify","verify");
}

int do_verify(string arg)
{
 object me,ob;
me=this_player();
ob=new("open/sword/obj/b1");
if( arg!="prayer")
  {
    write("你要申请什么\n");
    return 1;
   }
if(me->query("family/family_name")!="圣火教")
  {
    write("只有圣火教徒才会有信物\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("你已经申请过了\n");
      return 1;
   }
   else
    {
     write("这是圣火教的信物 ,望你好好保存 ,切勿遗失了\n");
      ob->move(me);
         return 1;
         }
     }

void attempt_apprentice(object ob)
{
	if(ob->query("marks/圣火八天门")==1)
	{
	if((int)this_player()->query("combat_exp")<=500000)
     	return notify_fail(command("say 好好跟着你自己的师父多学几年吧!"));
	command("look "+ob->query("id"));
	command("pat");
	command("say 好,你果然是可造之才,你可以去找三位长老作为你武学的指导!");
	ob->delete("family");
	command("say 你想选择(select)哪一位长老呢?");
	command("say 传功长老(gonfu_elder)，执法长老(lawyer_elder)还是戒律长老(behavior_elder)？");
	ob->set_temp("allow_select",1);
	return 1;
            }
	if(ob->query("marks/圣火三长老")==1)
	{
	if((int)this_player()->query("combat_exp")<=1800000)
     	return notify_fail(command("say 以你的程度还不够资格跟我学习武学与教务的处理吧!"));
	command("look "+ob->query("id"));
	command(":)");
	command("say 好,你果然不是泛泛之辈,你可以去找教内的文武星君作为你武学的指导!");
	ob->delete("family");
	command("say 你可以选择武星君(warrior)或是文星君(literate)");
	ob->set_temp("allow_select",1);
	return 1;
            }
	if(ob->query("marks/文武星君")==1)
	{
	if((int)this_player()->query("combat_exp")<=3500000)
     	return notify_fail(command("say 好好跟着文武星君多磨练磨练吧!"));
	command("look "+ob->query("id"));
	command("pat"+ob->query("id"));
	command("say 好,你果然是可造之才,从今后就由本教主亲自教导!");
	ob->delete("family");
	command("recruit "+this_player()->query("id"));
	message("mud",HIW"〔圣火教皇〕林宏升笑道:\n 
	哈哈哈哈....本教主实在太高兴啦!\n
	圣火教徒,"+this_player()->name()+": 今后就跟着本教主好好学习如何管理教务吧.\n"NOR,users());
	ob->set("marks/圣火教主",1);
      　ob->set("title","[31m圣火教嫡传弟子[0m");
	return 1;
	}
        command("hmm");
	command("say 我教务繁忙 ,你去找圣火八天门的门主吧 !");
	command("say 你想进入(select)哪一门呢?");
	command("say 你可以选择天机门(tangi)，天枢门(tanshu)，天权门(tanchun)");
	command("say 你可以选择天璇门(tanshun)，玉衡门(uhen)，开阳门(kiyan)");
	command("say 你可以选择瑶光门(youkoun)，阵势门(zhenche)");
	ob->set_temp("allow_select",1);
            }

int do_join()
	{
	if(this_player()->query("class"))
		return notify_fail("你已经加入其他工会了。\n");
	this_player()->set("class","prayer");
	message("mud",HIW "林宏升纵声大呼 :\n
	欢迎" +this_player()->name()+"加入圣火教公会!!\n\n"NOR,users());
	return 1;
}
int do_select(string str)
	{
	object who;
	who=this_player();
	if(!who->query_temp("allow_select"))
	{
	command("say 我又没答应让你挑? ");
	return 1;
	}
	if(who->query_temp("have_say")==1)
	{
	message_vision(sprintf(HIC"$N说道："+str+"\n"NOR),who);
	command("say 你不是挑过了?");
	return 1;
	}
	if(str=="天机门" ||  str == "tangi")
        {
	 message_vision(HIC"$N说道：天机门\n"NOR,who);
	this_player()->set_temp("allow_1",1);
	command("smile");
	command("say 嗯 ,你就去加入天机门吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "天枢门" || str == "tanshu")
	{
	message_vision(HIC"$N说道：天枢门\n"NOR,who);
	this_player()->set_temp("allow_2",1);
	command("smile");
	command("say 嗯 ,你就加入天枢门吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "天权门" || str == "tanchun")
	{
	message_vision(HIC"$N说道：天权门\n"NOR,who);
	this_player()->set_temp("allow_3",1);
	command("smile");
	command("say 嗯 ,你就进去天权门修练吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "天璇门" || str == "tanshun")
	{
	message_vision(HIC"$N说道：天璇门\n"NOR,who);
	this_player()->set_temp("allow_4",1);
	command("smile");
	command("say 嗯 ,你就到天璇门好好磨练吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "玉衡门" || str == "uhen")
	{
	message_vision(HIC"$N说道：玉衡门\n"NOR,who);
	this_player()->set_temp("allow_5",1);
	command("smile");
	command("say 嗯 ,你就加入玉衡门吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "开阳门" || str == "kiyan")
	{
	message_vision(HIC"$N说道：开阳门\n",who);
	this_player()->set_temp("allow_6",1);
	command("smile");
	command("say 嗯 ,你就前往开阳门学习吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "瑶光门" || str == "youkoun")
	{
	message_vision(HIC"$N说道：瑶光门\n"NOR,who);
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say 嗯 ,你就前去瑶光门拜师学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "阵势门" || str == "zhenche")
	{
	message_vision(HIC"$N说道：阵势门\n"NOR,who);
	this_player()->set_temp("allow_8",1);
	command("smile");
	command("say 嗯 ,你就前去阵势门拜师学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "传功长老" || str == "gonfu" || str == "gonfu_elder")
	{
	message_vision(HIC"$N说道：传功长老\n"NOR,who);
	this_player()->set_temp("allow_9",1);
	command("smile");
	command("say 嗯 ,你就去传功长老那儿学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "执法长老" || str == "lawyer" || str == "lawyer_elder")
	{
	message_vision(HIC"$N说道：执法长老\n"NOR,who);
	this_player()->set_temp("allow_10",1);
	command("smile");
	command("say 嗯 ,你就去执法长老那儿学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "戒律长老" || str == "behavior" || str == "behavior_elder")
	{
	message_vision(HIC"$N说道：戒律长老\n"NOR,who);
	this_player()->set_temp("allow_11",1);
	command("smile");
	command("say 嗯 ,你就去戒律长老那儿学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "武星君" || str == "warrior")
	{
	message_vision(HIC"$N说道：武星君\n"NOR,who);
	this_player()->set_temp("allow_12",1);
	command("smile");
	command("say 嗯 ,你就去武星君那儿学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "文星君" || str == "literate")
	{
	message_vision(HIC"$N说道：文星君\n"NOR,who);
	this_player()->set_temp("allow_13",1);
	command("smile");
	command("say 嗯 ,你就去文星君那儿学艺吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	command("say 没这人!");
	return 1;
	}
void greeting(object ob)
{
	if (ob->query_skill("coldpoison", 1))
//	if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
      {
       command("say 教主有令！！凡是学有毒术之人，杀无敕！！");
        kill_ob(ob);
     }
       if( ob->query("class")=="dancer")
        {
        command("say 教主有令，见到舞者-----格杀勿论！！");
        kill_ob(ob);
     }
    return;
}
  
