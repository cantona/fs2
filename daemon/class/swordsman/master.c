#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
int ask_gonfu();
int ask_reko();
int ask_yan();
int ask_bloodking();
int sha_array3();
int sha_array4();
int sha_array8();
int ask_wawafish();
int check_quest(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
else
{
command("hmm");
call_out("check_quest1",10,me);
}

}
 int check_quest1(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
else
{
 command("say 在你拿到「丽玉蝶兰”之后, 我想也不该再瞒你！");
   call_out("check_quest2",20,me);
}
}
 int check_quest2(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
else
{
 command("say 「开天三灵器”是血魔复出武林后,祖师爷消遥子为了封印血魔");
 command("say 而将其配剑,也就是传说中的「仙剑连阳”送给大剑师"HIW"龙铁心"NOR"！");
    call_out("check_quest3",30,me);
}
}
 int check_quest3(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
else
{
 command("say 而龙铁心则融合天外矿石将仙剑连阳分铸成灵剑、灵刀及灵笔！");
    call_out("check_quest4",15,me);
}
}
 int check_quest4(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
 else
{
 command("say 祖师爷拿到开天三灵器之后，便召集当时的刀神，与儒侠利用开天三才阵！");
 command("say 经过三天三夜的战斗后，血魔因为真气不继因而被开天三才阵困在天门奇阵中！");
    call_out("check_quest5",20,me);
}
}
 int check_quest5(object me)
{
if(!me) return 1;
if (environment(me)!=environment())
{
 command("think");
 me->delete_temp("appo");
 }
else
{
 command("say 这是我由师父那听来的，不过真实情形，还得问风青云师叔才会知道！");
 me->set("quests/shasword",2);
 me->delete_temp("quests/shasword");
}
}
int check_mogi(object me)
{ 
 command("fear");
 message_vision(HIY"
$N惊恐的说：你这是中了魔域的恐怖奇毒「入灭”！中此毒者因入灭之毒
滞留脑内每隔一段时间会头痛而呕血不止，时间一长必定会送命，当今只有「
千坟之水”能化解此毒！\n"NOR,this_object());
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
	set("combat_exp",3000000);
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
	set("max_gin", 10000);
	set("gin",10000);
	set("max_sen", 10000);
	set("sen",10000);
	set("max_kee", 10000);
	set("kee",10000);
	set("s_kee",1000);
	set("max_s_kee",1000);
	set("sec_kee","god");
	set("force",10000);
	set("max_force",10000);
	set("functions/sha_kee/level",100);
	set("functions/swordkee/level",100);
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
	set_skill("force",70);
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
  "专用武器" : (: ask_reko :),
  "三才密招" : (: sha_array3 :),
  "四龙崩月" : (: sha_array4 :),
  "禁断连斩诀" : (: sha_array8 :),
  "开天三才阵" : "这是传说中的阵法，据说得利用刀神，剑圣及儒侠三圣之力，才能使用。\n",
  "锁元盒" : "这样东西似乎在二十年前左右就失落了，而它最后出现的地方好像是在雪苍山上。\n",
  "我的伤" : (: check_damage :),
  "疗伤" : (: cure_damage :),
  "风青云" : (:ask_yan :),
  "血魔" : (: ask_bloodking :),
  "天门奇阵" : "这是困住血魔的不世阵法,当世似乎无人能破解\n",
  "仙剑剑阵" : "剑阵因人数不同有其不同阵招，「三才密招”「四龙崩月”「禁断连斩诀”等招 !!\n",
  "枯\叶残星掌" : "这招是雪苍派的禁招之一，威力十分惊人，但是，这部功夫似乎在独孤愁死后就已经失传了。\n",
  "入灭" : "我年轻时对抗魔域入侵时曾中过此毒，九死一生幸得一颗「千坟之水”解之，但是，唉...\n",
  "千坟之水" : "千坟之水乃魔域某守卫心脏内凝结之血, 剧毒无比. 但却有解除入灭奇毒的奇效\n",
  "连阳剑" : "...就是我手上这把阿...这是当初师父直传给我的。\n",
  "夜千鸟" : "这是开天三灵器的灵刀阿，我只知道当时是交给了风雨楼的人，至于是谁，我就不知道了....\n",
  "丽玉蝶兰" : "那是灵笔呀....听师父说...当初是传入儒门手中，只是当初儒门内鬨之时....好似被其他人夺走了......\n",
  "龙铁心" : "你说龙铁心ㄚ~~他是当时将先剑铸成三灵器的大剑师，我只听师父说过龙铁心剑师好像在魔界，不过就不确定在魔界哪了。\n"

        ]));
	set("get_sha_sp", 1);
	set("quests/sunfire",1);
	set("quest/sun_fire_sword",1);
	set("bounds", 4000000);
	set_temp("roared",1);
	set("chat_chance_combat",90);
	set("chat_msg_combat",({
	(: perform_action,"sword.sha_kee" :)
	}));
	setup();

	carry_object("/open/gsword/obj/dragon-sword.c")->wield();
	add_money("gold",10);
	carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
	create_family("仙剑派",3,"掌门人");
}

