// 编改master_ba , 增加进入邪灵界的限制string ask_evil(), 2001/8/8 write by Firedancer
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string ask_blade();
string ask_yuan();
string ask_test();

string ask_yan();
string ask_lotch();
string ask_mogi();
string do_special_fight();
string ask_evil();
void create()
{
        set_name("王元霸",({"master ba","ba","master"}));
        set("long","他就是名震江湖的金刀无敌王元霸。\n");
        set("gender","男性");
        set("class","blademan");
        set("nickname","金刀无敌");
        set("combat_exp",2000000);
        set("attitude","heroism");
        set("env/连击","YES");
        set("age", 50);
        set("str", 45);
        set("cor", 30);
        set("cps", 30);
        set("per", 20);
        set("int", 40);
        set("max_gin", 5000);
        set("gin", 5000);
        set("max_kee", 5000);
        set("kee", 5000);
        set("max_sen", 5000);
        set("sen", 5000);
        set("force",4000);
        set("functions/gold-dest/level",100);
        set("functions/fast-dest/level",100);
        set_skill("literate",40);
        set("max_force",4000);
        set_skill("magic",20);
        set_skill("spells",20);
        set_skill("move",60);
        set_skill("force",90);
        set_skill("dodge",60);
        set_skill("parry",90);
        set_skill("blade",120);
        set_skill("riding",100);
        set_skill("gold-blade",100);
        set_skill("sixforce",100);
        set_skill("cure", 60);
        set_skill("fast-blade", 100);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("force","sixforce");
        set_temp("apply/armor",100);
        set("force_factor",15);
        set("inquiry",([
        "炼妖壶"   :  (: ask_lotch :),
       "试炼印记" : (:ask_test:),
        "陈元贵"   :  (: ask_yuan :),
        "血魔"     :  "你说那大魔头ㄚ~~~我听先师说过已被仙剑祖师同先师与儒道两家合力封印~~~不过该场战役下来....仙剑祖师就不知所踪...而其后继者则惨遭血魔弟子焚天囚禁...而儒道两家的情况如何...这就不得而知了~~~",
        "风青云"   :  (: ask_yan :),
        "龙虎刀"   :  (: ask_blade :),
        "九字真言" :  (: ask_mogi :),
	"震邪道"   :  (: ask_evil :),
        ]));
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
        (: do_special_fight :),
    }));
        setup();
        create_family("金刀门",5,"门主");
        carry_object("/daemon/class/blademan/obj/gold-blade")->wield();
        add_money("gold",10);
}

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() ) 
	{
           remove_call_out("greeting");
           call_out("greeting",2,ob);
        }
}

