 
#include <ansi.h>
 
inherit NPC;
 
int test_limit();
 
int party_with(string str)
{
   object me,obj;
   string str1;
   me=this_player();
   if(!str || sscanf(str,"with %s",str1) != 1)
       return notify_fail("格式： party with <npc> \n");
   if( this_object() != (obj = present(str1,environment(me))))
       return notify_fail("你想和谁组队？\n");
   if(!str1=obj->query("be_party_msg"))
       str1 = "这位"+obj->name()+"大侠是否肯与在下同行?";
   message_vision(
       CYN "$N说道："+str1+"\n"NOR,me,obj);
// 底下为有 party 条件限制的
   if(obj->query("lim")==1)
        if(test_limit()==0)
          {
           if(!str1=obj->query("lim_msg"))
               str1= "我不愿与你为伍。";
           command("say "+str1+"\n");
           return 1;
          }
 
   if(obj->query_temp("id")) {
       command("shake");
       command("say 很抱歉，我已经追随别人啰。");
       return 1;
       }
 
   if(me->query_temp("party_number") >= 5) {
       command("hmm");
       command("say 你的队伍阵容已经很强大了，不需要我加入。");
       return 1;
       }
 
   if(!str1 = obj->query("parry_succeed_msg"))
       str1 = "好吧! 就让我们一起同行吧!";
   command("say "+str1);
   command("follow "+me->query("id"));
   me->set_temp("party_number", me->query_temp("party_number")+1);
   obj->set("describe","他目前是"+me->name()+"的组员。\n");
   obj->set_temp("id",me->query("id"));
   return 1;
}
int test_limit()
{
        return 0;
}
int unparty(string str)
{
   object me,obj;
   me=this_player();
   if( this_object() != (obj = present(str,environment(me))))
       return notify_fail("你想跟谁脱离队伍关系?\n");
   if(me->query("id")!=obj->query_temp("id"))
       return notify_fail("他并不属于你的队伍。\n");
   message_vision(
     CYN "$N说道："+obj->name()+" ! 我们之间的队伍关系到此为止。\n"
NOR,me,obj);
   command("say 你.......");
   command("say 哼!!...");
   if(obj->query("will_angry")==1)
   {
      command("say 你这个无情无义的人....纳命来 !");
      obj->kill_ob(me);
   }
   me->set_temp("party_number", me->query_temp("party_number")-1);
   obj->delete_temp("id");
   obj->delete("describe");
   return 1;
}
void die()
{
   string myid;
   object me;
   if(myid = this_object()->query_temp("id"))
      if( me = find_player(myid))
          me->set_temp("party_number", me->query_temp("party_number")-1);
   ::die();
}
int order_npc(string arg)
{
   mapping std_cmds =([
        "wield"     :  1,
        "unwield"   :  2,
        "wear"      :  3,
        "remove"    :  4,
        "follow"    :  5,
        "kill"      :  6,
        "surrender" :  7,
        "say"       :  8,
	"get"	    :  9,
	"drop"      : 10,
        ]);
   object me,obj;
   string npc_name,str1,verb,act,re;
   string cmd1;
   me = this_player();
    if( !arg ) return notify_fail("指令格式 : order <npc> do <command>\n\n");
   if( sscanf(arg,"%s do %s",npc_name,str1) != 2)
       return notify_fail("\n指令格式：order <npc> do <command>\n\n");
   if( this_object() != (obj = present(npc_name,environment(me))))
       return notify_fail("你要命令谁？\n");
   if( me->query("id") != obj->query_temp("id"))
       return notify_fail("别傻啦, 他又不是你的组员...\n");
   if( sscanf(str1,"%s %s",verb,act) != 2) {
      verb = str1;
      act = "";
      }
 
   else if(!std_cmds[verb] && !query("npc_cmds/"+verb))
        return notify_fail("\n我不懂你的意思耶! 你要我帮你做什么事呀？\n");
 
   if(me->query("class")=="officer")
       tell_object(me,CYN" 遵命! 大人! 小的立刻就办。\n\n"NOR);
   else
       tell_object(me,CYN" 是的! 大侠! 这没问题的啦！\n\n"NOR);
 
   if( verb == "kill" && stringp(cmd1 = find_command(verb)) ) {
       message_vision(
       CYN"$N说道："+obj->name()+"! 就让我们一起合攻他吧!\n\n"NOR,me);
       call_other(cmd1,"main",me,act);
      }
   command(verb+" "+act);
 
   return 1;
}

void init()
{
   :: init();
   add_action("party_with","party");
   add_action("unparty","unparty");
   add_action("order_npc","order");
}
 
 
