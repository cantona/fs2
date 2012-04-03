inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
        seteuid(getuid());
        set("short",CYN"地牢"NOR);
        set("long", @LONG

你走进一间阴暗潮湿的小房间，其气味难闻难受有如死尸般，等你五
官慢慢习惯黑暗后，你赫然发觉有个人被锁在这里，他四肢被骨链锁
住，琵琶骨也被骨炼贯穿，他低着头动也不动，不知他是死是活。

LONG
        );
        set("light_up", 1);
        set("no_transmit",1);
        set("no_auc",1);
        set("objects", ([ /* sizeof() == 1 */
            "/open/snow/obj/sa1.c" : 1,
]));
set("exits",([
"out":"/open/center/room/inn",
]));
  setup();
}
void init()
{
 add_action("free_sa","free");
}
int free_sa(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("sa",environment(ob)))
    return notify_fail("人又不在，你放什么。\n");
  if(str != "sa")
    return notify_fail("你要释放谁呀。\n");
  if( ob->query("force") > 1500)
  {
message_vision(HIW"$N运起全身内力扯断"HIC"魔血骨炼"HIW"。\n"NOR,ob);
  ob1=present("sa",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  }
  else
  {
message_vision(HIW"$N运起内力想要扯断"HIC"魔血骨炼"HIW"，由于内力不足被骨炼上的阴气所侵。\n"NOR,ob);
   ob->add("kee",-200);
  }
return 1;
}
int msg1(object ob)
{
message_vision(HIR"\n只见独孤嵊运起内力，眼睛发出噬人的红光。\n"NOR,ob);
 call_out("msg2",3,ob);
  return 1;
}
int msg2(object ob)
{
  object ob1;
message_vision(HIW"\n独孤嵊道：年轻人谢谢你啦。\n"NOR,ob);
message_vision(HIW"\n独孤嵊双手向上一击，轰的一声，地牢上方被打出一个大洞，轻身飞跃出去。\n"NOR,ob);
set("exits/up","/open/snow/room/back");
message("mud",HIC"\n独孤嵊笑道："HIW"哈哈哈，我终于自由了，徒儿们跟我一起去铲平魔刀吧。\n"NOR,users());
  call_out("msg3",3,ob);
  return 1;
}
int msg3(object ob)
{
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/su3");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/sushop");
 new("/open/snow/npc/fbandit")->move("/open/gsword/room/sushop");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road4");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road3");
 new("/open/snow/npc/fbandit")->move("/open/ping/room/road3");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room1");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/mroom/room9");
 new("/open/snow/npc/fbandit")->move("/open/gblade/room/secret");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/back");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
 new("/open/snow/npc/fbandit")->move("/open/snow/room/room20");
message("mud",HIC"\n刘全书叹道：唉！唉！看来这场"HIR"血战"HIC"免不了，只好加入此战，巩固雪苍了。\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud",HIR"\n莫无愁目露凶光：可恶！不知是谁把他放出，既然如此！\n"NOR,users());
message("mud",HIR"\n魔刀门徒，大肆杀掠吧，把雪苍打入万丈深渊！杀个片甲不留！\n"NOR,users());
return 1;
}
