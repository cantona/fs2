#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string do_tengin();
string magic_manor1();
string magic_manor2();
string magic_manor3();

void create()
{
        set_name("林宏升",({"pope lin","pope","lin"}));
        set("long",@LONG

        没有人知道他的来历，也没人知道他的武功有多深；是一个神密莫
        测的人物，在三年前因风云际会，使他创立了〔圣火教〕，也不知
        他是用何方法建立这个庞大的组织，也因为如此, 他被江湖上的人
        称为〔武林神话〕。

LONG);
        set("gender","男性");
        set("clan_kill",1);
        set("class","prayer");
        set("nickname","武林神话");
        set("title","圣火教皇～～");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("score",1000000);
        set("age",75);
        set("max_kee",15000);
        set("str", 50);
        set("cor", 50);
        set("cps", 45);
        set("int", 42);
        set("marks/tengin",1);
        set("force",50000);
        set("max_force",50000);
        set("force_factor", 40);
        set("max_gin",10000);
        set("max_sen",10000);
        set_skill("cure", 120);
        set_skill("superforce", 250);
        set_skill("dodge", 120);
        set_skill("force",150);
        set_skill("move", 120);
        set_skill("literate",120);
        set_skill("parry", 120);
        set_skill("array",130);
        set_skill("fire-array",130);
        set_skill("unarmed",120);
        set_skill("canon",150);
        set_skill("literate",120);
        set_skill("shift-steps",150);
        set_skill("universe",140);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("array","fire-array");
        map_skill("unarmed","universe");
        set("functions/blood/level",200);
        set("functions/tengin/level",100);
        set("functions/bluesea/level",120);
        set("inquiry",([
        "天惊地动"      :       (: do_tengin :),
        "聚灵引"        :       (: magic_manor1 :),
        "聚灵山庄"      :       (: magic_manor2 :),
        "三件事"        :       (: magic_manor3 :),
        ]));
        set("chat_chance", 1);
        set("chat_msg", ({
                CYN"教皇吟道：「欲海浮沈名利争，电光火石此步生；\n
                        红尘世事挥不尽，渡世不笑是痴人。”\n"NOR,
                CYN"教皇笑道：「孤卒浴血斗志高，贤仕善谋脑中计，\n
                        一炮轰开险关道，单车护帅越天河。”\n"NOR,
                CYN"教皇叹道：「万里雄兵气如虹，千秋定论难争峰；\n
                        昊日显照星光掩，百川汇宗谁与共。”\n"NOR,
                CYN"教皇乐道：「百年世事空华里，一片身心水月间；\n
                        独许万山深密处，昼长趺坐掩松关。”\n"NOR,
                CYN"教皇悲道：「命里有时终须有，凡事不可强求；\n
                        时至运就到，苍天不会辜负苦心人啊。”\n"NOR,
                CYN"教皇念道：「夜凉抚琴千山月，路遥迷人千种花；\n
                        棋罢不知人换世，酒栏无奈客恩家。”\n"NOR,
                CYN"教皇沈吟道：「隐居幽灵古洞天，苦学秘笈无限年；\n
                        谁若超越一线界，休怪气功穿脑田。”\n"NOR,
                CYN"教皇说道：「静月禁地是仙境，休望侵犯取月灵；\n
                        若要逞强不听劝，闪电霹雳夺性命。”\n"NOR,
        }) );
                set("chat_chance_combat",50);
                set("chat_msg_combat", ({
                (: perform_action, "force.blood3" :),
                (: perform_action, "force.bluesea3" :),
        }));
        setup();

        add_money("cash",20);
        carry_object("/open/prayer/obj/boris-boots")->wear();
        carry_object("/open/prayer/obj/boris-cloth")->wear();
        carry_object("/open/prayer/obj/boris-hat")->wear();
        carry_object("/open/prayer/obj/boris-hands")->wear();
        carry_object("/open/prayer/obj/kylin-belt")->wear();
        carry_object("/open/prayer/obj/dragon-icer")->wield();
        create_family("圣火教",1,"教皇");
        carry_object("open/prayer/obj/lin-head");

}

void init()
{
        add_action("do_join","join");
        add_action("do_select","select");
        add_action("do_verify","verify");
}

