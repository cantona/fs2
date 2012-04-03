#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_quest();

void create()
{
        set_name("访客",({"visitor"}));
        set("gender","男性");
        set("combat_exp",612);
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("inquiry",([
        "月石"   : "喔....？你可知‘暗语’吗？",
        "暗语"   : (: about_quest :),
        ]));
  
        setup();
        carry_object("/open/poison/obj/card");
}

void init()
{
  add_action("do_say","say");
}

string about_quest()
{
  object me = this_player();
  if(me->query_temp("moon-stone",1))
        return "你不是问过我了吗?";
  me->set_temp("moon-stone",1);
  command("say 道高一尺。");
  command("say 这是暗语的上联。");
  return "你能接出下联吗？";
}
int do_say(string str)
{
  object me = this_player();
  if(me->query_temp("moon-stone") != 1)
        return 0;
  if(str !="魔高一丈")
       {
        delete_temp("moon-stone");
        remove_call_out("greeting2");
        call_out("greeting2",1,me);
        return 0;
       }
  me->set_temp("get_firer",2);
  remove_call_out("greeting1");
  call_out("greeting1",1,me);
  return 0;
}

void greeting1(object me)
{
  command("smile");
  command("say 你一定是‘镖师’了。");
  command("say 你快去平南找传功大长老吧。");
}
void greeting2(object me)
{
  command("say 你这家伙真无聊。");
  command("say 人家不理你了。");
  me->set_temp("moon-stone",1);
}




