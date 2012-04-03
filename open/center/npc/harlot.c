// rewrite from washboy.c
// harlot.c by powell
// add quest 坏人证明 & 拯救水仙 by wade

#include "/open/open.h"
inherit NPC;

string do_ask1();
string do_ask2();

void create()
{
        set_name("妓女", ({ "Harlot", "harlot" }) );
        set("race", "人类");
        set("gender", "女性");
        set("age", 18);
        set("long", "她脸上途了厚厚一层胭脂, 正忙着物色有钱的大爷。\n");
        set("attitude", "peaceful");
        set("str", 17);
        set("cor", 15);
        set("combat_exp",318);
        set("chat_chance", 5);
        set("chat_msg",({

             "妓女微笑道∶人客里面坐喔.....\n",
             "妓女挤眉弄眼的对你说道 : 大爷 ! 想不想舒服舒服呀。\n",
             "妓女喃喃自语的道 : 水仙姑娘不见后, 丽春院的生意少了不少..\n",
             "妓女偷偷的告诉你 : 你想知道水仙姑娘的下落吗? \n",
             "妓女靠到你身边说道 : 大爷想到楼上休息吗?\n",
             "妓女笑道 : 大爷如果对我有兴趣, 可以先找老鸨接洽接洽喔.\n",

        }));
        set("inquiry", ([
            "移花宫"            :       "嘘，不要命了吗? 这种事也问得的? 快闭嘴。",
            "老鸨"              :       "老鸨真没人性，连小女还都不放过。",
            "恶人谷"            :       "那是恶人聚集的地方，您问我也没用，去问问坏人吧。",
            "丽春院"            :       "您不知道吗? 丽春院老板是鼎鼎大名的韦小宝。",
            "老鸨"              :       "老鸨要我在这儿好好招呼客人, 客倌您就选我嘛!",
            "水仙姑娘"          :       (: do_ask1 :),
            "哥儿们"            :       (: do_ask2 :),
            "英俊的哥儿们"      :       (: do_ask2 :),
        ]) );
        set_temp("apply/attack", 10);
        set_temp("apply/damage", 2);
        set_temp("apply/armor", 2);

        setup();
       carry_object(CENTER_OBJ"cloth2")->wear();
       carry_object(CENTER_OBJ"pant1")->wear();
}

// 问水仙当起头
string do_ask1()
{
  object me=this_player();

  if (me->query("quests/help_water_god")) {
    me->delete_temp("quests/help_water_god");
    if (random(2))
      return "对了，老鸨要我谢谢你帮忙救出水仙姑娘。";
    else
      return "您也要关心关心妹子嘛，老是问水仙水仙的。";
  }
  else if (me->query_temp("quests/help_water_god"))
    switch (random(5)) {
      case 0:
        return "哎呦，我已经把所有知道的都说了呀。";
        break;
      case 1:
        return "这件事开头就是因为那个英俊的小子嘛。";
        break;
      case 2:
        return "其实要不是水仙姑娘先接待那位小哥，我也会爱上他的。";
        break;
      case 3:
        return "听说水仙与那英俊的小哥在这丽春院风流了三天三夜，真羡煞人了。";
        break;
      default:
        return "一问再问，您烦不烦啊。";
    }
  else {
    me->set_temp("quests/help_water_god", 1);
    return ("不瞒您说，上次有个英俊的哥儿们来，" +
        "咱水仙姑娘就失魂落魄的了。\n"+
        "妓女接着说道: 这次要不是水仙姑娘肚子越来越大，终于"+
        "被移花宫的人发现了，他们也不用逃亡了。");
  }
}

string do_ask2()
{
  object me=this_player();
  int   query;

  query = me->query_temp("quests/help_water_god");
  if (!query || me->query("quests/help_water_god"))
  {
    if (random(2))
      return "那英俊的哥ㄦ们关我们啥事啊，快跟我进房间去快活快活。";
    else
      return "您爱说笑了，这儿不就有一位英俊的哥ㄦ们吗?";
  }
  switch (random(7)) {
        case 0:
          return "那位老兄跟水仙姑娘现在正在被追杀，请您赶快去解救吧。";
          break;
        case 1:
          return "哎呀呀，救人如救火，这事我们小女子无法出面，全靠您了。";
          break;
        case 2:
          return "那位老兄搞大了水仙姑娘的肚皮，两人就私奔去了。";
          break;
        case 3:
          return "听说水仙姑娘本来是绣玉谷移花宫大宫主的婢女。"+
               "妓女说道：至于那位老兄就莫宰羊了。";
          break;
        case 4:
          return "这哥儿们有一位江湖上的好朋友，叫什么来的? 一时忘记了。";
          break;
        case 5:
          return "想救水仙姑娘的话，您还是赶快上路吧。";
          break;
        default:
          return "一问再问，您烦不烦啊。";
  }
}
