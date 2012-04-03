//posthumous_paper......  by dhk 2000.5.12
#include <ansi.h>


inherit BOOK;

#define BOOK_PATH "/u/d/dhk/questsfan/obj/"
#define BOOK_NAME "posthumous"
#define BOOK_NAME1 "posthumous1"
#define C_BOOK_NAME ""HIR"沾血的遗书"NOR""

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "posthumous" }) );
  set( "long", "这是一张是无名前辈所写的遗书，你可以用(read)来观看。\n");
  set ( "value", ({ 10, "silver" }) );   //价值
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}

int do_read(string arg)
{
       object me = this_player();
       int level=(int)(me->query_skill("literate",1));
       int sun=(int)(me->query_skill("sunforce",1));
        if(level >= 120 && sun >=120 )
       {
       me->set_temp("buy_ok",1);
       cat( sprintf(__DIR__"posthumous") );
tell_object(me,"当你一看"HIR"沾血的遗书"NOR"后，忽然气血翻腾、真气逆冲。\n\n");
tell_object(me,""HIR"你的眼前一黑，接着什么也不知道了...."NOR"\n\n");
me->set_temp("can_not_do_anything",1);
  tell_object(me,"你忽然领悟了"HIC"北冥神功"NOR"中的"HIM"‘北冥回朔法’"NOR"，心随神移。\n\n");
tell_object(me,"就在你迷迷糊糊之中，你忽然见到一位面如冠玉、超凡脱俗\n"
              +"的青年男子。接着他开口说话了，他说道：‘欲过虹晶桥，\n"
              +"只有在每一个时辰之一刻、两刻、三刻钟以及下一个时辰来\n"
              +"临前的五分钟而已，理由是在这些时刻三座晶桥会因日、月\n"
              +"光的照射下，产生全反射，而导致两座蜃影晶桥消失无踪。\n"
              +"但是若要在其他时间硬闯，根据我的观察，虹晶桥更替的状\n"
              +"况依然有一定的规则，就是以现在的时辰置日晷，观其分影\n"
              +"。因为这里的三光每一刻五分交辉..我就把我的经验告诉你\n"
             +"....若日晷的影子在正四方时：\n"
             +"      我试过在三时一刻两分真实的晶桥位置在正北方那座\n"
             +"      我试过在六时两刻一分真实的晶桥位置在西北方那座\n"
             +"      我试过十二时三刻六分真实的晶桥位置在东北方那座\n"
             +"....若日晷的影子只差三十度就到正四方时：\n"
             +"      我试过在四时一刻七分真实的晶桥位置在西北方那座\n"
             +"      我试过在十时两刻五分真实的晶桥位置在东北方那座\n"
             +"      我试过十六时三刻三分真实的晶桥位置在正北方那座\n"
             +"....若日晷的影子只差十五度就到正四方时：\n"
             +"      我试过在八时一刻九分真实的晶桥位置在东北方那座\n"
             +"      我试过十一时两刻六分真实的晶桥位置在正北方那座\n"
             +"      我试过十七时三刻零分真实的晶桥位置在西北方那座\n"
             +"还有小心双五见阎王.....\n"
              +"唉！我言尽于此...’\n"
              +"渐渐地！！！\n"
              +"渐渐地！！！\n");
tell_object(me,"那青年的身影渐渐模糊，消失了。\n\n");
tell_object(me,""HIY"慢慢地你终于又有了知觉...."NOR"\n\n");
me->set_temp("can_not_do_anything",0);       
tell_object(me,"这一切宛如作梦一般。\n");
       return 1;
       }
       else
       if(level >= 90 )
       {
       me->set_temp("buy_ok",1);
       cat( sprintf(__DIR__"posthumous") );
       return 1;
       }
       else
       tell_object(me,"你左看右看就是看不懂这张的内容，看来要再去进修进修啰!!!\n");
       return 1;

}

