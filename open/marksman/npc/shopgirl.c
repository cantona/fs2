#include <ansi.h>
inherit NPC;

void create()
{
  set_name("牧童", ({ "girl" }) );
  set("gender", "女性");
   set("age", 16);
   set("long",
      "这女孩是专门负责照顾凤凰的牧童。\n");

  set("combat_exp", 50000);
  set("chat_chance", 5);
  set("chat_msg", ({
     (: command, "say 每天都要照顾这些凤凰，好累喔。" :),
     (: command, "smrik" :),
}) );

  setup();
}
int accept_fight(object me)
{
  command("sob");
  command("say 这... 你... 我这么可爱，你怎忍心下手呀... 。");
  return 0;
}
int accept_kill(object me)
{
  command("wa");
  command("say 你.....难..道一点....都...不懂..得怜香..惜玉吗...？......");
  return 0;
}
void greeting(object ob)
{
  if( !ob || environment(ob) != environment() ) return;

  command("smile "+ob->query("id"));
  say(HIC"女孩轻声说："+ob->name()+HIC"，欢迎来到射手派。\n"NOR);

}
void init()
{
     object me = this_player();
     if( me->query("Lbird-shop","YES")
|| me->query("family/family_name")=="射日派"
      || wizardp(me) ) {
     add_action("do_list", "list");
     add_action("do_shop", "shop");
     add_action("do_value", "value");
     add_action("do_sell", "sell");
     add_action("do_appraise","appraise");
     } else {
     add_action("no_trade", "list");
     add_action("no_trade", "shop");
     add_action("no_trade", "value");
     add_action("no_trade", "sell");
     add_action("no_trade", "appraise");
     }
}
int do_list(object me)
{
    write("\n\t极焰火凤凰(fire-phoenix)      - 售价：一两银子。\n"
          "\t极冻冰凤凰(ice-phoenix)        - 售价：一两银子。\n"
          "\t极速风凤凰(wind-phoenix)       - 售价：一两银子。\n"
          "\t极杀雷凤凰(lighting-phoenix)      - 售价：一两银子。\n"
          "\t极隐闇凤凰(black-phoenix)      - 售价：一两银子。\n"
          "\t鉴定(appraise)  看你适合那一个凤凰            \n\n");
return 1;
}
int do_appraise(object me)
{
me = this_player();
if(me->query("appraise")){
if(me->query("appraise") == 1)
write("你适合极焰火凤凰。\n");
if(me->query("appraise") == 2)
write("你适合极冻冰凤凰。\n");
if(me->query("appraise") == 3)
write("你适合极速风凤凰。\n");
if(me->query("appraise") == 4)
write("你适合极杀雷凤凰。\n");
if(me->query("appraise") == 5)
write("你适合极隐闇凤凰。\n");
}else{
write("你都不适合，滚吧。\n");
}
return 1;
}
int do_shop(string str, object me)
{
    int lv;
    object goods;
    me = this_player();
    if( !str ) return notify_fail("[指令格式]：buy <id>\n");
    if((me->query("appraise") !=1 && str =="fire-phoenix") ||
       (me->query("appraise") !=2 && str =="ice-phoenix") ||
       (me->query("appraise") !=3 && str =="wind-phoenix") ||
       (me->query("appraise") !=4 && str =="lighting-phoenix") ||
       (me->query("appraise") !=5 && str =="black-phoenix"))return notify_fail("你并不适何这种凤凰。\n");
    if( str == "fire-phoenix" || str == "ice-phoenix" || str == "wind-phoenix"
            || str == "lighting-phoenix" || str == "black-phoenix" ) {
    if( !me->can_afford(100) ) return notify_fail("你身上没有足够的金钱。\n");
    if( file_size("/open/marksman/obj/"+str+".c") < 0
    &&  !find_object("open/marksman/obj/"+str) )
    return command("say 抱歉ㄛ，"+me->name()+"，这类型的凤凰似乎缺货中。\n");
    if( me->query("Lbird") ) {
    write("小女孩说:你已经有一只凤凰啰!\n");
    } else {
    write(GRN"<"HIG"恰吉"GRN">"HIC" 问道"CYN"："HIC
    "你确定要领养一只新的凤凰"CYN"？"HIW"(Y/n)"NOR"：");
    input_to("new_Lbird", me, str);
    return 1;
    }
    } else command("say Sorry！"+me->name()+
    "，本店没有这种凤凰，请查阅\(list)凤凰种类。\n");
    return 1;
}
void new_Lbird(string yn, object me, string str)
{
     object Lbird = new("/open/marksman/obj/"+str);
     if( yn == "" || yn[0] == 'Y' || yn[0] == 'y' ) {
tell_room(environment(me),me->name()+"认养了一只凤凰。\n");
     write(GRN"<"HIG"恰吉"GRN">"HIC" 说道"CYN"："HIC
     "恭喜你认养了一只凤凰"CYN"，"HIC"请好好的照顾它"CYN"。\n"NOR);
     me->pay_money(100);
     Lbird->move(environment(me));
     Lbird->set("owner",me->query("id"));
     Lbird->set_leader(me);
     me->set("level",1);
     me->set_temp("come-sum","YES");
     me->set_mlist(str,1);
     me->set("Lbird",str);
     } else write(GRN"<"HIG"宠物妖精"GRN">"HIC" 说道"CYN"："HIC"好吧"CYN"，"
     HIC"欢迎再度观临"CYN"。\n"NOR);
     return;
}
int no_trade(string str, object me)
{
    me = this_player();
    command("say Sorry！"+me->name()+"，你并没有认养执照ㄛ。\n");
    return 1;
}
