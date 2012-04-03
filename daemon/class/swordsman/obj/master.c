#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
int ask_gonfu();
int sha_array3();
int sha_array4();
int sha_array8();
int check_mogi(object me)
{ 
 command("fear");
 message_vision(HIY"
$N惊恐的说：你这是中了魔域的剧毒「入灭”！因毒素潜藏奇经八脉之中
每隔一段时间会呕血不止，时间一长甚至会送命，当今只有「菩萨印第十式”
能化解此招！\n"NOR,this_object());
}

int pass(object me)
{ 
 command("sigh");
 message_vision(HIY"$N面带感伤，似乎想起了某件伤心往事...\n"NOR,this_object());
 message_vision(HIC"
$N缓缓的说：那是我年轻的时候的事了...当时仙剑祖师逍遥子尚未失踪，魔域突
然大举进犯人间，于是各门派便联手与魔兵奋战......
当时老夫年少轻狂，刚刚练成了仙剑至极之招---双十旋龙斩！
临阵对敌时，老夫为逞一时之勇，也想藉此机会展现此招的威力，于是顾不得此招尚
未完全熟练便使出了「双十旋龙斩”，但却误伤了少林的空性大师。而我也因此中门
大开被魔将以「入灭”暗中偷袭，从此以后每过十二个时辰老夫便呕血一次，命在垂
危。而空性大师得知此事，先以浑厚内力将自己的伤势强行镇压，再把自己的「菩萨
印第九式”推进到第十式为老夫疗伤，但自己却在三天后旧伤复发加上菩萨印威力无
法承受而圆寂了。故老夫发誓此生不再用双十旋龙斩。
至于你的伤是否能得救，赶快前去少林寺会见住持看看是否有办法。\n
"NOR,this_object());

}
string check_damage()
{
	object me = this_player();
	if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
	return "你中的是雪苍派的绝招「枯\叶残星掌”，这一掌劲道十分强，可见此人非泛泛之辈。\n";
	return "你有受伤吗 ?";
}
string cure_damage()
{
	object me = this_player();
	if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
	return "对于这个伤，我并没有把握，但是，据我所知，魔刀有研究过这部功夫。\n";
	return "你有受伤吗 ?";
}
void create()
{
set_name("郑士欣",({"master teng","teng","master"}));
set("long","他就是武林第一大宗师 :郑士欣。现正执掌仙剑门户，
同时身为剑士公会总会长。近十余年来，因仙剑七侠已
能独当一面，分担派内事务；而公会事务也由三长老柳
毅全权负责，郑士欣每天除了至藏经阁精研武学外，就
是在此接见外宾。\n");
	set("gender","男性");
	set("class","swordsman");
	set("nickname","无极真人");
            set("family/family_name","仙剑派");
            set("combat_exp",1400000);
            set("attitude","heroism");
            set("dragon-sword",1);
            set("bellicosity", 490);
	set("age",76);
	set("title","仙剑派第三代掌门人");
            set("str", 44);
            set("cor", 42);
	set("cps", 18);
	set("con", 24);
	set("int", 42);
            set("max_gin", 4000);
            set("gin",4000);
            set("max_kee", 5900);
            set("kee",5900);
            set("s_kee",1000);
            set("max_s_kee",1000);
            set("sec_kee","god");
	set("force",4400);
            set("max_force",4400);
            set("functions/sha_kee/level",100);
	set_skill("literate",40);
            set_skill("cure",50);
            set_skill("magic",20);
            set_skill("spells",20);
            set_skill("shasword",100);
	set_skill("shaforce",80);
            set_skill("sha-steps",100);
            set_skill("sha-array",100);	
	set_skill("array",100);
	set_skill("move",80);
	set_skill("force",50);
	set_skill("dodge",80);
	set_skill("parry",120);
	set_skill("sword",120);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
	set("force_factor",29);
	set("inquiry",([
  "仙剑后三式" : (: ask_gonfu :),
  "三才密招" : (: sha_array3 :),
  "四龙崩月" : (: sha_array4 :),
  "禁断连斩诀" : (: sha_array8 :),
  "锁元盒" : "这样东西似乎在二十年前左右就失落了，而它最后出现的地方好像是在雪苍山上。\n",
  "我的伤" : (: check_damage :),
  "疗伤" : (: cure_damage :),
  "仙剑剑阵" : "剑阵因人数不同有其不同阵招，「三才密招”「四龙崩月”「禁断连斩诀”等招 !!",
  "枯叶残星掌" : "这招是雪苍派的禁招之一，威力十分惊人，但是，这部功夫似乎在独孤愁死后就已经失传了。\n",
  "入灭" : "我年轻时对抗魔域入侵时曾中过此毒，九死一生幸得一位「高僧”施展菩萨印第十式为我解之，但是，唉...",
  "菩萨印第十式" : "此为少林佛门菩萨十式中的最高禁招，第十式威力实在太强，所以修练者若功力不足，会在
数日内反伤己身而死，故历代高僧非必要不会将\功力\推进到第十式。",
  "高僧" :  (: pass :),
	]));
	set("get_sha_sp", 1);
            set("bounds", 4000000);
	set("chat_chance_combat",90);
	
	set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
	}));
	setup();
	carry_object("/open/gsword/obj/dragon-sword.c")->wield();
		add_money("gold",10);
	create_family("仙剑派",3,"掌门人");
}

