#include <ansi.h>
#include <../../open.h>

#include <ansi.h>
inherit NPC;
inherit SSERVER;

string chat_msg();
string combat_msg();
int pearl()
{
	object ob;
	ob = this_player();
        if(ob->query("ask_god_kee") != 2)
        return notify_fail("我不了解你在说什么!!!!\n");
        command("say 原来任正晴都跟你说了呀~~念在你曾帮过我!!");
        command("hmm");
        command("say 好吧!!如果要天灵石就拿天邪石来换好了...!");
          ob->set("get_sky_stone",1);
        return 1;
}
string linhwi()
{
if( !present("lin sword",this_player()) )
return "你要带我去见她吗 ? 可是我怎么知道你说的是真是假 ? 有何凭证 ?\n";
        command("follow " + this_player()->query("id"));
        return "好 ! 我这就跟你去 !\n";
}
int accept_object( object who , object ob )
{
  object mid;
  if( ob->query("id") == "stone" && ob->query("quest_stone"))
   {
        if(who->query("get_sky_stone")!=1)
     return notify_fail("你给我这东西做什么呀??\n");
    say("独孤云仔细看了看!!说道:这果然是天邪石。\n");
    command("say 好吧!!我就按照约定把天灵石给你吧。\n");
    mid=new("/open/snow/obj/sky_lin_stone");
    mid->move(who);
    return 1;
  }
  if( ob->query("id") == "lin sword" ) {
                command("nod");
                command("say 好 ! 我这就跟你去 !");
                command("follow " + this_player()->query("id"));
                return 1;
        }
  if( ob->query("id") == "poet book" || ob->name() == HIC "独孤诗文集" NOR)
        {
        command("say 谢谢你!!");
        command("hmm");
        command("say 为了感谢你的帮助!!我就告诉你二个秘密!!!");
        command("say 一、刘全书及任正晴曾在玄天圣谷中修习更上层的绝学!!!");
        command("say 二、泷山掌门练有传说中的仙云灵气!!!");
        who->set("ask_god_kee",1);
        who->set("ask_super_fighter",1);
        return 1;
        }
/*      if( who->query("ice-stial") ) {
                command("?");
                return 1;
                        }

        command("say 谢谢你 ! 好 ! 那么我就传授你寒冰掌 !");
        who->set("ice-stial",1);

        if( !who->query_skill("snow-martial",1) )
                who->set_skill("snow-martial",1);

        who->set("functions/ice-stial/level",1);
*/
                command("say 你给我这个干嘛 ?\n");
                return 0;
}
void create()
{
        set_name("独孤云",({"dugur"}));
        set("long",@LONG
他是独孤愁的独生子，单名一个「云”字，
乃是雪苍派新生代中排行第一的高手，其智慧、
武功、人品等皆堪称一品，而其外貌则十分斯文
，有著名人雅士一般的气势，因此在江湖上有着
一个名号叫「全才书生”。
LONG);
        set("attitude", "heroism");
        set("gender","男性");
        set("nickname",HIC "全才书生" NOR);
        create_family("雪苍派",5,"弟子");
        set("age", 20);
        set("str", 20);
        set("cor", 20);
        set("cps", 20);
        set("per", 30);
        set("max_force",1500);
        set("force",1500);
        set("force_factor",30);
        set("max_kee",1000);
        set("kee",1000);

        set_skill("dodge",70);
        set_skill("black-steps",70);
        map_skill("dodge","black-steps");
        set_skill("sword",50);
        set_skill("stabber",50);
        set_skill("unarmed",80);
        set_skill("snow-martial",80);
        map_skill("unarmed","snow-martial");
        set_skill("force",80);
        set_skill("snowforce",100);
        map_skill("force","snowforce");
        set("combat_exp",500000);

        set("chat_chance",40);
        set("chat_msg",({ (: chat_msg :) }));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({ (: combat_msg :) }));
        set("inquiry",([
                "独孤愁" : "独孤愁乃是家父，已经仙逝多时了 ...\n",
                "仙逝" : "家父是为了锻练雪苍派不传神功而走火入魔 ... 唉 . ...\n",
                "去老还童术" : "那是一种十分微妙的一种功夫，相传修练这种功夫必需练到极限，才能够返老还童，据我所知，这种功夫十分难练，而且会的人不多。\n",
                "会的人" : "据我所知，只有我爹爹有练过这种功夫但是并没有练到极限，可惜 ...\n",
                "可惜" : "可惜我爹爹已经仙逝了，而且也没有留下什么秘笈，所以这部功夫也就因此失传了。\n",
                "秘笈" : "我爹爹去逝后只有留下几样家传宝贝，天诛笔、穿龙剑等等，并没有什么秘笈留下。\n",
                "天诛笔" : "这是我家传的宝贝之一，这只笔相当神奇，不用墨水就能写字哦。\n",
                "穿龙剑" : "这是我家传的宝贝，能够削铁如泥，而且如果配上穿龙剑法，更是威力无穷。\n",
                "寒冰掌" : "家父生前曾经教过我这部功夫，但是不能外传他人﹛M果你能帮我找到，我就教你寒冰掌。\n",
                "除非" : "云毕生最大憾事乃是失落了爹爹生前所著的诗文集，如果你能帮我找到，我就教你寒冰掌。\n",
                "黑仙罗汉" : "此人嘛 ? .. 我略有所闻，此中H早在二十年前就威镇江湖，\n      他的武功不弱，但是自从败在我爹爹手下，就消失武林。\n      我想刘掌门应该更清楚他的来历。\n",
                "刘玲慧" : (: linhwi :),
                "天灵石" : (: pearl :),
                "诸葛卧龙" : "此人复姓诸葛名卧龙，具有经天纬地之才，又有神鬼莫测的卜卦能力，世称「神算先生”。\n",
                "神算先生" : "此人生平喜爱结交有知识、有智慧的人士，与邢贤书为莫逆之交。\n",
           ]));

        setup();
        carry_object(SNOW_OBJ"dragon-sword");
        carry_object(SNOW_OBJ"tenpen");
        carry_object(SNOW_OBJ"blue-cloth")->wear();

}
int get_power(object ob)
{
        int power;
        string skill_type;
        if(!ob) return 1;
        skill_type = ob->query_temp("skill_type");
        if( skill_type == "unarmed" )
                power = ob->query_skill(skill_type);
        else
                power = ob->query_skill(skill_type) * 2;
        power += ob->query_skill("dodge");
        power += ob->query_skill("parry");
        power += ob->query_temp("apply/damage");
        power += ob->query_temp("apply/armor");
        power += ob->query_temp("apply/attack");
        power += ob->query_temp("apply/dodge");
        power += ob->query("force") * ob->query("force_factor") / 100;
        power += ob->query("combat_exp") / 500;
        return power * ( ob->query("kee") / ob->query("max_kee") );
}
string chat_msg()
{
        return "";
}
string combat_msg()
{
        object ob = offensive_target(this_object());
        int my_power,ob_power;
        if( is_killing() && query("kee") < 120 ) {
                command("say 真是欺人太甚了 ! 呀 ～～～～～");
                command("cast sword");
                command("cast pen");
                return "";
        }
        my_power = get_power(this_object());
        ob_power = get_power(this_player());
        if( ob_power > my_power * 3 / 2 ) {
                command("say 阁下武艺精湛，独孤某佩服 !");
                if( !this_player()->query_temp("weapon") &&
                    !this_player()->query_temp("secondary_weapon") ) {
                        command("say 既然如此，在下要尽全力了 !");
                        command("wield all");
                        return "";
                }
                return "";
        }
        if( ob_power < my_power / 2 ) {
                if( this_player()->query_temp("weapon") ) {
                        command("say 倚靠兵器为胜，非英雄所为也 !");
                        command("unwield sword");
                        command("unwield pen");
                        return "";
                }
        }
        if( random(3) == 0 ) {
                command("say 来吧 ! 经验我的天诛笔式 !");
                command("unwield sword");
                command("wield pen");
                return "";
        }
        if( random(3) == 0 ) {
                command("say 穿龙剑法 ～～～");
                command("unwield pen");
                command("wield sword");
                return "";
        }
        return "";
}
int accept_fight(object who)
{
        if( !is_fighting() )
        {
                command("say 阁下既然有兴趣领教，在下自当奉陪。");
                return 1;
        }
        command("say 在下正在与人比试中，若要讨教，就请稍后。");
        return 0;
}
int accept_kill(object who)
{
        if( is_fighting() || is_killing() )
        {
                command("say 倚多为胜非君子所为 !");
                command("say 也罢 ... 怪不得我了 !");
                command("wield all");
                return 1;
        }
        command("say 在下和你有深仇大恨吗 ?");
        command("wield pen");
        return 1;
}
/* 会让天道利用bug.练召唤术.拿掉..
void die()
{
        object killer = query_temp("last_damage_from");
        killer->set("quests/kill-dugur",1);
        message_vision(HIB + @LONG
就在千钧一发之际，突然的窜出一个黑衣人，
黑衣人将独孤云扛起来背在肩上，$n想上前去
阻止，而黑衣人逼不得已，只好使出极招，只
见黑衣人发出雷霆一掌打在$n身上，只听到「
碰”的一声，$n整个人飞了出去！
LONG + NOR,
        this_object(),killer);
        killer->set("kee",1);
        killer->set("force",0);
        COMBAT_D->report_status(killer);
        load_object("/open/snow/room/ducu_live3");
        load_object("/open/snow/room/ducu_live1");
        killer->move("/open/snow/room/ducu_live3");
        killer->move("/open/snow/room/ducu_live1");
        message_vision(HIR "$N吐了一口鲜血，似乎受到了极大的内伤了。\n" NOR,killer);
        message_vision("黑衣人背着独孤云一个飞身就消失无踪了。\n",this_object());
        destruct(this_object());
}
*/
