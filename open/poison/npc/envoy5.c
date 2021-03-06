#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_firer();
void create()
{
        set_name("传令使",({"envoy"}));
        set("long","魔教七大使之一，平时为教主传递教令。
此时使者行色匆匆，腰间还系一锦袋，不知其内为何物。\n");
        set("gender","男性");
        set("class","poisoner");
	set("combat_exp",12000);
        set("age",26);
	set("str", 30);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",450);
        set("max_force",450);
	set_skill("force",40);
	set_skill("poisonforce",30);
	map_skill("force","poisonforce");
        set_skill("dodge",30);
        set_skill("nine-steps",20);
        map_skill("dodge","nine-steps");
	set_skill("unarmed",50);
        set_skill("whip",40);
	set_skill("parry",10);
	set_skill("poison",30);
	set_skill("coldpoison",40);
	map_skill("poison","coldpoison");
        set("inquiry",([
        "赤火令" : "你想作什么，你没看到我有急事吗?",
        "急事"   : "看到我腰间的锦袋没，就跟它有关呀。",
        "锦袋"   : (: about_firer :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object(POISON_OBJ"snake_whip")->wield();
        carry_object("/obj/poison/faint_poison")->set_amount(20);
}
void init()
{
  add_action("do_nod","nod");
  add_action("do_say","say");
  add_action("do_shake","shake");
}
string about_firer()
{
  object me = this_player();
  if(me->query_temp("get_firer"))
        return "你不是问过我了吗?";
  me->set_temp("get_firer",1);
  command("say 那是平常我用来装带令牌之用。");
  command("say 如今教主有意招开群魔会，要我传令至各地魔王。");
  return "我有些分身乏术，你愿不愿意帮我忙?";
}
int do_nod()
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  me->set_temp("get_firer",2);
  remove_call_out("greeting1");
  call_out("greeting1",1,me);
  return 0;
}
int do_shake()
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  me->delete_temp("get_firer");
  remove_call_out("greeting2");
  call_out("greeting2",1,me);
  return 0;
}
int do_say(string str)
{
  object me = this_player();
  if(me->query_temp("get_firer") != 1)
        return 0;
  if(str != "yes" && str != "愿意")
       {
        delete_temp("get_firer");
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
  object ob = new("/open/poison/obj/firer");
  ob->move(me);
  command("smile");
  command("say 这令牌给你，你就帮我传给青翼蝠王。");
}
void greeting2(object me)
{
  command("agree");
  command("say 你不帮忙就算了，还问我一堆事情，延误我的行程。");
  command("say 真是可恶，看招。");
  kill_ob(me);
}
