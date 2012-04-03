//man.c 提示八卦阵走法的npc

inherit NPC;

void create()
{
        set_name("受重伤的人", ({ "man" }) );
        set("race","人类");
        set("kee",1);
        set("age", 3);
        set("long", "\n你看他满身鲜血, 口中喃喃自语, 不知道有什么事情发生在他身上(ask 事情)。\n");
        setup();
}
void init()
{
add_action("do_ask","ask");
}
int do_ask(string str)
{
  object me=this_player();
  if(str=="man about 事情")
  write("你赶紧扶着面前的人, 问他发生了什么事!!\n");
  call_out("ans1",5,me);
  return 1;
}
int ans1()
{
  object me=this_player();
  write("重伤的人说 : 你..你..你要..小心..过..这个八卦阵\n");
  call_out("ans2",5,me);
}
int ans2()
{
  object me=this_player();
   write("重伤的人说 : 因..为这个八卦..阵里面有..八个..\n");
  call_out("ans3",5,me);
}
int ans3()
{
  object me=this_player();
  write("重伤的人说 : 诸葛家的人在...守护着...\n");
  call_out("ans4",5,me);
}
int ans4()
{
  object me=this_player();
  write("重伤的人说 : 要过..不是一件..容易的事呀...\n");
  call_out("ans5",5,me);
}
int ans5()
{
  object me=this_player();
  write("重伤的人说 : 不过...我终于把走法记下来了...\n");
  call_out("ans6",5,me);
}
int ans6()
{
  object me=this_player();
  write("重伤的人说 : 八卦..有八个方位...看似圆形\n");
  call_out("ans7_1",5,me);
}
int ans7_1()
{
  object me=this_player();
write("重伤的人说:方向..分别以...玄, 元, 练, 支四象代表东, 西, 南, 北..\n");
  call_out("ans7",5,me);
}
int ans7()
{
  object me=this_player();
write("重伤的人说 : 其实只要以...顺时针方向去走\n");
  call_out("ans8",5,me);
}
int ans8()
{
  object me=this_player();
  write("重伤的人说 : 依照八卦的卦位的排列方式...\n");
  call_out("ans9",5,me);
}
int ans9()
{
  object me=this_player();
  write("重伤的人说 : 就可以..走到了...\n");
  call_out("ans10",5,me);
}
int ans10()
{
  object me=this_player();
 write("重伤的人说 : 不过记得...一进入八卦阵...你是在正北方的干位...\n");
  call_out("ans11",5,me);
}
int ans11()
{
  object ob=this_object();
  write("重伤的人说 : 加油了呀...\n
\n说完后, 重伤的人就昏了过去..\n");
ob->die();
}
