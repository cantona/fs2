// 隐世高人

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
  object ob;
	set_name("[33m于万庭[0m", ({"master uh","master","uh"}));
        set("nickname","[36m刀神剑仙十三鞭[0m");
	set("long",@LONG

	他在少年之时, 精通诸般武学, 尤其以刀, 剑, 鞭三
	者为最!!性情温和, 喜欢将具有资质者调教成为武艺
	高强的菁英份子!!与圣火教的副教主是结义的兄弟!!
	隐居之后自成一派, 自称为 [广成派] !!

LONG);
	set("gender","男性");
        set("class","prayer");
        set("title","隐世高人");
	set("combat_exp",4500000);
        set("attitude","heroism");
	set("age",73);
        set("kee",9500);
        set("max_kee",9500);
	set("force",10000);
	set("max_force",10000);
	set("force_factor",35);
        set("max_gin",6800);
        set("max_sen",6800);
        set_skill("dodge", 60);
	set_skill("sword", 300);
	set_skill("blade", 300);
	set_skill("whip", 300);
	set_skill("cure",65);
	set_skill("literate",65);
	set_skill("force",90);
        set_skill("move", 70);
        set_skill("parry", 70);
        set_skill("stick",55);
        set_skill("unarmed", 90);
	setup();
	create_family("广成派",1,"掌门");
}

int accept_kill(object ob)
{
        command("smile");
	command("say 老夫救了你, 你想要以怨报德吗??\n");
        return 0;

}

void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
        call_out("greeting",1,ob);
        add_action("do_nod","nod"); 
        add_action("do_thx","thx");
        }
}

void greeting(object ob)
{
        if (ob->query_temp("high-man") == 4 )
        {
        write("\n[36m呵呵, 这位小兄弟醒了嬷??你的命真大!!幸亏是我路过此地!!否则你的小命就没啰!![0m\n");
        write("\n你的伤势颇重, 好好地休养吧!!\n");
        ob->set_temp("high-man", 5);
        return; 
        }
}

int do_thx()
{
	object ob=this_player();
	if ( ob->query_temp("high-man") == 5 )
        {
        write("\n[36m老夫与你也算是有缘了, 看你的资质也不错, 就传你一些功力以为防身之用吧!!不过你下山后, 可不要向人提任何只字片语!!懂吗(nod)??[0m\n");
        ob->set_temp("high-man", 6);
        return 1;
        }
	else
        {
	return 0;
	}
}

int do_nod()
{
	object ob = this_player();
	int lv  = (int)ob->query("cor");
	int lv1 = (int)ob->query("con");

        if( ob->query_temp("high-man") < 6 && ob->query("quests/high-man") )
        {
	return 0;
	}
	else
        {
	write("\n[36m嗯!!那老朽这就开始传功了!!,,,,,,,,,,,,,,[0m\n");
	ob->add("max_force", (lv+lv1)*5);
	ob->add("combat_exp", (lv+lv1)*1200); 
	ob->set_skill("sword", 30);
	ob->set_skill("blade", 30);
	ob->set_skill("whip", 30);
	ob->set("quests/high-man",1);
	ob->delete_temp("high-man");
        return 1;
	}

}
