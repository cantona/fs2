inherit NPC;     //鲁寻
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string father_dream();

void think(object);
void create()
{
set_name("鲁寻",({"lu"}));
set("long","
年纪轻轻就是往返东瀛的贸易商人. 除了东瀛之外, 他也时常出海到其他外邦
进行贸易, 是一位十分有能力的年轻人.
\n");
  set("gender","男性"); 
  set("class","killer");
  set("title","贸易商");
  set("attitude","heroism");
  set("age",31);
  set("max_kee",1500);
  set("kee",1500);
  set("max_force",1000);
  set("force",1000);
  set("force_factor",10);
  set("combat_exp",700000);
  set_skill("dodge",70);
  set_skill("move",70);
  set_skill("force",70);
  set_skill("parry",60);
  set_skill("shade-steps",60);
  set_skill("blackforce",60);
  map_skill("move","shade-steps");
  map_skill("dodge","shade-steps");
  map_skill("force","blackforce");
  set("inquiry",([
"父亲的梦想" : (: father_dream :),
]));

setup();
add_money("gold",10);
}
void init()
{
        add_action("do_nod","nod");
}
string father_dream()
{
 object ob;
 object me;
 ob=this_object();
 me=this_player();
if (me->query("class") != "killer")
{
  command("?");
  return "我父亲怎么了吗?";
}
  command("scream");
  return "咦? 你怎么会知道这件事? 我父亲给你的护身符能让我看一下吗?";
}
int accept_object( object me , object ob ,object obj )
{

if (me->query_temp("get_luamulet") == 1 && ob->query("id") =="luton's amulet")
{
 new("/u/u/unfinished/room/obj/luamulet")->move(me);
 command("say 真是麻烦你了,我从十几年前就开始从东瀛往来,希望能继承父亲的梦想.");
 command("say 但是他始终不肯再告诉我其他的线索....");
 command("say 如今有了这护身符及人名,我一定要找回父亲当年所失去的一切!!");
 command("say 你愿意助我一臂之力吗??");
 me->delete_temp("get_luamulet");
 me->set_temp("nod",1);
 return 1;
}
if (me->query_temp("get_note") == 1 && base_name(ob)=="/u/u/unfinished/room/obj/note")
{
 command("hmm");
 command("think");
 command("原来如此....");
 tell_object(me,"鲁寻慢慢将纸条的内容翻译给我听....\n");
 call_out("think",3,me);
 return 1;
}
else
{
 command("angry");
 command("gozila");
 command("dandan "+me->query("id"));
 command("say 不要乱拿东西给我啦!!我的身上是要放钱的!!");
 return 1;
}
}
int do_nod()
{
  object me=this_player();
  if (me->query_temp("nod") != 1)
{
 return 0;
}
  if (me->query_temp("nod") == 1)
{
 command("jump");
 command("say 太好了, 我们走吧!!");
 me->delete_temp("nod");
 tell_object(me,HIC"\n当一切准备就绪后,我与鲁寻及一些船员,一同前往东瀛.\n\n"NOR);
 me->move("/u/u/unfinished/room/ship");
 return 1;
}
return 1;
}
void think(object me)
{
tell_object(me,HIY"\n
原来,丽子并不是商人的女儿,而是海盗首领的女儿,由于跟着父亲到处闯荡,所以能到各
地探索未知的事物变成了她的心愿,可是因为无法忍受父亲及其手下凶残的行为,毅然决
定离开他们而过着自己的冒险生涯,直到遇到了鲁仝,终于发现长久以来的梦想终于有人
能跟她一起努力与分享.但是这心愿终究无打达成,当鲁仝被攻击时 ,是丽子以回到父亲
身为条件而换取海贼的撤退.事隔多年,丽子终于因为东瀛政府对海贼的扫荡而死于这座
小岛上.最后在信中留下了一句:我将你给我的定情物以及我们的梦想藏在属于我们的歌
曲之中.

然而, 将梦想藏在属于我们的歌曲之中??这句话是什么意思呢??
\n"NOR);
call_out("t1",1,me);
return ;
}
int t1(object me)
{
command("giggle");
command("say 稍微休息一下吧, 船只大概明天就能修好了.");
call_out("t2",1,me);
return 1;
}
int t2(object me)
{
tell_object(me,"经过一天的忙碌, 也该趁现在好好睡一下了....\n");
me->move("/u/u/unfinished/room/tent.c");
return 1;
}