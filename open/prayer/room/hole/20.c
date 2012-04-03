///open/prayer/room/hole/20.c

#include <ansi.h>
inherit ROOM;
void create ()
{
  seteuid(getuid());    
  set ("short", "囹圄池");
  set ("long", @LONG
        你的面前是一座腥臭无比的血池，并且传来阵阵的邪气!!血池中
        有一只野兽在那里翻滚，不过别怕，牠身上有数条的铁链禁锢着
        牠，咬不到你的，你可以试着放牠自由(free)!!但是至于你的安
        全问题，可就没有人保证了.....
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"18",
  "south" : __DIR__"19",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/kylin-statue" : 1,
]));

        set("evil",1);
        set("no_auc",1);
        set("no_transmit",1);
  setup();
}
void init()
{
 add_action("free_kylin","free");
 add_action("search_here", "search");
}

int search_here(string str)
{
    if( (this_player()->query("combat_exp",1) > 100000)  )
    {
    write("你扯了扯铁链之后.发现铁链是可以顺沿而下的.可是血麒麟在下面耶!!\n");
      set("exits/down",__DIR__"21");
      call_out("do_close",10);
   }
    else
    {
    write("也许是你经验不足,你什么也没发现...\n");
    }    
return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"铁链被血麒麟拉扯后将这条出路覆盖\了。\n");
}

int free_kylin(string str)
{
  object ob,ob1;
  ob=this_player();
  if(!present("kylin",environment(ob)))
    return notify_fail("血麒麟都被放走了, 你想要怎样呢??\n");
  if( str!="kylin")
    return notify_fail("吼~~~~~~~~~~!!!!\n");
  message_vision("[36m你运劲将牠身上的铁链震断...[0m",ob);
  write("\n\n\n");
     ob1=present("kylin",this_object());
  destruct(ob1);
  call_out("msg1",3,ob);
  return 1;
}   

int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("血麒麟开始在血池中剧烈的翻搅....\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  message("mud","[33m血麒麟被放出来了........大家小心呀!![0m\n",users());
  call_out("msg3",3,ob);
  return 1;
}

int msg3(object ob)
{
  new("/open/prayer/npc/kylin")->move("/open/gsword/room/su3");

  call_out("msg4",3,ob);
  return 1;
 }
int msg4(object ob)
{
  message("mud","[36m血麒麟大吼一声～～\n

     [5m[33m"+ ob->query("name")+"[0m[36m笑道：\n\n


     呵呵呵呵....是我把牠放出来的!!玩家要倒大楣了\n\n"NOR,users());
  
  return 1;
}                      
