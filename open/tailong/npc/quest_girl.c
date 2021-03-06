#include <ansi.h>
inherit NPC;
string do_game();
void create()
{
        seteuid(getuid());
        set_name("小女孩",({"little girl","girl"}));
        set("long",@LONG
一个小女孩，独自一个人在玩游戏，看起来好孤独，好可怜喔!!
LONG);
        set("gender","女性");
        set("combat_exp", 1000);
        set("attitude","friendly");
        set("age",12);
        set("force",5000);
        set("max_force",5000);
        set("kee",1000);
        set("max_kee",1000);
        set("force_factor",30);
        set("inquiry", ([
        "玩游戏" : (: do_game :),
        ]));
        set("chat_chance", 5);
        set("chat_msg", ({
        "小女孩道: 唉!一个人玩游戏真无聊，都没有人可以陪我玩。\n",
        }));
        setup();
}
void init()
{
  object ob;
    add_action("do_answer","answer");
  if(interactive(ob =this_player())) {
  call_out("greeting",1,ob);
  }
}
void greeting(object me)
{
if(!me) return;
if(me->query("get-evil-mblade") && me->query("title")=="[1;32m妖[1;37m刀[1;32m传[1;37m人[0m") return;
if(me->query("mk-blade")) {
if(me->query("gender")=="男性" && me->query("title")!="[1;37m漩羽[1;33m刀皇[0m")
{
me->set("title",HIW"漩羽"HIY"刀皇"NOR);
message_vision(HIW"\n白光散去$N的称号修正完毕。\n"NOR,me); 
}
else if(me->query("gender")=="女性" && me->query("title")!="[1;34m刀魂[1;36m幽姬[0m")
{
me->set("title",HIB"刀魂"HIC"幽姬"NOR);
message_vision(HIW"\n白光散去$N的称号修正完毕。\n"NOR,me);
}
}
}
int set_number()
{
    int i,s,j,flag,num,sub,temp,k;

    num=0;
    for(i=0;i<4;i++){
      s=random(10);
      sub=1;
      for(j=0;j<i;j++)
        sub*=10;
      if(i){
        flag=0;
        temp=sub;
        k=num;
        do{
          temp/=10;
          if((k/temp)==s)
            flag=1;
          else
            k=k%temp;
        }while(temp>1);
        if(flag){
         i--;
         continue;
        }
      }
      num+=s*sub;
    }
    return num;
}
string do_game()
{
    object ppl=this_player();
    int num;
    string number;

    if(ppl->query_temp("number_quest"))
      return "你正在跟我玩阿!!!\n";

    number="";
    num=set_number();
    if(num<1000)
      number+="0";
    number+=sprintf("%d",num);
    ppl->set_temp("number_quest/number",number);
    tell_object(ppl,"小女孩说道:你要跟我玩游戏吗，真是太好了!!!\n");
    tell_object(ppl,"小女孩说道:那我们现在来玩猜数字游戏。\n");
    tell_object(ppl,"小女孩说道:我会从"HIY"０～９"NOR"选四个不重覆的数字让你猜?\n");
    tell_object(ppl,"小女孩说道:如果你猜的数字中有一个位置是正确的，我会说["HIR"一阳"NOR"]。\n");
    tell_object(ppl,"小女孩说道:如果有一个你猜的数字对，但是位置不正确，我会说["HIC"一阴"NOR"]。\n");
    tell_object(ppl,"小女孩说道:这样反覆让你猜，如果是["HIR"四阳"NOR"]，完全猜中了，我会送你一个小礼物。\n");
    tell_object(ppl,"小女孩说道:你想不想跟我玩呢"HIG"(answer yes/no)"NOR"?\n");
    return "";
}
int do_answer(string arg)
{
    object ppl=this_player();
    int num,i,a,b,s,sub,temp,k,j,time;
    string ans,txt;
    string out="";

    if(!arg) return 0;
    if(!ppl->query_temp("number_quest")) return 0;
    if(!ppl->query_temp("number_quest/time")){
      if(arg=="yes"){
        tell_object(ppl,"小女孩说道:你要跟我玩?!太好了。\n");
        tell_object(ppl,"小女孩说道:我已经想好数字了，你开始猜吧(answer 数字)。\n");
        ppl->add_temp("number_quest/time",1);
        return 1;
      }
      else if(arg=="no"){
        tell_object(ppl,"小女孩说道:原来你不想玩......我懂了。\n");
        ppl->delete_temp("number_quest");
        command("cry");
        return 1;
      }
      else return 0;
    }
    else{
      tell_object(ppl,HIG"你说:我猜"+arg+"。\n"NOR);
      ppl->add_temp("number_quest/time",1);
      if(sizeof(arg)!=4){
        tell_object(ppl,"你要回答的是四位数字啦!!\n");
        return 1;
      }
      for(i=0;i<4;i++){
        txt=arg[i..i];
        sscanf(txt,"%d",num);
        if(num< 0 || num > 9){
          tell_object(ppl,"你要回答的是四位数字啦!!\n");
          return 1;
        }
      }
      for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
          if(arg[i]==arg[j]){
            tell_object(ppl,"是要猜四个不重覆的数字喔!!\n");
            return 1;
          }
      ans=ppl->query_temp("number_quest/number");
      a=0;
      for(i=0;i<4;i++)
        if(ans[i]==arg[i]) a++;
      b=0;
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
          if(i==j) continue;
          else if(ans[i]==arg[j]) b++;
      if(!a && !b) out="都没猜到";
      else{
       if(a) out+=HIR+CHINESE_D->chinese_number(a)+"阳"+NOR;
       if(b) out+=HIC+CHINESE_D->chinese_number(b)+"阴"+NOR;
      }
      tell_object(ppl,"["+out+"]。\n");
      if(a==4){
        command("say "+ppl->query("name")+"好厉害喔，猜到了。");
        command("say 刚刚帮你算了一下，你总共猜了"+
          CHINESE_D->chinese_number(ppl->query_temp("number_quest/time")-1)+"次。");
        time=ppl->query_temp("number_quest/time")-1;
        if(time<=7){
          command("say 看在你那么厉害的份上，让你可以使用唤云扇的fanset功能!!");
          ppl->set_temp("can_fanset",1);
        }
        else{
          command("say 给你奖品，kiss 一个。");
          command("lkiss "+ppl->query("id"));
        }
        command("smile");
        ppl->delete_temp("number_quest");
      }
      return 1;
    }
    return 0;
}
