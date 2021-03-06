// yen.c by wade and oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_ask1();
string do_ask2();

void create()
{
	seteuid(getuid());	// 这行一定要
	set_name("司马烟", ({ "sma yen", "sma", "yen" }) );
	set("nickname", "穿肠剑");
	set("title", "恶人谷小队长");
	set("class", "bandit");
        set("race", "人类");
        set("gender", "男性");
        set("age", 35);
	set("long", "他手中的那把穿肠剑，以及杀人不眨眼的狠毒性格，在武林中树敌无数。\n为了逃避仇家的追杀，他逃入恶人谷中躲避，并且受到十大恶人的重用。\n他将十大恶人的武功融入自己的剑法之中，显得更具威力。目前他奉命负\n责把守恶人谷的入口。\n");

        set("str", 30);
        set("cor", 30);
	set("max_kee", 1000);
	set("max_force", 500);
	set("force", 500);
	set("force_factor", 5);
	set("combat_exp", 250000);

	set_skill("sword", 75);
	set_skill("parry", 40);
	set_skill("dodge", 30);
	set_skill("move", 30);
	set_skill("force", 30);
	set_skill("badforce", 35);
	set_skill("badsword", 90);
	set_skill("ghost-steps", 40);
	map_skill("sword", "badsword");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	map_skill("force", "badforce");
	map_skill("parry", "badsword");

        set("chat_chance", 8);
        set("chat_msg",({
             "司马烟说道: 入谷如登天，来人走这边。\n",
	     "司马烟瞪了你一眼说: 想入谷？能杀的了我再说吧。\n",
	     "司马烟垂头丧气的说: 来这儿的人，其实大都是为了躲避天下第一神剑的追杀。\n",
	     "司马烟推了你一把说: 要进谷不难，但是你有这个资格吗？\n",
        }) );
        set("inquiry", ([
	    "黑白两道"	:	"侠官谓之白道，贼盗谓之黑道，这点你也不懂?",
            "恶人谷"	:	"恶人谷是黑白两道具不见容的最后出路。",
	    "天下第一神剑":	"天下第一神剑不就是燕南天吗?",
	    "进谷"	:	"十大恶人颁布一道通令，有恶人证才准进谷。",
	    "入谷"	:	"十大恶人颁布一道通令，有恶人证才准入谷。",
	    "资格"	:	"资格？杀了燕南天再说吧，哈哈。",
	    "燕南天"	:	(: do_ask2 :),
	    "恶人证"	:	(: do_ask1 :),
	    "恶人证明"	:	(: do_ask1 :),
        ]) );
        set_temp("apply/armor", 100);

        setup();
	add_money("gold", 2);
	carry_object(BAD_OBJ"yensword")->wield();
}

void attempt_apprentice(object who)
{
	command("say 你要加入恶人谷？进去找我们大头目吧，我不能收你。");
}

string do_ask1()
{
  object me=this_player();

  // 已经取得恶人证了
  if (me->query("quests/badman_license")) {
    if (!present("badman license", me)) {
	if (new(BAD_OBJ"license")->move(me))
	  return "噫? 你恶人证遗失啦? 我再补一张给你好了。\n";
	else
	  return "喔, sorry, 恶人证目前短缺中，等等再来。\n";
    }
    if (random(2))
	return "你身上的恶人证是入谷的证明，想过去可以过去，我不拦你。\n";
    else
	return "你已经有恶人证了，正是我的同伴，欢迎进入恶人谷。\n";
  }
  else if (me->query_temp("quests/badman_license") != 0)
    switch (random(5)) {
	case 0:
	  return "还不快去找恶人证，呆在这儿干嘛?\n";
	  break;
	case 1:
	  return "光问我恶人证是没用的，心动不如马上行动。\n";
	  break;
	case 2:
	  return "当然得去谷外寻找恶人证了。\n";
	  break;
	default:
	  return "只有真正心地邪恶的人才有资格拿到恶人证。\n";
	  break;
    }
  else {
    me->set_temp("quests/badman_license", 1);
    if (random(2))
	return "如果你能拿燕南天的尸体来，我就发给你一张恶人证。\n";
    else
	return "想从我手中拿到恶人证，除非提燕南天的尸体来换吧。\n";
  }
}

string do_ask2()
{
  switch (random(5)) {
    case 0:
	return "啊! 他真是令人可敬可畏的人啊。\n";
	break;
    case 1:
	return "要不是他，我们也不必躲到恶人谷来了。\n";
	break;
    case 2:
	return "他正是另黑白两道都配服的人，也正是恶人谷的死仇大敌。\n";
	break;
    case 3:
	return "他的剑术已经达到心剑合一的地步了。\n";
	break;
    default:
	return "唉，别提他了，你一提他我就头疼。\n";
  }
}

// 要带燕南天的尸体来
// 因为还要在里面救活哩
int accept_object(object who, object ob)
{      
  string name, str;

  if (ob->query("name") == "腐烂的尸体") {
    tell_object (who, "司马烟冷冷的说道: 尸体都烂成这样了，谁知道你拿的"+
			"是哪只阿猫阿狗的尸体啊？\n");
    command("give "+who->query("id")+" "+ob->query("id"));
    return 1;
  }

  if (ob->query("name") != "燕南天的尸体") {
    if (random(2))
	tell_object (who, "司马烟生气的说道: 叫你拿个燕南天的尸体，"+
				"你给我的这是什么跟什么啊。\n");
    else
	tell_object (who, "司马烟恨恨的道: 不拿燕南天的尸体来有个屁用啊。\n");
    command("give "+who->query("id")+" "+ob->query("id"));
    return 1;
  }

  if (who->query_temp("quests/badman_license")!=6) {
    if (random(2))
	tell_object (who, "司马烟很高兴的说道: 噫? 要送我燕南天的尸体? "+
		     "这下我可以去邀功了，真多谢你了。\n");
    else
	tell_object (who, "司马烟很高兴的说道: 谢谢你这么努力帮我杀死燕南天，"+
	  	     "可惜没什么好赏你。\n");
    destruct(ob);
    return 1;
  }

  if (new(BAD_OBJ"license")->move(who)) {
    if (random(2))
	tell_object (who, "司马烟看了看尸体说: 没错，这是燕南天的尸体，"+
				"就发给你一张恶人证吧。\n");
    else
	tell_object (who,
		"司马烟看了看尸体说: 看在你辛苦解决恶人谷的大患的面上，" +
		"就发给你一张恶人证吧。\n");
    name = who->query("name");
    str = name[0..1];
    tell_object (who,
		"司马烟恭敬的对你说: "+str+"大侠，真想不到您能干掉燕南天，"+
		"谷主已经在等您了，请进。\n");
    who->set("quests/badman_license",1);
    who->delete_temp("quests/badman_license");
  }
  else {
	write ("司马烟叹了口气说道: 目前物资缺乏，你只好等以后再来了。\n");
	who->delete_temp("quests/badman_license");
  }
  destruct (ob);
  return 1;
}

int accept_fight(object who)
{
  return notify_fail("司马烟瞪了你一眼说: 哼，老子没空理你，少烦我！\n");
}

int accept_kill(object who)
{
  object me;
  me=this_object();
  if( me->is_fighting() )
	return 1;
  command("shout 好小子，竟敢硬闯恶人谷，我看你是不要命了。");
  command("shout 兄弟们，给我宰了"+who->query("name")+"这个兔崽子！");
  return 1;
}

/*
void die()
{
  CHANNEL_D->do_channel(this_object(), "mud", HIY"\n恶人谷被人入侵了！！"NOR);
  ::die();
}
*/