string ask_evil()
{
object me,ob;
	me=this_player();
	ob=this_object();
	message_vision(
HIY"$N露出十分讶异的表情～\n"NOR"

"HIW"$N说道：$n想闯〔震邪道〕吗？嗯～我先考虑一下...\n\n"NOR,ob,me);
	call_out("do_evil",2,me);
return "......\n";
}

int do_evil()
{
object me,ob;
string arg;
int exp;
	me=this_player();
	ob=this_object();
	exp=(int)me->query("combat_exp");
	if(me->query_temp("evil/g_temp/ask"))
	{
		arg="王元霸不耐烦的说：你还缺";
		if(!me->query_temp("evil/g_temp/gold"))
			arg = arg +" 100 两黄金 ";
		if(!me->query_temp("evil/g_temp/iron"))
			arg = arg +" 百炼丹金 ";
		if(!me->query_temp("evil/g_temp/tooth"))
			arg = arg +" 红身狼牙 ";
		arg = arg +"没给我...\n";
		message_vision(arg+"\n
\n$N说道：如果找不到，就不要浪费我的时间，我可忙的很～\n",ob);
		return 0;
	}
	if(exp <= 500000)
	{
		message_vision("
$N说道：我考虑好了～你的能力还不够，我不能让你白白送死！

              抱歉，恕我不能答应你，$n请回吧。\n",ob,me);
	}
	else
	{
		message_vision("
$N说道：嗯～$n的能力应该够了，不过我还是要测试一下。

　　　　　　　如果$n能将〔百炼丹金〕与〔赤身狼牙〕带来给我，再加上100两黄金的话...

	      我就将通关物品--黄金印给你。\n",ob,me);
		me->set_temp("evil/g_temp/ask",1);
	}
return 1;
}


string do_special_fight()
{

        if( query_skill_mapped("blade") == "fast-blade" ) {
            command("perform blade.fast-dest");
            map_skill("blade", "gold-blade");
        }
        else if( query_skill_mapped("blade") == "gold-blade" ) { 
            command("perform blade.gold-dest");
            map_skill("blade", "fast-blade");
        }
        command("perform blade.gold-dest");
        return "";
}

void attempt_apprentice(object ob)
{
if(this_player()->query("class")!="blademan")
        {
                command("say 你不是我们刀客 ,老夫焉能授艺于你 ?\n");
                return;
        }
if(this_player()->query("family/family_name")=="魔刀门"||this_player()->query("family/family_name")=="魔刀莫测")
{
        command("say 你是魔刀人，所以我不能收你。\n");
            return;
}
        command("smile");
       command("recruit "+ob->query("id"));
        ob->set_temp("being-apprentice",1);
        call_out("do_act1",2,this_player());
}
        int do_act1(object ob)
    {
    say("王元霸双掌拍了几下 .\n");
        call_out("do_act3",1,ob);
    }
        int do_act2(object ob)
    {
    say("一个小童捧了个盘子从内室走出 .\n");
        call_out("do_act3",1,ob);
    }
        int do_act3(object ob)
    {
    object boy;
    boy=new("/open/gblade/npc/boy");
        say("一个小童捧了个盘子从内室走出 .\n");
        boy->move("/open/gblade/room/gblade");
        call_out("do_act4",6,ob);
    }
        int do_act4(object ob)
    {
     say("王元霸接过盘子 ,左手一挥 ,说道 : 退下吧 !\n");
        call_out("do_act6",4,ob);
    }
        int do_act5(object ob)
    {
        object money;
     message_vision("王元罢从盘子中取出一两银子 ,交给$N !\n",ob);
        command("say 这就当做见面礼吧 !");
        money=new("/obj/money/gold");
        money->move(ob);
        call_out("do_act6",4,ob);
    }
        int do_act6(object ob)
{
        object blade;
        blade=new("/open/gblade/obj/g-blade");
        blade->move(ob);
        message_vision("王元霸从盘子里取出一把金光闪闪的小刀 ,放在$N手中 .\n",ob);
     command("say 这是咱们金刀门的信物 ,务必妥善保存 !");
        call_out("do_act7",3,ob);
    }
    int do_act7(object ob)
    {
command("say 金刀门一向主持正义 ,除暴安良 .");
command("say 尤其是魔教徒 ,以后遇上了 ,绝对不可放过 ,知道吗 ?");
        call_out("do_act8",3,ob);
      }
      int do_act8(object ob)
      {
        command("smile "+ob->query("id"));
    command("say 好啦 ,以后好好认真跟我学习吧 !");
        ob->delete_temp("being-apprentice");
   return 1;
    }
void greeting(object ob)
{
   if(!ob) return ;
  if(ob->query("family/family_name")=="金刀门")
  {
  if(!present("gold blade",ob))
  {
  new("/open/gblade/obj/g-blade")->move(ob);
        command("hmm");
        command("say 你把小金刀弄丢了吧 ?");
        command("say 再给你一把 , 别再弄丢啰 !");
        message_vision("王元霸从怀中取出一把小金刀 , 交到$N手中\n",ob);
  }
  }
}
string ask_lotch()
{
        if(!present("lotch",this_player())&&this_player()->query("quests/lotch"))
        {
        command("say 唉 , 年轻人真不小心 , 如果炼妖壶为邪魔歪道所得 , 那就遭啰 !");
        command("say 还好小徒孝虹检了回来 !");
        new("/open/gblade/mob/lotch")->move(this_player());
        message_vision("王元霸将炼妖壶交给了$N .\n",this_player());
        return "希望你能好好看好此物 , 别再弄不见啦 !\n";
        }
            if(this_player()->query("quests/lotch") )
        return "希望你能善用炼妖壶的神力 , 行善天下 !\n";
        if(this_player()->query("lotch")>3)
        return "原来炼妖壶已经被偷走啦 ! 该不会又是那逆徒 !";
        if(this_player()->query("lotch")<1)
        return "你问这个干麻 ?";
        return "那是我王家祖传之物 , 因为不祥 , 我把它藏于 ...";
}
string ask_yan()
{
  object me;
  me=this_player();
  if( me->query("fyan")==2)
{
command("say 仙剑长者风青云,前几天他才来找过我,并请我援助一齐对抗血魔,之后又听他还要在去请其他门派帮忙,接着就走了,我也不清处他去那了。\n ");
me->set("fyan",3);
}
  else
    {
   command("say 我不清处呦~。\n");
    }
}
string ask_yuan()
{
        if(this_player()->query_temp("can_help_yuan") && this_player()->query("marks/还龙虎刀") )
        {
        command("say 既然龙虎刀已找回 , 那逆徒又有悔意 !");
        this_player()->delete_temp("can_help_yuan");
        this_player()->set_temp("help_yuan",1);
        return "我便惘开一面吧 !\n";
        }
        if(this_player()->query("lotch")>4 || this_player()->query("quests/lotch") )
        return "嗯 , 他果然改过向上了 !";
        return "哼 , 以后在我面前 , 休再提起这个窃刀逆徒 !\n";
}
string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
 if(this_player()->query("quests/lotch",1)&&this_player()->query("quests/yantestmark1",1)  && this_player()->query("quests/2ndtest",3))
  {
  int i;
  i=6+random(5);
  command("say 谢谢您的帮忙.我愿意将appo给我的印记传到你身上!\n");
  tell_object(this_player(),HIW"瞬间由王元霸将手搭在你的肩上..你顿时觉得一股暖意由王元霸的手中传过来\n"NOR);
  this_player()->set("quests/2ndtest",i);
  this_player()->set("quests/yantestmark2",1);
  return("最后一个印记在圣贤书手上,你可以去找他问问了\n");
  }
 else if (this_player()->query("quests/yantestmark2")>1)
  return ("我已经把印记给你了..你还要做什么\n");
 else
  return ("去当我把炼妖壶找出来我就跟你说印记在哪。\n");
 }
else
 return ("啥印记..你在说什么?\n");
}
string ask_blade()
{
        if(this_player()->query("quests/lotch")||this_player()->query("marks/还龙虎刀") )
        return "真谢谢你帮我金刀门寻回至宝 !\n";
        if(this_player()->query("lotch")<2)
        return "那是我金刀至宝 !";
        if(this_player()->query("lotch")>3)
        return "原来你已经帮我找回龙虎刀啦 , 还不快还我 !";
        this_player()->set("lotch",3);
        command("say 龙虎刀已被陈元贵那逆徒所盗 , 那逆徒为了躲我 ,逃到蜀山去了 ");
        return "希望你能帮我金刀门夺回宝刀 !";
}
int accept_object(object me,object ob)
{
        string ob_id;
        ob_id = ob->query("id");
	me=this_player();
	if(ob->query("id")=="gold")
	{
		if(me->query_temp("evil/g_temp/ask") && ob->value() >= 1000000 )
		{
		command("say 很好..那我就收下了这些黄金。\n\n");
		me->set_temp("evil/g_temp/gold",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
		else
		{
		command("say 钱数不够...你耍我吗!!\n");
		command("angry");
		destruct(ob);
		return 0;
		}
	}
	if(ob->query("id")=="good iron")
	{
		if(me->query_temp("evil/g_temp/ask"))
		{
		command("say 很好..那我就收下了这百炼丹金。\n\n");
		me->set_temp("evil/g_temp/iron",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
	}
	if(ob->query("id")=="red-wolf tooth")
	{
		if(me->query_temp("evil/g_temp/ask"))
		{
		command("say 很好..那我就收下了这赤身狼牙。\n\n");
		me->set_temp("evil/g_temp/tooth",1);
		call_out("evil_check",1,me);
		destruct(ob);
		return 1;
		}
	}
        if(ob_id=="dragon-tiger blade")
        {
        if(me->query("lotch")<4)
                {
                command("give "+me->query("id")+" dragon-tiger blade");
                command("say 感谢你帮我金刀门找回此至宝 , 龙虎刀可借你一用 !");
                return 1;
                }
        if(me->query("lotch")>3)
                {
                command("say 真是太感激了 , 在你找到炼妖壶后再来找我 !");
                me->set("marks/还龙虎刀",1);
                return 1;
                }
        return 1;
        }
        if(ob_id=="lotch")
        {
                if(me->query("quests/lotch") )
                {
                command("say 你不要吗? 还是留着吧 !");
                command("give "+me->query("id")+" lotch");
                return 1;
                }
                if(!me->query("marks/还龙虎刀") )
                {
                command("say 如果你能帮我找回龙虎刀 , 我便授你炼妖壶咒 !");
                command("give "+me->query("id")+" lotch");
                command("say 你还是自己留着吧!");
                return 1;
                }
        if(me->query("lotch")>5)
                {
                command("say 此物不祥 , 既然你找到了 , 这就是你的 !");
                command("give "+me->query("id")+" lotch");
                command("say 我便传你这炼妖壶咒语 , 希望你能善用之 !");
        message_vision(sprintf(HIW"王元霸传授$N几句咒语 !\n"NOR),me);
        message("system",HIY "王元霸大声说道 :\n
炼妖壶重现江湖 ,"+me->name()+": 希望你能凭藉妖壶神力
拯救天下苍生 !\n\n"NOR,users());
                me->set("quests/lotch",1);
                me->delete("lotch");
                me->delete("marks/得龙虎刀");
                me->delete("marks/还龙虎刀");
                return 1;
                }
        command("give "+me->query("id")+" lotch");
        command("say 无缘无故给我这个东西干麻 !");
        return 1;
        }
return 1;
}

int evil_check()
{
object me,ob,obj;
string arg;
	me=this_player();
	ob=this_object();
	if(me->query_temp("evil/g_temp/gold") && me->query_temp("evil/g_temp/iron") && me->query_temp("evil/g_temp/tooth"))
	{
		message_vision("
$N笑道：呵呵～果然我没看错人～

　　　　　　　这个黄金印拿去吧。\n\n",ob);
		obj=new("/open/evil-area/npc/obj/golden_seal");
		obj->move(me);
		message_vision("$N将"+obj->query("name")+"交给了$n。\n",ob,me);
		me->delete_temp("evil/g_temp");
		me->set_temp("evil/g_enter");
	}
	if(me->query_temp("evil/g_temp/ask"))
	{
		arg="王元霸说：你还缺";
		if(!me->query_temp("evil/g_temp/gold"))
			arg = arg +" 100 两黄金 ";
		if(!me->query_temp("evil/g_temp/iron"))
			arg = arg +" 百炼丹金 ";
		if(!me->query_temp("evil/g_temp/tooth"))
			arg = arg +" 红身狼牙 ";
		arg = arg +"没给我...\n";
		message_vision(arg+"\n\n$N说道：快去找吧～\n",ob);
	}
return 1;
}

string ask_mogi()
{
        object me = this_player();

        if( me->query("mogi/ask_quest") >= 2 )
            return "我已经把知道的都告诉你了。\n";
        if( me->query("mogi/ask_quest") < 1 )
            return "你问我这个作什么?\n";

        me->add("mogi/ask_quest", 1);
        me->add("mogi/desc", CYN+name()+"说道: 这是传说中一种可以用来驱魔避邪的符纸。\n"NOR);
        me->add("mogi/desc", CYN+name()+"说道: 它们是由上古时候伏羲氏用千百种奇珍异兽的鲜血所提炼绘制的, 具有极强的驱邪功用。\n"NOR);
        me->add("mogi/desc", CYN+name()+"说道: 想到当今天下纷乱, 妖魔作祟, 真不知道这些符纸如今下落如何...\n"NOR);
        me->add("mogi/desc", CYN+name()+"说道: 或许你可以去街上逛逛, 四处打探一下魔界的消息。\n"NOR);

        write(CYN+name()+"说道: 这是传说中一种可以用来驱魔避邪的符纸。\n"NOR);
        write(CYN+name()+"说道: 它们是由上古时候伏羲氏用千百种奇珍异兽的鲜血所"+
                         "提炼绘制的, 具有极强的驱邪功用。\n"NOR);
        write(CYN+name()+"说道: 想到当今天下纷乱, 妖魔作祟, 真不知道这些符纸"+
                         "如今下落如何...\n"NOR);
        return "或许你可以去街上逛逛, 四处打探一下魔界的消息。\n";
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
        tell_object(users(),HIG
   "\n\t待人敦厚的我，一生的劳苦奔波，终于就这么结束!!\n\n\t今日一见"HIM+winner->query("name")+HIG"实力!!自叹我"HIY"王元霸"HIG"真是老了!!\n\n\t唉........老了!!\n\n"NOR);
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {
          new("/open/sky/obj9/happy_charm")->move(environment(winner));
          message_vision(HIM"\n从王元霸的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/happy_charm",sprintf("%s(%s) 让王元霸掉下了快乐之符于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
          {
          new("/open/sky/obj9/happy_charm")->move(environment(winner));
          message_vision(HIM"\n从王元霸的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/happy_charm",sprintf("%s(%s) 让王元霸掉下了快乐之符于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        ::die();
}