int accept_fight(object who)
{
return notify_fail("教皇冷冷的道 : 去.去..去...少来烦我。\n");
}
int do_verify(string arg)
{
object me,ob,ob1;
me=this_player();
ob=new("open/prayer/obj/woodboard");
ob1=new("open/prayer/obj/ironboard");
if( arg!="board")
  {
    write("你要申请什么\n");
    return 1;
   }
if(me->query("family/family_name")!="圣火教")
  {
    write("只有圣火教徒才会有信物\n");
    return 1;
  }

 if( present("wood board",me) || present("iron board",me) )
  {
    write("你已经申请过了\n");
    return 1;
  }

 if ( me->query("marks/文武星君") )
    {
    write("这是圣火教干部的专用铁牌!!可不要掉了!!\n");
    ob1->move(me);
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
      if(ob->query("combat_exp")<=200000)
      {
        command("? " +ob ->query("id"));
        command("say 你不是拜过八天门的门主了吗?");
        command("say 以你的程度还不够资格跟我学习武学与教务的处理吧!");
        command("say 好好跟着你自己的师父多学几年吧!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say 好,你果然是可造之才,你可以去找三位长老作为你武学的指导!");
        ob->delete("family");
        command("say 你想选择(select)哪一位长老呢?");
        command("say 传功长老(gonfu_elder)，执法长老(lawyer_elder)还是戒律长老(behavior_elder)？");
        ob->set_temp("allow_select",1);
      }
    }
    if(ob->query("marks/圣火三长老")==1)
    {
      if(ob->query("combat_exp")<=900000)
      {
        command("? " +ob ->query("id"));
        command("say 你不是已经拜过三位长老作为老师了吗?");
        command("say 以你的程度来看，目前还不够资格跟我学习武学与教务的处理吧!");
        command("say 好好跟着长老们再多学几年吧!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say 好,你果然不是泛泛之辈,你可以去找教内的文武星君作为你武学的指导!");
        ob->delete("family");
        command("say 你可以选择武星君(warrior)或是文星君(literate)");
        ob->set_temp("allow_select",1);
      }
    }
    if(ob->query("marks/文武星君")==1)
    {
      if(ob->query("combat_exp")<=2500000)
      {
        command("? " +ob ->query("id"));
        command("say 你不是已经是文武星君的入室弟子了吗?");
        command("say 以你的程度还不够资格跟我学习武学与教务的处理吧!");
        command("say 好好跟着文武星君多磨练磨练吧!");
        return 0;
      }
      else
      {
        command("look "+ob->query("id"));
        command("pat");
        command("say 好,你果然是可造之才,从今后就由本教主亲自教导!");
        ob->delete("family");
        command("recruit "+ob->query("id"));
        ob->set("title","[31m圣火教嫡传弟子[0m");
        message("mud","[36m圣火教皇～～林宏升放声大笑: \n
        哈哈哈哈....本教主实在太高兴啦！！\n
        [5m[33m"+ob->name()+"[0m[36m今后圣火教的重担就落在你的肩上了，\n
                        好好干吧!!老夫不会亏侍你的!![0m\n",users());
        return ;
      }
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
        if(this_player()->query("officer_class"))
                return notify_fail("教皇冷冷的说道：你在中原己当过官了，我圣火教不欢迎你!!\n");
        this_player()->set("class","prayer");
        message("mud","\n[33m圣火教皇～～林宏升 : 哈.哈..哈...\n
各位圣火教的弟子们，\n
让我们欢迎[32m" +this_player()->name()+"[33m加入我[31m圣火教[33m!![0m\n\n",users());
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
       who->set_temp("allow_1",1);
       command("smile");
       command("say 嗯 ,你就去加入天机门吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "天枢门" || str == "tanshu")
    {
      message_vision(HIC"$N说道：天枢门\n"NOR,who);
      who->set_temp("allow_2",1);
      command("smile");
      command("say 嗯 ,你就加入天枢门吧!");
      who->set_temp("have_say",1);
      return 1;
    }
    if(str == "天权门" || str == "tanchun")
    {
       message_vision(HIC"$N说道：天权门\n"NOR,who);
       who->set_temp("allow_3",1);
       command("smile");
       command("say 嗯 ,你就进去天权门修练吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "天璇门" || str == "tanshun")
    {
       message_vision(HIC"$N说道：天璇门\n"NOR,who);
       who->set_temp("allow_4",1);
       command("smile");
       command("say 嗯 ,你就到天璇门好好磨练吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "玉衡门" || str == "uhen")
    {
       message_vision(HIC"$N说道：玉衡门\n"NOR,who);
       who->set_temp("allow_5",1);
       command("smile");
       command("say 嗯 ,你就加入玉衡门吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "开阳门" || str == "kiyan")
    {
       message_vision(HIC"$N说道：开阳门\n",who);
       who->set_temp("allow_6",1);
       command("smile");
       command("say 嗯 ,你就前往开阳门学习吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "瑶光门" || str == "youkoun")
    {
      message_vision(HIC"$N说道：瑶光门\n"NOR,who);
      if(who->query("gender") != "女性")
        command("say 你不是女性, 瑶光门恐怕不会收你的! 另选一个吧!");
      else
      {
        who->set_temp("allow_7",1);
        command("smile");
        command("say 嗯 ,你就前去瑶光门拜师学艺吧!");
        who->set_temp("have_say",1);
      }
      return 1;
    }
    if(str == "阵势门" || str == "zhenche")
    {
       message_vision(HIC"$N说道：阵势门\n"NOR,who);
       who->set_temp("allow_8",1);
       command("smile");
       command("say 嗯 ,你就前去阵势门拜师学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "传功长老" || str == "gonfu" || str == "gonfu_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say 你这家伙经验不足，去八天门多学点东西吧!!");
         return 1;
       }
       if(!who->query("marks/圣火八天门")){
         command("say 连八天门都没去过，还想去长老那学习??你这叫痴心妄想!!");
         return 1;
       }
       message_vision(HIC"$N说道：传功长老\n"NOR,who);
       who->set_temp("allow_9",1);
       command("smile");
       command("say 嗯 ,你就去传功长老那儿学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "执法长老" || str == "lawyer" || str == "lawyer_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say 你这家伙经验不足，去八天门多学点东西吧!!");
         return 1;
       }
       if(!who->query("marks/圣火八天门")){
         command("say 连八天门都没去过，还想去长老那学习??你这叫痴心妄想!!");
         return 1;
       }
       message_vision(HIC"$N说道：执法长老\n"NOR,who);
       who->set_temp("allow_10",1);
       command("smile");
       command("say 嗯 ,你就去执法长老那儿学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "戒律长老" || str == "behavior" || str == "behavior_elder")
    {
       if(who->query("combat_exp") < 200000){
         command("say 你这家伙经验不足，去八天门多学点东西吧!!");
         return 1;
       }
       if(!who->query("marks/圣火八天门")){
         command("say 连八天门都没去过，还想去长老那学习??你这叫痴心妄想!!");
         return 1;
       }
       message_vision(HIC"$N说道：戒律长老\n"NOR,who);
       who->set_temp("allow_11",1);
       command("smile");
       command("say 嗯 ,你就去戒律长老那儿学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "武星君" || str == "warrior")
    {
       if(who->query("combat_exp") < 900000){
         command("say 你这家伙经验不足，去长老那学点东西吧!!");
         return 1;
       }
       if(!who->query("marks/圣火三长老")){
         command("say 连长老那都没去过，还想去文武星君那学习??你这叫痴心妄想!!");
         return 1;
       }
       message_vision(HIC"$N说道：武星君\n"NOR,who);
       who->set_temp("allow_12",1);
       command("smile");
       command("say 嗯 ,你就去武星君那儿学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    if(str == "文星君" || str == "literate")
    {
       if(who->query("combat_exp") < 900000){
         command("say 你这家伙经验不足，去长老那学点东西吧!!");
         return 1;
       }
       if(!who->query("marks/圣火三长老")){
         command("say 连长老那都没去过，还想去文武星君那学习??你这叫痴心妄想!!");
         return 1;
       }
       message_vision(HIC"$N说道：文星君\n"NOR,who);
       who->set_temp("allow_13",1);
       command("smile");
       command("say 嗯 ,你就去文星君那儿学艺吧!");
       who->set_temp("have_say",1);
       return 1;
    }
    command("say 没这人!");
    return 1;
}

int accept_kill(object ob)
{
        int i;
        object ob1, hu_fa;
        ob1 = this_object();
        ob = this_player();
        command("exert blood");
        if( !present("hu-fa", environment(ob1)) ) {
        tell_room(environment(ob1),HIW"\n突然！冲出两位护法!!\n\n"NOR);
        for(i=0;i<2;i++)
        {
        hu_fa = new("/open/prayer/npc/hu_fa");
        hu_fa->move(environment(ob1));
        hu_fa->kill_ob(ob);
        }}
        write("护法纵身飞扑过来叫道：誓死保护教主！！\n");
        write("林宏升满脸杀气的说道：「无知小辈!!受死吧!!!”\n");
        kill_ob(ob);
        command("perform unarmed.tengin");
        return 1;
}

void greeting(object ob)
{
        ob=this_player();
        if ( ob->query_skill("coldpoison",1) )
        {
        command("say 本教主一生光明磊落！！最痛恨学有毒术之人！！");
        kill_ob(ob);
        }
        if( ob->query("class")=="dancer")
        {
        command("say 本教主最恨那些利用美色之人！！");
        kill_ob(ob);
        }
    return;
}

void die()
{
        object winner=query_temp("last_damage_from");
        string name1;
        int j;
        if(!winner)
        {
        ::die();
        return ;
        }
        name1 = winner->query("name");

        // by ACKY
        if( winner->query("clan/id") && userp(winner) )
                CLAN_D->add_clanset( winner->query("clan/id"), "develop" , 5 );

        tell_object(users(),HIR"
   远从西域传来一声怒吼!!‘圣火教主’林宏升不顾伤势!!强运身上内力,使出了
                    "+HIW+"先天乾坤功第七绝
                                   ‘"+HIC+"天"+HIG+"惊"+YEL+"地"+BLU+"动"+HIW+"’"HIW"
   一时之间，天地变色!!狂风怒啸!!九天真气、九地真气，齐涌至林宏升之体内!!!
"HIR"忽然间!!轰~~一声巨响!!!林宏升无法驾驭身上的九天真气!!真气爆体而出!!血肉模糊!!

    "+HIC+"大侠"+HIY+name1+HIC+"在旁笑道：圣火教气数以尽!!今后是我称霸的时代了!!哈哈!!\n"NOR);
        if(winner->query("family/family_name")=="仙剑派" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
        {
        object ob;
        ob=new("/open/gsword/obj1/eyes.c");
        tell_object(winner,HIR"你从林宏升的尸体上挖出了一对眼睛..\n"NOR);
        winner->set_temp("swordeyes",1);
        ob->move(winner);
        }
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {
          new("/log/sky/emperor_stone")->move(environment(winner));
          message_vision(HIM"\n从林宏升的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/emperor_stone",sprintf("%s(%s) 让林宏升掉下了皇者石于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
          {
          new("/log/sky/emperor_stone")->move(environment(winner));
          message_vision(HIM"\n从林宏升的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/emperor_stone",sprintf("%s(%s) 让林宏升掉下了皇者石于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        ::die();
}

void heart_beat()
{
 object me=this_object();
 if(random(100) < 20 && is_fighting()) {
   command("perform unarmed.tengin");
   me->delete_busy();
   me->clear_condition();
 }
 if( random(100) < 10)
 {
  if( is_fighting() )
  {
   if( query("kee") < query("max_kee") )
    message_vision(HIR"\n林宏升出浑天心法之冰心诀，身上的伤口奇迹式愈合了\n"NOR,me);
    me->receive_heal("kee",1000);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
  }
 }
        ::heart_beat();
}

string do_tengin()
{
object who=this_player();
if(who->query("class")=="prayer")
{
if(who->query("combat_exp") > 3500000 )
{
if(who->query("marks/tengin") != 1 )
{
command("say 你江湖历练已够，且为我嫡传弟子。");
command("say 好吧！我传你‘天惊地动’！");
who->set("marks/tengin",1);
return ":)";
} else {
command("say 我已传你了，好好运用吧！");
return ":)";
}} else {
command("say 你江湖历练不足等 350 万再来吧！");
return ":)";
}
} else {
command("say 我不知道！");
return ":)";
}
}

string magic_manor1()
{
        object me;
        me=this_player();
        if(!present("magic sign",me) && me->query("quests/can_go_magic-manor"))
        {
        command("say 这么重要的东西你怎么弄丢了!!");
        command("say 幸好这东西若非我传授使用方法，是无法使用的，我再拿一个给你吧。");
        new("/open/magic-manor/obj/magic-sign")->move(this_player());
        return "下次记得小心些，别再弄丢了!!";
        }

        if(present("magic sign",me) && me->query("quests/can_go_magic-manor"))
        {
        command("say 聚灵引已经给你了，好好使用吧，切莫遗失了。");
        return "聚灵山庄的入口位置就在风云镇东方不远处的密林内。\n";
        }

        else if( me->query_temp("quests/magic-maonr-02") > 2 )
        {
        return "先把我交待的任务完成吧!!";
        }

        else if( me->query_temp("quests/magic-maonr-02") && me->query_temp("quests/magic-maonr-02") <= 2 )
        {
        return "看来你知道的不少了，醉问天也真是的，说这么多作什么 ...@#$Q%";
        }

        else
        {
        return "无端端的问我这做什么，快滚开!!\n";
        }
}

string magic_manor2()
{
        object me;
        me=this_player();

        if( me->query("quests/can_go_magic-manor") )
        {
        return "最近山庄真是变化好大，好想回去一趟看看呀!!";
        }

        else if( me->query_temp("quests/magic-manor-02") == 2 )
        {
        me->set_temp("quests/magic-manor-02",3);
        return "聚灵山庄鲜少在江湖上活动，所以知道的人有限。\n"
        +"            不瞒你，我也曾是聚灵山庄的一份子。\n"
        +"            如果你想要进入聚灵山庄，我可以助你一辈之力。\n"
        +"            不过......你要先替我完成三件事才行。\n";
        }

        else
        {
        return "聚灵山庄，传说是个神秘的地方，我知道的也不多!!";
        }
}

string magic_manor3()
{
        object me;
        me=this_player();

        if( me->query("quests/can_go_magic-manor") )
        {
        return "多亏你完成这三件事，让圣火教在江湖的地位又更加崇高了。\n";
        }

        else if( me->query_temp("quests/magic-manor-02") == 3 )
        {
        command("hmm");
        call_out("three_check1",3,me);
        return "待我想一下，要让你完成的三件事。\n";
        }

        else if( me->query_temp("quests/magic-manor-02") && me->query_temp("quests/magic-manor-02") < 3 )
        {
        return "嘿嘿，你的进度也未免太快了吧!!\n";
        }

        else
        {
        return "什么三件事呀，听不懂啦!!\n";
        }
}

int three_check1()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 3 && !me->query("quests/can_go_magic-manor") )
        {
        command("say 好了，我想好了!!");
        command("say 第一件事情：传说长白山有一个千年树妖，请你带回他的一片树叶。");
        command("say 此妖的法术非常厉害，连我都败在他手下。");
        command("say 等你拿到了，我再告诉你第二件事情吧!!");
        me->set_temp("quests/magic-manor-02",4);
        }else{
        command("say 嗯!!");
        }
        return 1;
}

int three_check2()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 5 && !me->query("quests/can_go_magic-manor") )
        {
        command("say 好了，我想好了!!");
        command("say 第二件事情：蛇寨寨主的项上人头。");
        command("say 据说此人生性残暴，是非不分，占据蛇寨为王, 还四处奸淫掳掠，无恶不作。");
        command("say 等你拿到了，我再告诉你第三件事情吧!!");
        me->set_temp("quests/magic-manor-02",6);
        }else{
        command("say 嗯!!");
        }
        return 1;
}

int three_check3()
{
        object me,ob;

        me=this_player();
        ob=this_object();

        if( me->query_temp("quests/magic-manor-02") == 7 && !me->query("quests/can_go_magic-manor") )
        {
        command("say 好了，我想好了!!");
        command("say 这是最后一件了：我要一个焚天魔王的人头。");
        command("say 魔界的王者之王，如果你能打败他，足证明你的能力。");
        command("say 就等你的好消息了!!");
        me->set_temp("quests/magic-manor-02",8);
        }else{
        command("say 嗯!!");
        }
        return 1;
}

int magic_sign()
{
        object me,obj;

        me=this_player();

        if( me->query_temp("quests/magic-manor-02") == 9 && !me->query("quests/can_go_magic-manor") )
        {
        command("say 我出的三件事其实是要考验你的能耐、品性和合群性的。");
        command("say 聚灵山庄正需要像你这样的人材，我果真是没有看错你。");
        command("say 这块聚灵引，就交给你了，使用的方法很简单，我这就教你.......。");
        command("say 这样子你懂了吧，只要走在正确的位置，它就会引导你了。");
        me->delete_temp("quests/magic-manor-01");
        me->delete_temp("quests/magic-manor-02");
        me->set("quests/can_go_magic-manor",1);
        obj=new("/open/magic-manor/obj/magic-sign");
        obj->move(me);
        message_vision("林升宏交给$N一块$n。\n",me,obj);
        command("say 接下来我再传一点功力给你吧!!");
        command("say 希望你能为聚灵山庄多尽一点心力。");
        me->start_busy(15);
        message_vision(HIY"林宏升将双手置于$N百会与膻中两大穴，一股内劲由林宏升的手掌钻入$N体内。\n"NOR,me);
        call_out("trans_force",10,me);
        }else{
        command("say 嗯!!");
        }
        return 1;
}

int trans_force()
{
        object me;
        int force;
        me=this_player();
        force=me->query_skill("force",1);
        {
        message_vision(HIY"只见林宏升脸颊上满是汗水，不一会儿，行功完毕。\n"NOR,me);
        tell_object(me,HIC"你只觉全身精气神饱满，身上的筋脉豁然贯通，内力更是有所长进。\n"NOR);
        me->set_skill("force",force+30);
        me->delete_busy();
        }
        return 1;
}

int accept_object(object me,object ob)
{
        int om,ot;
        me=this_player();
        om=ob->query("magic-manor");
        ot=me->query_temp("quests/magic-manor-02");

        if( !ot )
        {
          if( om == 2 )
          {
          command("say 这封信是那来的呀？看来你也非是善良人仕!!");
          command("say 就让本教皇为武林除害吧!!");
                  destruct(ob);
          kill_ob(me);
          }else{
          command("say 本教皇正在忙!!   去! 去!! 去!!!");
          destruct(ob);
          return 0;
          }
        }else{
          if( ot == 1 && om == 2)
          {
          command("say 嗯，这封信大有来历，是醉问天亲笔所写的没错!!");
          command("say 能让醉问天看的起的人，看来你的本事可不小喔!!");
          command("say 说吧！你来找我是不是想问有关聚灵山庄的事呀？");
                  destruct(ob);
          me->set_temp("quests/magic-manor-02",2);
          return 1;
          }else{
            if( ot == 4 && om == 3 && me->query_temp("quests/kill-dance") == 1 )
            {
            me->set_temp("quests/magic-manor-02",5);
            me->delete_temp("quests/kill-dance");
            command("hmm");
                        destruct(ob);
            call_out("three_check2",3,me);
            return 1;
            }else{
              if( ot == 4 && om == 3 && me->query_temp("quests/kill-dance") != 1 )
              {
              command("say 看你一副精神饱满的样子，这片叶子不是你亲手拿到的吧？");
              destruct(ob);
              return 1;
              }else{
                if( ot == 6 && om == 4 && me->query_temp("quests/kill-snake") == 1 )
                {
                me->set_temp("quests/magic-manor-02",7);
                me->delete_temp("quests/kill-snake");
                command("hmm");
                                destruct(ob);
                call_out("three_check3",3,me);
                return 1;
                }else{
                  if( ot == 6 && om == 4 && me->query_temp("quests/kill-snake") != 1 )
                  {
                  command("say 这个......蛇郎君不是你亲手杀死的吧？");
                  destruct(ob);
                  return 1;
                  }else{
                    if( ot == 8 && om == 5 )
                    {
                    me->set_temp("quests/magic-manor-02",9);
                    call_out("magic_sign",1,me);
                                        destruct(ob);
                    return 1;
                    }else{
                    command("say 我现在又没有要这个东西，你拿给我做什么？");
                    destruct(ob);
                    }
                  }
                }
              }
            }
          }
        }
        return 1;
}
