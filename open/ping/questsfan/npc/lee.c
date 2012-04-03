inherit NPC;  //李爷爷 by dhk 2000.4.22
#include <ansi.h>
#include </open/open.h>
string do_bodyguard();

void create()
{
    set_name("李爷爷",({"grandfather lee","lee","grandfather"}) );
    set("gender", "男性");
    set("age",77);
    set("attitude", "peaceful");
    set("long", ""CYN"他是宏禧庄庄主，富甲一方、不可一世。年前外出办货\n"
               +"时，不幸遇到风行山寨土匪，其随从数百名全数命丧生\n"
               +"，他确侥幸逃过一劫，现下落难中央驿站。而山庄归途\n"
               +"又危机四伏，他因失去数百随从而不敢﹝回家﹞。"NOR"\n");
    set("kee",600);
    set("max_kee",600);
    set("goodman",1);
    set("combat_exp",1000);
    set("inquiry", ([
                     "回家"         : (: do_bodyguard :),
    ]));

    setup();
}
int accept_kill(object who)
{
  command("say 别杀我....");
  command("help!");
  return 1;
}
int accept_fight(object who)
{
  command("say 别打我....");
  command("help!");
  return 1;
}
string do_bodyguard()
{
        object me=this_player();
        object room = environment(this_object());
        if( me->query("family/family_name")=="段家") //&& me->query("marks/six_sp")<=2)
        {
          me->set_temp("bodyguard",1);
          return("
              原来你是段将军的门下呀！真是老天有眼，不知道你能不能护送
              我回家，我家是宏禧山庄位于中央驿站的东北方，你就看在我是
              一个流落在外的可怜老人，拜托！拜托！");
        }
        else
        {
          command("sigh"+me->query("id"));
          return("你不是段将军家的门人，我不放心!!");
        }
}
void init()
{
  remove_call_out("greets");
  call_out("greets",1,this_player());
  add_action("do_nod","nod");
  add_action("do_shake","shake");
  add_action("do_say","say");
}
void greets(object me)
{
  command("sigh");
}
int do_nod()
{
object me = this_player();
if(me->query_temp("bodyguard") != 1)
        return 0;
me->set_temp("bodyguard",2);
remove_call_out("greeting");
call_out("greeting",1,me);
 return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("bodyguard") != 1)
        return 0;
if(str == "yes" || str == "ok")
     {
        me->set_temp("bodyguard",2);
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
delete_temp("bodyguard");
remove_call_out("greeting2");
call_out("greeting2",1,me);
return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("bodyguard") != 1)
        return 0;
  me->delete_temp("bodyguard");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
void greeting(object me)
{
  object ob = this_object();
  command("smile");
  command("say 谢谢你肯帮我的忙。");
  command("follow "+me->query("id"));
me->set_temp("goodman",1);
}
void greeting2(object me)
{
command("sigh");
tell_room(environment(this_object()),HIC"只见老爷爷失望、落陌的神情。\n"NOR);
}