void init()
{
  object me = this_player();
  if(me->query_condition("mogi"))
  call_out("check_mogi",1,me);
  if(me->query("quests/shasword")==1 &&!me->query_temp("appo"))
  {
  me->set_temp("appo",1);
  call_out("check_quest",50,me);
}

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
/*
command("say 随风 ,语柔出来替老夫收拾这小伙子 !!");
        guard=new("/daemon/class/swordsman/boy.c");
        guard->move( environment() );
        guard1=new("/daemon/class/swordsman/girl.c");
        guard1->move( environment() );
        guard1->kill_ob(who);
        guard->kill_ob(who);
*/
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

int  ask_reko()
{
  object me;
  me=this_player();
  if( me->query("id") != "reko")
        return 0;
  else 
  {
    if (!present("reko sword",this_player()) )  //检查玩家是否有
             new("/data/autoload/killer/reko_sword.c")->move(me);
    write("天杀的小鬼，下次在弄丢就抓来打屁屁\n");
    return 1;
  }
}
  
int  ask_gonfu()
{
  object me;
  me=this_player();
  if( me->query_skill("shasword",1) < 80 )
 write(" 你武功需要再加强些 ,不要胡思乱想\n ");
 else if(me->query("bounds",1) < 4000 )
 write("你对本派贡献还不足 ,等够了我再告诉你吧\n");
 else 
    {
     write("好像有这功夫 ,不过百年前已经失传 ,这样好了 ,你去藏经阁找找吧\n");
     new("/open/gsword/obj/pass")->move(me);
     write("这张通行证你拿去给乘云看 ,他就会让你进去的. \n");
     me->set_temp("allow_pass",1);
    }           
     return 1;
}

int ask_bloodking()
{
  object me;
  me=this_player();
  if( me->query("bloodsword") != 1 )
command("say 血魔ㄚ...他在上次大战中已被封印在天门奇阵中了内了\n ");
  else
    {
   command("angry");
   command("say 你还说....血魔就是被你放出的...你还问我他到那去\n");
     me->set("kyaoo",2);
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
int ask_yan()
{
  object me;
  me=this_player();
  if( me->query("get_sha_sp")==1) command("say 风青云师叔～之前被你从焚天魔域救出之后..就到密室去了。\n ");
  return 1;
}
int  sha_array8()
{
  object me;
  me=this_player();
  if( me->query("family/family_name") !="仙剑派" )
  command("say 你非仙剑弟子，恕不奉告");
  else command("say 此招融合仙剑七侠的禁断绝招和老夫的剑诀，但我的弟子的平均
功力不够，所以此招列为仙剑的禁招之一。");
  return 1;
}

void heart_beat()
{
	object me=this_object();
	int i=me->query_busy(),j=i-1;

	if( me->is_fighting() && me->is_busy() )
	{
	  if( ( 5 > random(10) ) && ( random(5) == 2 ) )
	  {
	  message_vision(HIR"$N连阳气劲贯通全身任督二脉，竟然解开了身上部份被封的穴道。\n"NOR,me);
	  me->delete_busy();
	  me->start_busy(j);
	  }
	}
    set_heart_beat(1);
	::heart_beat();
}

void unconcious()
{
   object winner = query_temp("last_damage_from");
   if(!winner){
:: unconcious();
   return ;
   }
   tell_object(users(),HIW"郑士欣吟道：\n\n\n            "HIW"‘"HIC"狂歌羡煞红尘客      笑叹人间几许愁 \n
              晓雾迷蒙秋渐冷      只恨云深愿未酬"HIW"’\n\n\n"HIW"今日败于"HIY+winner->query("name")+HIW"少侠之手，老夫心悦诚服，盼少侠能以一身绝学振兴武林!!\n"NOR);
   :: unconcious();
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
	  new("/open/sky/obj2/justice_stone")->move(environment(winner));
	  message_vision(HIM"\n从郑士欣的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/justice_stone",sprintf("%s(%s) 让郑士欣掉下了正义石于 %s\n",winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj2/justice_stone")->move(environment(winner));
	  message_vision(HIM"\n从郑士欣的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/justice_stone",sprintf("%s(%s) 让郑士欣掉下了正义石于 %s\n",winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
        tell_object(users(),HIM"\n\n只见蜀山上朵朵"HIY"彩云"HIM"冉冉升起，刹为奇观\n\n\n"HIW"    一代剑术宗师「"HIC"郑士欣"HIW"”嗑然长逝了...\n\n"NOR);

        :: die();
}               
