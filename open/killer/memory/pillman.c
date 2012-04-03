#include <ansi.h>
#include </open/open.h>
inherit NPC;
inherit SSERVER;
string black();
string spill();

string spill()
{
  if ( !present("herb",this_player()) )
    return "没有富士山秘草，你要我炼什么？\n";
  this_player()->set_temp("herb_1",2);
  return "想炼药就把东西交给我吧!!\n";
}

string black()
{
  if (this_player()->query_temp("mission2") !=1)
    return "赊！赊！你讲赊？只要热开水？";
  this_player()->set_temp("kill_fu",1);
  return "那个混进来的金刀门混蛋，把她身上的香包给我，我就告诉你";
}
  
string hate()
{
object me=this_player();
  if (this_player()->query_temp("memory") !=2)
  {
	command("say 不要烦我，快滚");
    message_vision(HIR"只见婆婆一掌将你打飞\n"NOR);
	this_player()->add("kee",-50);
	this_player()->move(__DIR__"floorm.c");
             return "仇什仇？老身从不跟人结仇的";
  }
 message_vision(HIY"那是黑牙联的一件往事了.....\n"NOR,me);
 message_vision(HIY"当时，本名渡永天的天灵老鬼，他与孤城是非常要好的朋友\n"NOR,me);
 message_vision(HIY"但是两人却同时喜欢上婆婆我\n"NOR,me);
 command("blush");
 message_vision(HIY"两人陷入了前所未有的尴尬情形，但是我却无法决定心所属谁\n"NOR,me);
 message_vision(HIY"然而关键是在某个事件中，那就是完颜宏烈的叛变事件中\n"NOR,me);
 message_vision(HIY"原本想暂时离开总坛，与柴荣去修练更高的技巧的孤城\n"NOR,me);
 message_vision(HIY"其实，是因为想厘清三人之间的关系，所以才离开总坛的\n"NOR,me);
 message_vision(HIY"然而，这时却发生叛变事件，使得黑牙联与魔教陷入交战的危机\n"NOR,me);
 message_vision(HIY"不得不出面解决这一件事件，但是却与渡永天他起了争执\n"NOR,me);
 message_vision(HIY"因为他认为，要先逼完颜宏烈交出天魔解体大法，才解决他\n"NOR,me);
 message_vision(HIY"然而，柴荣本身因为被完严宏烈陷害，形成此一事件的主角\n"NOR,me);
 message_vision(HIY"而孤城他为了维护他，便想先杀完严宏烈，将其交给魔教\n"NOR,me);
 message_vision(HIY"于是两人便在后山那里打了起来，正当两人打的火热之时\n"NOR,me);
 message_vision(HIY"这个发箍射中孤城，这时孤城以为是我暗中帮助渡永天\n"NOR,me);
 message_vision(HIY"便无心恋战，而转身离去..........\n"NOR,me);
 message_vision(HIY"这根本是完严宏烈设下的陷阱，他从我身边偷走发箍，并且下毒\n"NOR,me);
 message_vision(HIY"使得孤城他受伤严重，不得不把权力交给叶秀杀\n"NOR,me);
 message_vision(HIY"而我也在照顾孤城的过程中，将误会冰释并与孤城陷入的恋情之中\n"NOR,me);
 message_vision(HIY"而那把发箍也成了我两之间的信物，但好景不常.....\n"NOR,me);
 message_vision(HIY"渡永天竟将发箍偷走，在偷偷把它丢在自己的床边n"NOR,me);
 message_vision(HIY"在引孤城去看，暗示我红杏出墙........\n"NOR,me);
 message_vision(HIY"孤城一怒之下，也找我问清楚，便远走东瀛\n"NOR,me);
 message_vision(HIY"我便一路追赶了过去，但是却没有追上，我在东瀛找了五年后\n"NOR,me);
 message_vision(HIY"并没有任何音讯，也只有回到总坛之中，\n"NOR,me);
 message_vision(HIY" 这时，渡永天早已因辅助叶秀杀，而成为杀手的第二势力者  \n"NOR,me);
 message_vision(HIY"我也不愿将此事公开，于是我就从杀手的第一线工作退了下来   \n"NOR,me);
 message_vision(HIY"这事便成为了无头公案，孩子，你愿意帮我一个忙吗？   \n"NOR,me);
 message_vision(HIY"你帮我到那贱人住的附近的湖中找一条大鲤鱼  \n"NOR,me);
message_vision(HIY"当年孤城离开时，曾经留书说有东西在此鱼腹中，要我去找   \n"NOR,me);
message_vision(HIY"但我一直找不到，这几年因为他搬回总坛，我也没再去找了   \n"NOR,me);
this_player()->set_temp("memory",3);
 return "少年的，如果找到的话，婆婆会有你的好处的.....";
}

