// class_level: 多一些官制(清).... :>      ccat
// 县令从穷县升到富县,玩家可能会出现重复称号,但只是好玩,应没差... :>
#include <ansi.h>
#include "/open/open.h"
#define max "max"
#define min "min"
inherit NPC;
inherit F_MASTER;
mapping class_level = ([
        "翰林院编修"      : ([ max : 25 , min : 0 ]),
        "平杨县师爷"      : ([ max : 50 , min : 25 ]),
        "平阳县令"        : ([ max : 100 , min : 50 ]),
        "大同县令"        : ([ max : 150 , min : 100 ]),
        "凤祥县令"        : ([ max : 200 , min : 150 ]),
        "晋阳县令"        : ([ max : 300 , min : 200 ]),
        "桐城县令"        : ([ max : 400 , min : 300 ]),
        "杭州令"          : ([ max : 500 , min : 400 ]),
        "杭州知府"        : ([ max : 600 , min : 500 ]),
        "开封知府"        : ([ max : 700 , min : 600 ]),
        "广州知府"        : ([ max : 800 , min : 700 ]),
        "南京知府"        : ([ max : 900 , min : 800 ]),
        "九门提督"        : ([ max : 1000 , min : 900 ]),
        "云贵总督"        : ([ max : 2000 , min : 1000 ]),
        "两广总督"        : ([ max : 3000 , min : 2000 ]),
        "两江总督"        : ([ max : 4000 , min : 3000 ]),
        "礼部尚书员外郎"  : ([ max : 5000 , min : 4000 ]),
        "礼部尚书"        : ([ max : 6000 , min : 5000 ]), 
        "户部尚书"        : ([ max : 7000 , min : 6000 ]),
        "钦赐龙图阁大学士": ([ max : 8000 , min : 7000 ]), 
        "左丞相"          : ([ max : 9000 , min : 8000 ]),
        "右丞相"          : ([ max : 10000 , min : 9000 ]),
        "钦赐一等千里伯"  : ([ max : 15000 , min : 10000 ]),
        "钦赐二等万户侯"  : ([ max : 20000 , min : 15000 ]),
        "钦赐一等定北侯"  : ([ max : 25000 , min : 20000 ]),
        "钦赐二等护国公"  : ([ max : 30000 , min : 25000 ]),
        "钦赐一等鹿鼎公"  : ([ max : 40000 , min : 30000 ]),
        "钦赐特等平西王"  : ([ max : 50000 , min : 40000 ]),
        ]);
void create()
{
        set_name("陈知衡",({"master chen","chen"}));
        set("long",
        "他是本朝刑部兼吏部高官,主掌大理寺,负责全国司法与官员升等。\n"+ 
        "有关当官的一些指令以及制度等等的说明请(help officer).\n");
        set("gender","男性");
        set("class","officer");
        set("title","大理寺正卿");
        set("officer_class","大理寺正卿");
        set("officer_power",150);
        set("max_officer_power",150);
        set("guild_master",1);
        set("office_exp",10000);
        set("nickname","执法如山");
        set("officer_att","good");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("age",55);
        set("str", 30);
        set("con", 30);
        set("cps", 30);
        set("max_force",2500);
        set("force",2500);
        set("max_kee",3500);
        set("kee",3500);
        set_temp("apply/armor",150);
        set_skill("literate",80);
        set_skill("force",30);
        set_skill("dodge",40);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("dagger",90);
        set_skill("be-officer",120);
        set_skill("security",120);
        map_skill("be-officer","security");
        set_skill("dragon-dagger",90);
        map_skill("dagger","dragon-dagger");
        set_skill("chen-steps",60);
        map_skill("dodge","chen-steps");
        set_skill("oneforce",40);
        set_skill("chen-steps",60);
        map_skill("force","oneforce");
        map_skill("dodge","chen-steps");
        set("force_factor",10);
        setup();
        create_family("陈知衡",1," ");
        carry_object("/open/capital/obj/chen_dagger")->wield();
}

  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
        command("recruit "+ob->query("id"));
        ob->set("officer_class","大理寺郎中");
        ob->set("officer_power",10);
        ob->set("max_officer_power",10);
        ob->set("title","大理寺郎中");
        ob->set("relation/master chen/value",30);
        ob->set("relation/master chen/name","陈知衡");
        command("say 很好 ! 当了官就要知道如何当官，你先看看(help officer)吧。");
}
int check_class_level()
{
        string *cls = keys(class_level);
        object me = this_player();
        mapping limit;
        int i;
        for( i = 0 ; i < sizeof(cls) ; i ++ )
        {
          limit = class_level[cls[i]];
          if( me->query("title") != cls[i] && me->query("officer_class") == cls[i] ) 
             me->set("title",cls[i]);
          if( me->query("officer_class") == cls[i] ) continue;
          if( me->query("max_officer_power") >= limit["min"] && me->query("max_officer_power") < limit["max"] )
          {
             command("say 接圣旨!!!!");
             command("say 皇命召曰:  察 "+me->name(1)+" 任上表现良好,\n"+
                     "            特升任为 "+cls[i]+",钦此!!!");
             command("say 恭喜大人!!! 贺喜大人!!!");
             me->set("officer_class",cls[i]);
             me->set("title",cls[i]);
             return 1;
           }
        }
        // 自己的徒弟不宜称呼大人
        command("say 嗯 ! 你回来了 ! 很好 !");
        return 1;
}
void init()
{
   add_action("do_return","return");
// if( this_player()->query("family/master_id") == "master chen" )
   if( this_player()->query("class")=="officer" && userp(this_player()) )
     call_out("check_class_level",1);
}
int do_return()
{
        if( this_player()->query("class") != "officer" ) return 0;
//      if( this_player()->query("family/master_id")!="master chen") return 0;
    if( this_player()->query("age") < 18 ) {
                command("say 小伙子 ! 你还年轻，这么就想隐退，恐怕圣上会不允准哦 !");
                return 1;
                }
if( this_player()->query_skill("be-officer",1)< 50 ) {
                command("say 小伙子 ! 才当个那么一下官就想走了 ? 分明是没把老夫放在眼里 !");
                command("say 不行不行 ! 老夫不准 !");
                return 1;
        }
        if( this_player()->query_temp("return") == 0 )
        {
                command("say 你真的不想当官了吗 ? ");
                tell_object( this_player() , "请再下一次 (return) 确认。\n");
                this_player()->set_temp("return",1);
                return 1;
        }
        command("say 那么 .. 再会吧 !");
        this_player()->delete("class");
        tell_object( this_player() , "从今天起，你已经变成一个庶民。\n");
        this_player()->delete_skill("be-officer");
        this_player()->delete_skill("dragon-dagger");
        this_player()->delete_skill("security");
        this_player()->delete_skill("sha-array");
        this_player()->delete("max_officer_power");
        this_player()->delete("officer_power");
        this_player()->set("return",1);
        this_player()->delete("family");
        this_player()->set("have_officer",1);
        this_player()->delete("relation");
        this_player()->delete_skill("chen-steps");
        this_player()->delete_skill("oneforce");
        this_player()->set("title","普通百姓");
      this_player()->reset_action();
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
	  new("/open/sky/obj11/hiblue-crystal")->move(environment(winner));
	  message_vision(HIM"\n从陈知衡的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/hiblue_crystal",sprintf("%s(%s) 让陈知衡掉下了靛色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/hiblue-crystal")->move(environment(winner));
	  message_vision(HIM"\n从陈知衡的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/hiblue_crystal",sprintf("%s(%s) 让陈知衡掉下了靛色光晶于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}