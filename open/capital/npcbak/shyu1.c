
#include <ansi.h>
#include </open/open.h>

inherit NPC;
string do_change();
string do_faceoff();
void create()
{
          set_name("徐大妈", ({ "mama shyu","mama","shyu" }) );
	set("gender", "女性" );
        set("age",45);
        set("str",35);
        set("cor",35);
	set("cps", 25);
	set("int", 15);
      set("long","徐大夫的夫人。\n");
	set("combat_exp",338);
	set("attitude", "peaceful");
        set("inquiry",([
        "变性":(: do_change :),
      "整容":(: do_faceoff :),
	"特殊服务":"仅此一家,别无分号,整容三千两黄金,变性五千两黄金。\n", ]));
             set("chat_chance", 20);
        set("chat_msg", ({
           "我们有「特殊服务”哦,参考看看啦....\n",
        }) );
	setup();
        carry_object("/obj/cloth")->wear();
}

int accept_fight(object me){
        return notify_fail("徐大妈叫道 : 夭寿喔!连我都想打啊?!\n");
}
string do_change(){ 
        object who;
        string str;
        who = this_player();
        str = "变性一次五千两黄金，\n";
        if( !who->can_afford(50000000) ) {
        str += "钱不够啊！那就对不起了。\n";
          return str;        }
       else {   who->pay_money(50000000);
                who->set_temp("change", 1);
                message_vision("$N付给徐大妈一笔钱。\n", who);
                  str += "嗯，变性手术请往北走。\n";
                return str;
}
}
string do_faceoff(){ 
         object who;
         string str;
         who = this_player();
str = "整容一次一千五百两黄金，\n";
          if( !who->can_afford(15000000) ) {
          str += "钱不够啊！那就对不起了。\n";

           return str;        }
        else {   who->pay_money(15000000);
                 who->set_temp("faceoff", 1);

                 message_vision("$N付给徐大妈一笔钱。\n", who);
                    str += "嗯，整容手术请往东走。\n";
               return str;
}}


