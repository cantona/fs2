inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // 不是说要加这一行吗?
        set("short",CYN"地牢"NOR);
        set("long", @LONG
你走进一间阴暗潮湿的小房间，刚进房间时你觉得一片漆黑，等你
眼睛慢慢习惯黑暗后，你赫然发觉有个人被锁在这里，他四肢被铁链锁
住，琵琶骨也被铁链贯穿，他低着头动也不动，令你不知他是死是活..
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/gen17",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/south",1);
  create_door("south",HIB"蓝色铁门"NOR,"north",DOOR_LOCKED);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/obj/ya1" : 1,
]));
  setup();
}
void init()
{
 add_action("free_ya","free");
}

int free_ya(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("ya",environment(ob)))
    return notify_fail("人去楼空了，你还放什么。\n");
  if( str!="ya")
    return notify_fail("你要释放谁呀。\n");
  if( ob->query("force") > 1500)
  {
  message_vision(HIW"$N运起全身内力扯断"HIC"寒冰铁链"HIW".........\n"NOR,ob);
  ob->set("get_head",1);
  write("\n");
     ob1=present("ya",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
  }
  else
  {
   message_vision(HIW"$N运起内力想要扯断"HIC"寒冰铁链"NOR"，由于内力不足被铁链上的寒气所侵!!\n"NOR,ob);
   ob->add("kee",-250);
   return 0;
  }
}
int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("只见叶狂运起内力，身上发出爆裂般的声音\n",ob);
  call_out("msg2",3,ob);
  return 1;
}
int msg2()
{
object freeer=this_player();
  message_vision("叶狂道: 小子谢谢你啦.....\n\n",freeer);
  message_vision("叶狂双手向上一击，轰的一声!!地牢上方被打出一个大洞，走了出去。\n", freeer) ;
  set("exits/up","/open/ping/room/road4");
/*  
  ob1=new("/open/wu/npc/ya");
  ob1->move("/open/main/room/m11");
  ob1->set("get_head",1);
*/
  message("mud",HIC"只见"HIW+freeer->query("name")+HIC"突破重重难关,以本身修为震开了叶狂的寒冰铁链\n\n"NOR,users());
  message("mud",HIC"叶狂大声吼道:"HIW"我自由了!!我自由了!!复仇的时刻终于来临了\n\n"NOR,users());
  call_out("msg3",3,freeer);
  return 1;
}
int msg3(object ob)
{
object ob1;
ob1=new("/open/wu/npc/ya");
ob1->move("/open/main/room/m11");
ob1->set("get_head",1);

 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom1");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom1");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom2");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom3");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom7");
 new("/open/wu/npc/badnit")->move("/open/wu/room/luroom4");
 message("mud",HIC"\n杜 杀吼道:"HIW
               "恶人谷的啰啰们～～～将泷山从武林中除名吧！！！\n"NOR,users());
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
message("mud",HIR"\n郑士欣叹道:
         谁可以挽救这武林浩劫呢？？？\n\n"NOR,users());
  return 1;
}
