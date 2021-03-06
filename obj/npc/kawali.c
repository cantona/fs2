#include <ansi.h>
#include "/u/c/cage/lib/cage.h"

inherit NPC;
/*

inherit F_CLEAN_UP;
*/

string usr="";
int time=5000,reboot=0,nosave=0;

void create()
{
  set_name("慎村香",({"lady kawali","lady","kawali"}));
  set("long","她是阿獠的搭挡，与阿獠并称‘城市猎人’。虽然没有精准的枪法，但是一手\n"+
  "精湛的槌法却是连阿獠都躲不过。可别看她两手空空喔，她有个超级绝活就是\n"+
  "随时可以变出一把大槌子把人打到千里之外！\n");
  set("gender","女性");
  set("nickname","城市猎人");
  set("combat_exp",400000);
  set("attitude","heroism");
  set("age",22);
  set("str",26);
  set("cor",15);
  set("cps",28);
  set("per",23);
  set("int",35);
  set("kar",40);
  set("spi",14);
  set("con",24);
  set("force",450000);
  set("max_force",450000);
  set("force_factor",10);
  set("max_kee",80000);
  set_skill("array",100);
  set_skill("hammer",120);
  set_skill("parry",100);
  set_skill("cure",100);
  set_skill("literate",100);
  set_skill("dodge",80);
  set_skill("force",70);
  set_skill("move",100);
  set_skill("unarmed",100);
  setup();
  set_temp("channels",({"chat*","shout","sys","wiz"}));
  carry_object(_OBJ"hammer.c")->wield();
  carry_object(_OBJ"bullet.c");
/*
  command("wear amulet");
*/
}

void init()
{
  add_action("do_reboot", "reboot");
  add_action("do_report", "report");
}

int do_report()
{
 if (!(this_player()->query("id")=="cage")) return 0;
 command("say 内部变数:usr:"+usr+" ,time:"+time+" reboot:"+reboot+" nosave:"+nosave+"\n");
 return 1;
}

private void do_shutdown()
{
  object        *ob, link;
  int           i;
  message("system",
          "\n\n中央驿站传来慎村香的声音喊道：\n\n"+
          "\t\t可恶的阿獠！你给我记住 ～～～～ ！\n\n"+
          HIW+"声音一毕，阿香高举巨槌"+HIR+"**天诛**"+HIW+"打向地面，大地开始崩裂...\n\n"+
          NOR+BLU+"\t当你正因眼前的山崩地裂惊愕不己时，你脚下的地面突然裂开\n\n"+NOR+
          "\t\t你踩了个空，整个人一下子跌入无尽的深渊......\n"+
          "\t\t最后你的眼前一片黑暗....无止尽的黑暗..再难寻一丝光芒...\n\n",
          ob = users() );
  for (i=0; (i<sizeof(ob) && !(nosave)); i++) 
  {
    ob[i]->save();
    if( objectp(link=ob[i]->query_temp("link_ob")) ) link->save();
  }
  shutdown(0);
}

private void start_shutdown()
{
  do_command("chat* angry");
  command("shout 阿獠你这个混蛋昨天又没回来，跑哪去了！");
  message("system",
          "\n你听到从中央驿站传来一阵咆哮 ....\n\n"
          "阿香用震耳欲聋的声音喊道：\n\n"
          "\t\t全 天 下 的 众 生 给 我 仔 细 听 着 ！\n\n"
          "\t\t限你们"+HIY+chinese_number(time)+NOR
          "分钟内把阿獠给我找回来 ！\n\n"
          "\t\t不 然 的 话 ....就等着吃我的槌子吧 ！\n\n" NOR,users() );
  call_out("countdown", 60);
}

int do_reboot()
{
  int i;
  string wiz_status,nos="";

    reboot=1;
    i = 5;
    command("say 好吧！开始倒数计时reboot了。");
    command("go ent");
    command("go down");
    command("go down");
    set("startroom",REBOOT_PLACE);
    time = i;
    start_shutdown();
    return 1;                              
//}
}

                                        
private void countdown()
{
  time--;
  if (time > 3000) return ;
  if (time > 15) call_out("countdown", 60);
  else
  { 
    if( time ) 
    {
      message("system",
              "\n中央驿站传来阿香的声音喊道：\n\n"
              "\t\t"+HIY +chinese_number(time)+NOR "分钟内把阿獠给我找出来！\n\n"
              "\t\t你  们  再  混  就  给  我  试  试  看  ！\n\n" NOR,users() );
      call_out("countdown", 60);
    } 
    else 
    {
      message("system",
              "\n中央驿站传来阿香的声音喊道：\n\n"
              HIB"\t\t可恶啊，你们给我混！\n\n"
              "\t\t你们要倒大楣了！\n\n" NOR,users() );
       call_out("do_shutdown", 3);
    }
  }
}
                                                                            
int accept_fight(object ob)
{
  if ((int)ob->query("max_kee") < 250)
    return notify_fail("阿香对你说道：你还太弱还是不要跟我比武比较好！\n");
  return 1;
}
int accept_kill(object ob)
{
  if ((int)ob->query("max_kee") < 350)
  {
    tell_object(ob,"阿香对你说道：你连我一槌都挡不了还想杀我？\n");
    return 0;
  }
  return 1;
}

void heart_beat()
{
 object obj,target,*list;
 int ppl,i,j;
 :: heart_beat();
 if(!is_fighting()) return;
 if(5 < random(15)) return;
 obj=select_opponent();
 list = users();
 ppl = sizeof(list);
 j=5;
 do
 {
   j--;
   i = random(ppl);
   target = list[i];
 }
 while((obj == target || wizardp(target)) && j);
 i = obj->query("max_kee") * 0.5;
 if (i < 100) i = 100;
 if (!j)
 {
   message_vision("阿香使出慎村流巨槌奥义==破杀留声==$N被打到九天之外！\n",obj);
   message_vision("$N被打到半空中又掉了下来，受了极大的伤害\n",obj);
   obj->receive_wound("kee",i,this_object());
   return;
 }
 obj->remove_all_enemy();
 obj->receive_wound("kee",i,this_object());
 message_vision("阿香使出慎村流巨槌奥义==破杀留声==$N被打到九天之外！\n",obj);
 tell_room(environment(target),"咦？天上那是什么东西？\n"+
             "哇！~~碰的一声!"+(string)obj->query("name")+"从天上掉下来。\n");
 obj->move(environment(target));
 tell_room(environment(target),obj->query("name")+"重重地摔在"+
                            target->query("name")+"身上！\n",({ obj,target}));
 tell_object(obj,"你重重地压在"+target->query("name")+"身上！\n哇~~痛死了！\n");
 tell_object(target,obj->query("name")+"正好摔在你身上！\n喔~~~好痛，真倒楣！\n");
}

                                                

void die()
{
 object ob;
 if (!reboot) 
 {
   :: die();
   return;
 }
 else
 {
   if( !ob = query_temp("last_damage_from") ) ob = this_player(1);
   if( !ob ) return;
   message("system",ob->name(1)+"给阿香致命的一击！"+
           HIG+"\n\n呜~~~对不起各位，我错了。\n\n"+
           HIW+"阿香沮丧地回去了，你松了一口气！\n\n"+NOR,users() );
   this_object()->remove_all_enemy();
   this_object()->move(_HOME);
   set("startroom",_HOME);
   reboot=0;
   time=5000;
 }
}

int return_home(object home)
{
 if (!reboot) :: return_home(home);
 return 1;
}
