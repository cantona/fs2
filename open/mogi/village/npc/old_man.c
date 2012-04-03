
inherit NPC;
string ask_tesin();
void create()
{
        set_name("智慧老人", ({ "old man","man" }) );
	set("gender", "男性" );
        set("title","魔界村长老");
        set("age",74);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
	set("long","村中智慧最高的长者, 满脸的皱纹是岁月所留下的痕迹.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("inquiry",([
             "龙铁心" : (:ask_tesin:),
             "三叶仙兰" : "听说在妖魔古堡里的三楼青龙室有存放这种东西.",
             "进入洞穴" : "三叶仙兰的香气可以克制千年冰蟾的毒气.",
             "焚天魔王" : "听说他自创极火金身,周身刀枪不入. 如果你打败他的话, 也许他会教你.  不过要小心他那毁灭性的极火三掌.",
             ]));
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
        add_money("coin", 25);
         	
}

string ask_tesin()
 {
if (this_player()->query("quests/shasword")==5)
{
 if (!this_player()->query_temp("find_tesin"))
  {
  this_player()->set_temp("find_tesin2",1);
  return ("龙铁心是中原第一的铸剑师呢..你怎么会找到这来?。");
  }
 if (this_player()->query_temp("find_tesin")==1)
  {
  this_player()->set_temp("find_tesin2",2);
  return ("龙铁心之前有听说过..龙铁心似乎帮逍遥子作了几把威力很强的武器..不过已经不知所踪了.");
  }
 if (this_player()->query_temp("find_tesin")==2)
  {
  this_player()->set_temp("find_tesin2",3);
  return ("早些年..有听说过..有人来找过龙铁心..不过不知道有没找到就是了。");
  }
 if (this_player()->query_temp("find_tesin")==3)
  {
  this_player()->set_temp("find_tesin2",4);
  return ("龙铁心阿..好像有人说过.他在魔域里...不过不晓得在哪就是了。");
  }
 if (this_player()->query_temp("find_tesin")==4)
  {
  this_player()->set_temp("find_tesin2",5);
  return ("数十年前..龙铁心曾来过这里..但是..我不知道他现在在哪。");
  }
 if (this_player()->query_temp("find_tesin")==5)
  {
  this_player()->set_temp("find_tesin2",6);
  return ("龙铁心来到这里之后..曾经帮助过我们这的居民..并教我们一些基本的铸铁铸剑之法。");
  }
  if (this_player()->query_temp("find_tesin")==6)
  {
  this_player()->set_temp("find_tesin2",7);
  return ("几十年前,龙铁心来到这里..他身边带着一位小剑士..当他们在这交我们铸造农具的技巧后,两个人就此消失了。");
  }
}
}