void init()
{
  object me = this_player();
  if(me->query_condition("mogi"))
  call_out("check_mogi",1,me);

        add_action("do_select","select");
        add_action("do_verify","verify");
}

int accept_fight(object who)
{

object guard, guard1;
 command("cmd god_kee");
 fight_ob(who);
 command("perform sword.sha_kee");
 return 1;
}

int accept_kill(object who)
{
 object guard, guard1;

 command("say 让你知道连阳剑的厉害！\n");
 set("have_kill_me",1);
 kill_ob(who);
 command("cmd god_kee");
 command("perform sword.sha_kee");
command("say 随风 ,语柔出来替老夫收拾这小伙子 !!");
     if(!present("dragon cloth")){ 
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();

        guard=new("/daemon/class/swordsman/boy.c");
        guard->move( environment() );
        guard1=new("/daemon/class/swordsman/girl.c");
        guard1->move( environment() );
}
        guard1->kill_ob(who);
        guard->kill_ob(who);

 return 1;
}


int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("open/gsword/obj/b1");
 if( arg!="sword")
{
    write("你要申请什么\n");
    return 1;
   }
if(me->query("family/family_name")!="仙剑派")
  {
    write("只有仙剑门徒才会有信物\n");
    return 1;
  }

 if( present(ob,me) )
  {
    write("你已经申请过了\n");
    return 1;
   }
   else
    {
     write("郑士欣说：这是仙剑派的信物 ,望你好好保存 ,切勿遗失了\n");
     ob->move(me);
     return 1;
    }
}

