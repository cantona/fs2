#include <ansi.h>

inherit NPC;

string ask1();	// 命名
string ask2();  // 宝物

void create()
{
  seteuid(getuid());
  set_name( "你爸爸", ({ "papa" }) );
  set("long", @LONG
你正盯着自己的爸爸看着, 看他满怀心事的样子, 整天忧愁苦脸的,
不知是为了哪一桩事情在担忧, 做儿子的您是不是能够帮帮他呢?
LONG);
  set("gender", "男性" );
  set("race", "人类");
  set("age",55);

  set("inquiry", ([
      "冒险"	: "要不是我这把老骨头不中用了, 你爸爸我自己去好了, 省得你啰唆!",
      "祖宗十八代":"小子啰哩巴唆的, 问你祖宗十八代干嘛?!怀疑是我儿子啊!",
      "埋葬"	: "东村口外的小山丘上的那堆乱坟不就是了吗?",
      "种田"	: "种田有什么用, 要是找到宝物就好了.",
      "耕种"	: "耕种有什么用, 要是找到宝物就好了.",
      "武功"	: "听说蜀山附近躲着怪兽, 又听说那边住着剑仙, 不知是真是假.",
      "蜀山"	: "你也知道你老爸一生都在凌云村, 希望你能出去帮我找一找蜀山在哪.",
      "宝物"    : (: ask2 :),
      "妈妈"	: "唉, 要不是你妈去的早, 我也不必依靠你照顾了.",
      "心事"	: (: ask1 :),
      "忧愁苦脸": (: ask1 :),
      "担忧"	: (: ask1 :),
      "妹妹"	: (: ask1 :),
      "张大婶"  : "她外号张快嘴, 她的话也能信吗?",
      "张快嘴"  : "还不是因为她有话包不住嘴, 逢人便到处宣传别人的密秘?!",
      "陌生人"	: "你猪啊你, 就因为是陌生人, 又有谁会知道了啊!",
  ]) );

  setup();
}

string ask1()
{
  object	me=this_player();

  if (me->query("quests/chfn"))
    if (random(2))
	return "你爸爸气呼呼的大叫: 叫你出去找冒险学武, 你跑来跟我啰唆, 欠扁吗?!\n";
    else
	return "你爸爸红着脸叫道: 来人啊, 看看我这不肖子, 有事没事跑回来跟我啰唆!\n";

  if (!me->query_temp("quests/chfn")) me->set_temp("quests/chfn",1);
  switch (random(5)) {
    case 0:
	return "你妈妈老来生了个掌上明珠, 可惜前天傍晚之后\n"
	"就没再看到人了, 你说会不会急死人!";
	break;
    case 1:
	return "唉...........";
	break;
    case 2:
	return "你有看到你妹妹吗?\n";
	break;
    default :
	return "听张大婶说, 有人看到陌生人在附近走动, 不知是不是被拐走了.";
	break;
  }
}

int chat()
{
}

string short()
{
  object	me=this_player();

  return sprintf ("%s的爸爸(%s' papa)", me->name(), me->query("id"));
}

int accept_fight(object who)
{
  say ("你....你这不肖子, 你老爸这把骨头你也想跟我动手动脚....\n");
}

int accept_kill(object who)
{
  say ("你....你这不肖子, 连你老爸你都想砍....\n");
}