int accept_object(object wo,object ob)
{
  object me,ob2,ob3;
  
  me=this_player();

  if(ob->query("id") == "hair")  //往事之谜     
  {
    if (this_player()->query_temp("memory") != 1)
    {
	command("say 给我这个干嘛！");
             destruct(ob);
      	return 0;
    }
    command("sm "+this_player()->query("id"));
    command("say 你从哪里拿到的？是不是从天灵老人那理拿到得？\n");
    command("say 可恶，那老鬼以为将这个交还给我，就可以化解(仇恨)吗？");
    me->set_temp("memory",2);
    destruct(ob);
    return 1;
  }

  if(ob->query("id") == "special can")  //往事之谜的打死鱼之后的剧情
  {
    if (this_player()->query_temp("memory") < 7)
    {
	command("say 小鬼，鱼你是请别人杀的对不对？  没收！");
	 destruct(ob);
      	return 0;
    }
    command("spank "+this_player()->query("id"));
    command("say 这是早期孤城专用的传令筒");
    message_vision(HIG"婆婆接过竹筒后以特殊的手法将竹筒打开\n从里面拿出一张羊皮纸n"NOR,me);
    message_vision(HIG"婆婆缓缓的端详了里面所记载的事情，随后叹了一口气.....\n"NOR,me);
    command("say 永天，看来是我误会你了............");
    message_vision(HIM"之后，婆婆将事情的源由缓缓道来....，在婆婆解说下，才知道\n"NOR,me);
    message_vision(HIM"原来当年是完严宏烈所设下的陷阱，想要引起两人之间的征战\n"NOR,me);
    message_vision(HIM"叶孤城将计就计想引出完严宏烈，便离开总坛看他是否会暗杀叶孤城\n"NOR,me);
    message_vision(HIM"但是，完严宏烈并没有上当，原本想要再次回到总坛。\n"NOR,me);
    message_vision(HIM"不过在与渡永天讨论过后，感到东瀛的势力，似乎逐渐渗透中土\n"NOR,me);
    message_vision(HIM"并且发现有不少人已经成为各派的第二，三代传人，但是不知到有哪些人\n"NOR,me);
    message_vision(HIM"根据宁错杀不放过，于是便与渡永天定下歼灭各派第二，三代传人的计画\n"NOR,me);
    message_vision(HIM"因为事关重大，为避免打草惊蛇，叶孤城便远走东瀛，顺便找装备与情报\n"NOR,me);
    message_vision(HIM"而渡永天也不便向叶玲如说明，也不刻意去找出完严宏烈\n"NOR,me);
    message_vision(HIM"才会形成目前的情形.......\n"NOR,me);
    command("say 小朋友，多谢你帮忙婆婆，这个令牌你拿去，顺便去找渡永天他会给你好处的");
    message_vision(HIR"婆婆交给你一面令牌\n"NOR,me);	
     ob3=new("/open/killer/memory/card.c");
     ob3->move(me);
    me->set_temp("memory",8);
   destruct(ob);

    return 1;
  }

 if(ob->query("id") == "fu_page") //黑血神针之谜的香包
  {
    command("grin "+this_player()->query("id"));
    command("say 果然够狠，足够出这个任务\n");
    command("say 其实也很简单，在三楼东边的装备室，就有叶孤城当年留下来的血变之牙");
    command("say 不会开呀？相信我，现在你再去，就能开了，这是婆婆的庇佑：P");
    command("say 你只要再向李三笑那个老鬼，（借幽冥之壶）就可以了。");
    me->set_temp("mission2",2);
     destruct(ob);
    return 1;
  }

  if(ob->query("id") == "ghost can")
  {
    if (me->query_temp("mission2") == 4)
    {
      if (me->query_temp("tt")==1)
      {
       command("say 你等一下，我炼制一下，马上就好了");
       message_vision(HIR"婆婆躲入密室后，密室中呼喊声不断，非常凄沥\n"NOR,me);
       message_vision(HIR"过了一会，婆婆拿了一盒，金色的护具\n"NOR,me);
       ob2=new("/open/killer/obj/black.c");
       ob2->add_amount(14);
       ob2->move(me);
       command("say 里面就是黑血神针，小心一点，不要反而伤了自己");
       command("bye "+me->query("id"));
       me->set_temp("mission2",0);
      }
      else
      {
        command("say 血变之牙呢？");
        me->set_temp("can",1);
      }
      destruct(ob);
      return 1;
    }
    else
    {
      command("say 给我这个干嘛！");
 destruct(ob);

      return 0;
    }
  }

  if(ob->query("id") == "blood change")
  {
    if (me->query_temp("mission2") == 4)
    {
      if (me->query_temp("can")==1)
      {
       command("say 你等一下，我炼制一下，马上就好了");
       message_vision(HIR"婆婆躲入密室后，密室中呼喊声不断，非常凄沥\n"NOR,me);
       message_vision(HIR"过了一会，婆婆拿了一盒，金色的护具\n"NOR,me);
       ob2=new("/open/killer/obj/black.c");
       ob2->add_amount(14);
       ob2->move(me);
       command("say 里面就是黑血神针，小心一点，不要反而伤了自己");
       command("bye "+me->query("id"));
       me->set_temp("mission2",0);
      }
      else
      {
        command("say 幽冥之壶呢？");
        me->set_temp("tt",1);
      }
     destruct(ob);
      return 1;
    }
    else
    {
      command("say 给我这个干嘛！");
      destruct(ob);
      return 0;
    }
  }

  if(ob->query("id") == "herb")
  {
   switch (me->query_temp("herb_1"))
   {
     case 0 :
     {
      command("say 唉。。我不是说过，随便拿来的富士山秘草是没有用的！\n");
      me->set_temp("herb_1",0);
      return 0;
     }
     case 1 :
     {
      command("say 浸也不浸久一点，根本没入味嘛！\n");
      me->set_temp("herb_1",0);
      return 0;
     }
     case 2 :
     {
      destruct(ob);
      command("say 没错就是这样，真好！！你等一下，我立刻就好。。。\n");
      message_vision(HIR"只见婆婆熟练的动作，将草药放入炉中\n"NOR,me);
      message_vision(HIR"不一会儿，数颗杀手密药就已经做好了\n"NOR,me);
      ob2=new("/open/killer/obj/s_pill.c");
      ob2->add_amount(14);
      ob2->move(me);
      command("say 好啦，拿去吧。。好好为黑牙联尽一份心力哦。");
      command("bye "+me->query("id"));
      me->set_temp("herb_1",0);
      return 1;
     }
    }
  }
  command("? "+this_player()->query("id"));
  command("say 呵。。。你在送礼吗？\n");
  return 0;
}  
void create()
 {
  object ob;
  set_name("叶玲如",({"old woman","old","woman"}) );
  set("long","千万不要看她的外表，而轻易对她下毒手。她可是超级杀手哦。\n");
  set("race", "人类");
  set("gender","女性");
  set("combat_exp",101010);
  set("age",66);
  set("title","神秘炼药婆婆");
  set("class","killer"); 
  set("str",30);
  set("cor",30);
  set("cps",30);
  set("kee",500);
  set("max_kee",500);
  set("force",100);
  set("max_force",100);
  set("force_factor",3);
  set("bellicosity",150);
  set("inquiry",([
      "富士山秘草" : "你有吗？不是随意拔来就可以用。我会炼成（杀手密药）\n",
      "仇恨" : (: hate :),
      "杀手密药" : (: spill :),
      "黑血神针" : (: black :),
      ]));
  setup();
 add_money("gold",5); 
 ob=carry_object("/open/killer/obj/lustar");
 ob->add_amount(1000); 
 ob->wield();
 carry_object("/open/killer/weapon/k_arm1.c")->wear();
 carry_object("/open/killer/weapon/k_belt1.c")->wear();
 carry_object("/open/killer/weapon/k_cloth1.c")->wear();
 carry_object("/open/killer/weapon/k_coat1.c")->wear();
 carry_object("/open/killer/weapon/k_leg1.c")->wear();
 carry_object("/open/killer/weapon/k_torch.c")->wear();
}

