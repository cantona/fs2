
// Room: /open/gsword/room/g6-11
inherit ROOM;
void create ()
{
  seteuid(getuid());	// 不是说要加这一行吗?
  set ("short", "山洞");
  set ("long", @LONG
这个洞穴颇大，往东往西往北都有一个较小的石穴，洞内弥漫着一种
说不出的诡异气氛，时有听到动物惨叫的声音，时而闻到浓厚的血腥味道
令你不寒而颤。
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"g6-10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/obj/gstatue1.c" : 1,
]));
  
  setup();
}

void init()
{
 add_action("cut_hand","cut");
 add_action("do_enter","blood");
}
 
int cut_hand(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("statue",environment(ob)))
    return notify_fail("你割这么多次干嘛 ,失血过多不好哦.\n");
  if( str!="hand")
    return notify_fail("叫你割手啦 ,你在割哪啊!!\n");
  message_vision("[1;31m一柱鲜血自$N手腕喷出 ,往雕像激射而去.....      \n [0m",ob);
  write("\n\n\n");
     ob1=present("statue",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
}   

int do_enter(string str)
{
   object me = this_player();
  if(me->query("bloodsword")==1)
   me->move("/open/gsword/room1/blood/room3/r5.c");
   return 1;
}
int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("只见雕像手指微动 ,脸色渐转红晕\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  object ob1;

  message_vision("突然老祖眼睛一张 ,一座雕像竟尔复活了 ,吓的$N连退三步..\n",ob);  
  message_vision("老祖道: 小子谢谢你啦.....\n",ob);
  message_vision("老祖一个箭步冲到洞口 ,踪身一跃 ,身影消失在山谷中\n",ob);
  ob1=new("/open/gsword/mob/bigghost");
  ob1->move("/open/gsword/room/test");
  message("mud","[1;34m一阵开山裂地的笑声自蜀山中传出..\n\n\n[0m",users());
  message("mud","[1;32m绿毛老祖吼道: \n
      哈 哈 哈......蠢蛋[33;1m"+ ob->query("name")+"[0m\n
   [1;32m使的老子我终于得以重现江湖 \n
          仙剑派的龟孙子们 ,抹干净你们的脖子 ,静待死神的来临吧 ,\n
              我要  血  洗  仙  剑  !!!!\n [0m",users());
  call_out("msg3",3,ob);
  return 1;
}

int msg3(object ob)
{
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road8");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road6");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road4");
 new("/open/gsword/mob/bloody")->move("/open/gsword/room/road6");
 new("/open/gsword/mob/bloody")->move("/open/gsword/room/road4");
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road4"); 
 new("/open/gsword/mob/gghost")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/road1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/rroad1");
 new("/open/gsword/mob/ghost1")->move("/open/gsword/room/lroad1");
 message("mud","[1;34m老祖已经复活了 ,\n
     小鬼们 ,咱们杀上仙剑替老祖洗尘..\n[0m",users()); 
  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
  message("mud","[1;33m郑士欣叹道:\n

     唉...真是一场冤孽...
           众子弟们 ,让我们齐心化解这场百年前所重下的因果..\n[0m",users());
  
  return 1;
}                      
