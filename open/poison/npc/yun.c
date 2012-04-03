  
// by lys
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_sec();
string about_jail();
string about_lotch();
void create()
{
        set_name("赵青云", ({ "chao ching yun","ching yun","yun" }) );
        set("gender","男性");
        set("age",25);
        set("int",40);
        set("inquiry", ([
                "秘密" : (: about_sec   :),
                "石牢" : (: about_jail  :),
                "宝藏" : (: about_lotch :),
                ]) );
        setup();
}
void init()
{
object me = this_player();
if(me->query_temp("poison_help") == 3) {
        remove_call_out("greeting");
        call_out("greeting",1,me);
       }
}
string about_lotch()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "我不知道你在说些什么呀! ";
  command("say 曾有一魔教徒到金刀门为此魔教教主取得一宝物。");
  command("say 然因私藏宝物被捕入狱，曾被关在对面牢里。");
  return "还说过箱底有宝什么的，真搞不懂是怎么一回事。";

}
string about_jail()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "我不知道你在说些什么呀! ";
  command("say 其实进入石牢并不一定要磁石不可。");
  command("say 只要按那圣火像(fire)即可。");
  return "只要你让我母亲放心时，你就会明白按法。";
}
string about_sec()
{
  object me = this_player();
  if( me->query_temp("poison_help") < 3 )
        return "我有说过要告诉你秘密吗?" ;
  command("say 我知道石牢和宝藏两种秘密。");
  return "不知你要问何种秘密。";
}
void greeting(object me)
{
  object jade = new(POISON_OBJ"jade");
  me->set_temp("poison_help",4);
  command("smile");
  command("say 谢谢你来救我，我另有急事要办，无法马上回家。");
  command("say 这玉佩\烦请转教我母亲大人，她会知到我已平安。");
  jade->move(me);
}
