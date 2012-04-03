inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
        seteuid(getuid());
        set("short","密室");
        set("long", @LONG

你走进一间阴暗潮湿的小房间，其气味难闻难受有如死尸般，等你五
官慢慢习惯黑暗后，你看见在这儿有一张床、一张桌子、四面墙(wall)和
一个用来嗯嗯的茅坑，但到处都结满了蜘蛛丝。你赫然发觉在西边墙角的
小窗子(window)旁边有个人被用铁门锁在那里。
LONG
        );
        set("no_fight",1);
        set("light_up", 1);
        set("no_transmit",1);
        set("no_auc",1);
  set("item_desc", ([ /* sizeof() == 2 */
  "window" : "    一个木框小窗，你由窗口往外看去，发现外下头正对一个水池，你不
禁突发奇想，想由这儿跳下去（jump）是不是比较快下到一楼！？",
  "wall" : " 修罗心法之口诀 (words)
             修罗斗气乃修罗心法之绝学，学之有成者(read words)可将内力聚结，转
             而发出数倍内劲，是我冥殿至高之绝学。    perform fiendforce.fight
",
]));
        set("objects", ([ /* sizeof() == 1 */
            "/open/tendo/room/tower/npc/fiend.c" : 1,
]));
  setup();
}
void init()
{
 add_action("do_read","read");
 add_action("do_jump","jump");
 add_action("free_fiend","free");
}
int do_read(string str)
{
  object me=this_player();
  if(str!="words") {
  tell_object(me,"[1;32m你想要读什么?[0m\n");
  return -1;
  }
  if(me->query_skill("fiendforce",1) > 1){
  tell_object(me,"[1;37m你早就已经会修罗心法了。[0m\n");
  return -1;
  }
  else {
  tell_object(me,"[1;37m你照着墙上的口诀练了一遍，气运一周天，你学会了修罗心法。[0m\n");
  me->set_skill("fiendforce",1);
  return 1;
       }
}
int do_jump()
{
        object who;
    who = this_player();

        who->move("/open/center/room/inn");
tell_room(this_object(),"你只看到一道闪光,忽"+
 "的一声，人已跳了下去。\n");
        message("system",
 HIW"\n\t武林之中传来一道消息 : "HIY""+this_player()->name()+""HIW"轻轻松松地闯过了"HIR"锁妖塔"HIW" !!\n"NOR,users());
        return 1;
}
int free_fiend(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("fiend",environment(ob)))
    return notify_fail("人又不在，你放什么。\n");
  if(str != "fiend")
    return notify_fail("你要释放谁呀。\n");
  if( ob->query("force") > 1000)
  {
message_vision(HIC"$N运起全身的内力打破了那道"HIW"铁门"HIC"。\n"NOR,ob);
  ob1=present("fiend",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  }
  else
  {
message_vision(HIR"$N运起内力想要打破那道"HIW"铁门"HIR"，由于内力不足被铁门上的阴劲反弹而受伤。\n"NOR,ob);
   ob->add("kee",-200);
  }
return 1;
}
int msg1(object ob)
{
message_vision(HIR"\n只见冥殿修罗运起内力，突然整个墙面炸了开来。\n"NOR,ob);
 call_out("msg2",3,ob);
  return 1;
}
int msg2(object ob)
{
  object ob1;
message_vision(HIW"\n冥殿修罗道：小伙子，感谢啦！。\n"NOR,ob);
message_vision(HIW"\n冥殿修罗道一个纵身，往窗户那儿跳下，身影旋即消失在你的面前。\n"NOR,ob);
set("exits/up","/open/snow/room/back");
message("mud","[1;34m天空霎时乌云密布...\n[0m",users());
  message("mud","[1;35m一阵狂吼声突然传遍武林各个角落！！！\n[0m",users());
  message("mud","[1;32m冥殿修罗将抑郁的真气，整个爆发出来，吼道：\n
                 武林的人给我听着，今天由于[0m[1m"+ob->query("name")+"[1;32m的帮助，我冥殿修罗得以重现江湖，
                 一切新仇旧恨，总算可以来个了结啦！！！\n
                 哈！哈！哈！哈！哈！\n
                 天道派和五百年前武林中自羿为正道人士的老贼及他们的弟子，
                 等着我血洗武林吧！\n\n[0m",users());
  call_out("msg3",3,ob);
  return 1;
}
int msg3(object ob)
{
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road2.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road2.c");
new("/open/tendo/room/tower/npc/monster")->move("/open/center/room/road1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/center/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road3.c");
new("/open/tendo/room/tower/npc/snake")->move("/open/gsword/room/su3.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/gsword/room/sushop.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/gsword/room/sushop.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/capital/room/r70.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/capital/room/r70.c");
new("/open/tendo/room/tower/npc/yama")->move("/open/main/room/r19.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/r10.c");
new("/open/tendo/room/tower/npc/plaguer")->move("/open/main/room/f11.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/f12.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/main/room/f12.c");
new("/open/tendo/room/tower/npc/villain")->move("/open/ping/room/road4.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road5.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road5.c");
new("/open/tendo/room/tower/npc/chieftain")->move("/open/ping/room/road6.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/road10.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/soldier2.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/soldier2.c");
new("/open/tendo/room/tower/npc/goblin")->move("/open/ping/room/soldier1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/inn.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/ping/room/inn.c");
new("/open/tendo/room/tower/npc/butcher")->move("/open/wu/room/school1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/wu/room/school1.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/fiend")->move("/open/tendo/room/t03.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t04.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t04.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t02.c");
new("/open/tendo/room/tower/npc/genies")->move("/open/tendo/room/t02.c");
 
message("mud",HIG"\n\n锁妖塔顶轰的一声并出了愈千条的青光，像流星飞逝般落到人间....\n"NOR,users());
message("mud",HIR"\n众妖齐道:\n
                  我们终于重获自由，此后将誓死追随修罗
                       铲平人间，重建魔界黯黑力量
                    完成焚天大王五百年前给予的使命....\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud","[1;36m陆清风叹道：\n
                难道五百年前腥风血雨的惨剧又要再次重演吗？
                武林各大派，今天又到了要团结一致的时候了！
                大家齐心协力消灭冥殿修罗跟他的余党！\n\n[0m",users());
 message("mud","[1;33m陆清风纵声长啸：\n
                我以天道派掌门之位，请求武林各门派，今后见到修罗及其党羽者－\n
                格杀勿论！！！\n
                且今日下令我天道派弟子追杀祸首[0m[1m"+ob->query("name")+"[33m！！！\n[0m",users());
return 1;
}