void init()
{
    object ob;
    ::init();
  if( interactive(ob = this_player())&& !is_fighting() ) {
    remove_call_out("greeting");
    call_out("greeting",1,ob);   }
}

int accept_kill(object ob)
{
  message_vision( this_object()->name()+"你怎么要杀我？.....：~\n",ob);
  command("say 令人愤怒的家伙。。。孤城赐给我对抗的力量吧");
  this_object()->set("combat_exp",650000);
  this_object()->set("max_force",1800);
  this_object()->set("gin",2000);
  this_object()->set("sen",2000);
  this_object()->set("max_kee",3000);
  this_object()->set("kee",3000);
  this_object()->set("eff_kee",3000);
  this_object()->set("force",1800);
  set_skill("dodge",85);
  set_skill("move",75);
  set_skill("parry",75);
  set_skill("throwing",80);
  set_skill("rain-throwing",70);
  set_skill("shade-steps",85);
  map_skill("throwing","rain-throwing");
  map_skill("dodge","shade-steps");
  this_object()->set("title","超级杀手炼药师");
  command("say 敢在此撒野？让你看看我的利害！！");
  command("wield star");
  this_object()->kill_ob(this_player());
    return 1;
}

int accept_fight(object me)
{
    command("say 呵。。。老身可没时间陪你玩");
    command("waggle "+this_player()->query("id"));
    return 0;
}

void greeting(object ob)
{
  if(this_player()->query("id")=="wataru")
  {
   command("say 哇....天才小渡来了，好高兴！！");
   command("kiss wataru");
  }
  else
  { command("smile "+this_player()->query("id"));}
}   