void attempt_apprentice(object ob)
{
	if(ob->query("marks/仙剑七侠")==1)
	{
	if((int)this_player()->query("combat_exp")<=100000)
	{
	command("? " +ob ->query("id"));
	command("say 你不是拜过我的弟子了?");
	command("say 以你的程度还不须我亲自指导!");
	command("say 好好跟着你师父多学几年吧!");
	return 0;
	}
	command("look "+ob->query("id"));
	command("smile");
	command("say 好,你果然是可造之才,从今后就由老夫亲自指导!");
	// Modify By Oda
	// 为了避免叛师被扣 skill, 先将玩家的 family 去掉
	ob->delete("family");
	command("recruit "+this_player()->query("id"));
	message("system",HIW"郑士欣纵声大笑: 
哈哈哈哈....老夫实在太高兴啦!
英雄出少年 ,"+this_player()->name()+": 今后就由老夫亲授于你.\n"NOR,users());
	return ;
	}
      command("hmm");
      command("say 我老啦 ,你去拜我的七个徒弟吧 !");
      command("say 我的七个弟子是 张乘风 张乘云 唐钰 赵鹤 梅影 何双双 李逍遥");
      command("say 你想拜(select)谁呢?");
      ob->set_temp("allow_select",1);
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
	if(str=="张乘风" ||  str == "chen fon" || str == "fon")
            {
	 message_vision(HIC"$N说道：张乘风\n"NOR,who);
 	 this_player()->set_temp("allow_1",1);
	 command("smile");
	 command("say 嗯 ,你就拜我的首徒张乘风吧!");
	 this_player()->set_temp("have_say",1);
	 return 1;
	}
	if(str == "张乘云" || str == "chen un" || str == "un")
	{
	message_vision(HIC"$N说道：张乘云\n"NOR,who);
	this_player()->set_temp("allow_2",1);
	command("smile");
	command("say 嗯 ,你就拜我的次徒张乘云吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "唐钰" || str == "teng yu" || str == "yu")
	{
	message_vision(HIC"$N说道：唐钰\n"NOR,who);
	this_player()->set_temp("allow_3",1);
	command("smile");
	command("say 嗯 ,你就拜我的三弟子唐钰吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "赵鹤" || str == "san hu" || str == "hu")
	{
	message_vision(HIC"$N说道：赵鹤\n"NOR,who);
	this_player()->set_temp("allow_4",1);
	command("smile");
	command("say 嗯 ,你就拜我的四弟子赵鹤吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "梅影" || str == "may ying" || str == "may")
	{
	message_vision(HIC"$N说道：梅影\n"NOR,who);
	this_player()->set_temp("allow_5",1);
	command("smile");
	command("say 嗯 ,你就拜我的女弟子梅影吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "何双双" || str == "cute girl" || str == "girl")
	{
	message_vision(HIC"$N说道：何双双\n",who);
	this_player()->set_temp("allow_6",1);
	command("smile");
	command("say 嗯 ,你就拜我的女弟子何双双吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	if(str == "李逍遥" || str == "shou_yau" || str == "yau")
	{
	message_vision(HIC"$N说道：李逍遥\n"NOR,who);
	this_player()->set_temp("allow_7",1);
	command("smile");
	command("say 嗯 ,你就拜我的七弟子李逍遥吧!");
	this_player()->set_temp("have_say",1);
	return 1;
	}
	command("say 没这人!");
	return 1;
	}
  
int  ask_gonfu()
{
  object me;
  me=this_player();
  if( me->query_skill("shasword",1) < 80 )
 write(" 你武\功需要再加强些 ,不要胡思乱想\n ");
 else if(me->query("bounds",1) < 4000 )
 write("你对本派贡献还不足 ,等够了我再告诉你吧\n");
 else 
    {
     write("好像有这\功夫 ,不过百年前已经失传 ,这样好了 ,你去藏经阁找找吧\n");
     new("/open/gsword/obj/pass")->move(me);
     write("这张通行证你拿去给乘云看 ,他就会让你进去的. \n");
     me->set_temp("allow_pass",1);
    }     	
     return 1;
}
	
int  sha_array3()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="仙剑派")
  command("say 你非仙剑弟子，恕不奉告");
  else command("say 其实这是我凭空想出来的，如果有一天有三个人同时会使用仙剑后三式
的话，试试此招也许可以融成绝招也说不定，前提是三人的剑阵修为必须要够。");
  return 1;
}	
int  sha_array4()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="仙剑派" )
  command("say 你非仙剑弟子，恕不奉告");
  else command("say 老夫因某种原因不使用双十旋龙斩，但我仍然想过将四人双
十同时施展如何合一的方法，但我自己也没试验过。");
  return 1;
}
int  sha_array8()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="仙剑派" )
  command("say 你非仙剑弟子，恕不奉告");
  else command("say 此招融合仙剑七侠的禁断绝招和老夫的剑诀，但我的弟子的平均
\功力\不够，所以此招列为仙剑的禁招之一。");
  return 1;
}
void unconcious()
{
   object winner = query_temp("last_damage_from");
   tell_object(users(),HIW"郑士欣吟道：\n\n\n            "HIW"‘"HIC"狂歌羡煞红尘客      笑叹人间几许愁 \n
              晓雾迷蒙秋渐冷      只恨云深愿未酬"HIW"’\n\n\n"HIW"今日败于"HIY+winner->query("name")+HIW"少侠之手，老夫心悦诚服，盼少侠能以一身绝学振兴武林!!\n"NOR);
   :: unconcious();
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),HIM"\n\n只见蜀山上朵朵"HIY"彩云"HIM"冉冉升起，刹为奇观\n\n\n"HIW"    一代剑术宗师「"HIC"郑士欣"HIW"”嗑然长逝了...\n\n"NOR);

        :: die();
}     		