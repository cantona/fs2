//by roger
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_array();
string do_tigi();
string do_sixplan();
string do_koming();
string do_sehan();
string do_hoba();
string do_book();


void create() {
        set_name(HIC"太公望"NOR,({"master wone","wone","scholar"}));
        set("class","scholar");
        set("nickname","$HIW$天下第一军师$NOR$");
        set("title",HIY"姜子牙"NOR);
        set("long",
"太公望以助周室王朝取得天下之天才军师, 并且 
自创兵法计谋, 更胜孙子兵法。 
");
        set("inquiry", ([
        "八卦阵"        : (: do_array :),
        "诸葛孔明"        : (: do_koming :),
        "六韬"          : (: do_sixplan :),
        "太极八卦"    : (: do_tigi :),
        "诸葛瞻"      : (: do_sehan :),
        "诸葛邑昭"    : (: do_hoba :),
        "六韬易本"      : (: do_book :),
]));
        set("str",40);
        set("cor",25);
        set("gender","男性");
        set("guild_master",1);
        set("attitude","heroism");
        set("family/family_name","儒门");
        set("max_gin",5000);
        set("max_kee",8000);
        set("max_sen",8000);
        set("max_force",8000);
        set_skill("sixgod-plan",120);
        set("combat_exp",5000000);
        set("functions/movedown/level",100);
        set("functions/finger/level",100);
set("chat_chance_combat", 100);
set("chat_msg_combat",({
(: perform_action("stabber.movedown") :),
(: perform_action("stabber.finger") :),
}));
        set("chat_chance",50);
        set("chat_msg",({
        }));
        setup();
       carry_object("/open/scholar/room/newplan/obj/pen")->wield();
       add_money("gold",50);
 }
string do_array()
{
        object me=this_player();
        if(me->query_temp("six_ask")==8)
        {
          me->set_temp("six_ask",9);
        return("
          八卦阵是诸葛孔明所创之阵形, 如果要
        闯过去, 并须要了解太极八卦之变化。");
}
else
        return("做人别太八卦, 真是的!!!");
}
string do_koming()
{
        object me=this_player();
          if(me->query_temp("six_ask")==5)
        {
          me->set_temp("six_ask",6);
          return("
          你说孔明吗??他就是闻名三国时代的大军
          师呀, 儒门的诸葛神算就是由孔明所写
          , 不过诸葛神算里面的东西并没有我的 
          六韬里面的计谋高级, 所以诸葛孔明便
          将我的六韬借去, 到没想到不久之后他
          就病死了, 将书留给他的传人诸葛瞻。");
        }
        else
        return("孔明??那是瞎密哇哥..可以吃吗???");
}          
string do_sehan()
{
        object me=this_player();
        if ( me->query_temp("six_ask")==6)
        {
          me->set_temp("six_ask",7);
          return("
          诸葛瞻是诸葛孔明的后人, 也是一个富
          有智谋的人, 不过他却把六韬给了他最
          小的儿子诸葛邑昭。");
        }
        else
          return("去死啦!!人家的儿子又不是我生的, 哇阿灾!!");
}
string do_hoba()
{
        object me=this_player();
        if( me->query_temp("six_ask")==7)
        {
          me->set_temp("six_ask",8);
          return("
          诸葛邑昭是诸葛一门的败类, 他拿着
          六韬此书危害着世人, 你帮我把书取回
          吧, 诸葛邑昭现在为于八卦阵中!!");
        }
        else
          return("什么什么???");
}
string do_sixplan()
{
        object me=this_player();
        if( me->query("family/family_name")=="儒门" && (me->query_temp("six_ask")==4))
        {
          me->set_temp("six_ask",5);
          return("
          六韬是我写的战略书籍之一, 不过我把他传给了诸葛孔明了
          吧。");
        }
        else
        return("六饕??可以吃吗??。");
}
string do_tigi()
{
        object me=this_player();
        if( me->query_temp("six_ask")==9)
        {
          me->set_temp("six_ask",10);
          return("
          八卦阵有分八种卦象, 走法是由诸葛孔明利用太极可生两
          仪, 两仪可生四象, 四象又生八卦的原理所写成的, 其中
          可能会遇到各种敌手, 其实他就将八卦阵设在此山的西南
          你想去就去吧, 拜托你了。
        ");
        }
        else
          return("太极张三丰~~~~ya~~~");
}
string do_book()
{
        object me=this_player();
        object ob;
        if(me->query("family/family_name") != "儒门")
        return("你拿了也没用!!\n");
        if(me->query_temp("get_sixgod_book"))
        return("你已经拿过了啦!!\n");
        if(!me->query("mark/sixgod-plan"))
        return("拜托..你拿了也没有用呀?!!\n");
        else
        {
        ob=new("/u/s/sueplan/obj/book1");
        ob->move(me);
        message_vision("太公望给个$N一本书\n",me);
        }
}

int accept_object(object me, object obj)
{
        if( obj->query("id") == "sixgod-plan book" )
        {
if( me->query_temp("ko_houng") == 1 && !me->query("mark/sixgod-plan") && me->query_temp("ko_hace")==1 && me->query_temp("ko_show")== 1 && me->query_temp("ko_kao")==1 && me->query_temp("ko_yea")== 1 && me->query_temp("ko_jone")== 1)
          {
            command("say 既然你夺取六韬奇略有功, 我便将六韬奇略上记载的计谋
传授与你吧。");
tell_object(me,"黄石公对你说 : 以后可以到我这拿七彩凤凰笔(want 七彩凤凰笔)。\n");
tell_object(users(),"
[1;37m太公望发出爽朗的笑声 :
[1;37m    □         哈哈～好一谋略的将才"+me->query("name")+"呀！！
[1;33m    你果然没有让我失望！！好吧，我就传你我的必生绝学 -\n
[1;5;36m           ‘六   韬   奇    略’[0m\n\n");
        me->set("mark/sixgod-plan",1);
        me->set("title","[1;36m儒尊[1;37m‘[1;45;37m六韬奇略[1;0m[1;37m’[1;33m传人[0m");
          }
          destruct(obj);
        }
        else
        {
        command("kick "+getuid(me));
        command("say 这东西不是你打的吧???");
        }
        return 1;
}
void init()
{
add_action("do_change","change");
add_action("do_want","want");
}

int do_change(string str)
{
  object me = this_player();
  if(str=="title")
  {
  if(!me->query("mark/sixgod-plan"))
  return notify_fail("你还没学过六韬奇略\n");
  if(me->query("family/family_name")!="儒门")
  return notify_fail("你已不是儒门之人\n");
me->set("title",
"[1;36m儒尊[1;37m‘[1;45;37m六韬奇略[0m[1;37m’[1;33m传人[0m");
  tell_object(me,"title修改完成\n");
  return 1;
  }
}

int do_want(string arg)
{
  object me = this_player();
  object pen = new("/open/scholar/room/newplan/obj/bird_pen.c");
  if(!arg||arg!="七彩凤凰笔")
  return notify_fail("你想要什么???\n");
  if(!me->query("mark/sixgod-plan"))
  return notify_fail("你未解过六韬喔!!\n");
  if(me->query("family/family_name")!="儒门")
  return notify_fail("你已不是儒门之人\n");
  if(me->query_temp("ok_get_pen"))
  return notify_fail("你已经拿过了啦\n");
  me->set_temp("ok_get_pen",1);
  pen->move(me);
  tell_object(me,"你取得了一支七彩凤凰笔。\n");
  return 1;
}
