#include <room.h>

 inherit ROOM;
 void receive_hit();
 int done=0;
 void create()
{
        set("short", "仙剑派禁地");
        set("long", @LONG
眼前是一个偌大的山洞，门口以精钢栅栏封住，洞内黑戚戚的一片，
完全不能探知里面说不出的诡异气氛，时有听到动物惨叫的声音，时而闻
到浓厚的血腥味道令你不寒而颤。洞口的左侧有个拉杆(level)。
 
LONG
        );

             
        set("item_desc",(["level":
 "这个拉杆已生锈多年，似乎是用来开启栅门用的，你可以试着拉(pull)动它。\n",
 ]));
                                        
       set("exits",([
                     "east":__DIR__"g6-9",
                     ]));
                    
           setup();
        }

void init()
{
add_action("pull_level","pull");
}

int pull_level(string str)
{
   if( done==1)
     return notify_fail("机关已经启动\n");
   if(str!="level")
     {
         return notify_fail("你要拉什么??\n");
         }
     write(" 喀啦一声～～～～～～\n
            栅门渐渐的升起.\n");
     write("\n");
    done=1;
    receive_hit();
    return 1;
 }
 
 void receive_hit()
 {
 object ob;
 object hitter;
 write("突然一位老者挟者万均之势从天而降,手中长剑幻化成无数剑气向你而来\n");
 message_vision(sprintf("老者喝道:[1m擅闯仙剑禁地者,死!!![0m\n"),this_player());
 ob=new("/open/gsword/npc/guard");
 hitter=this_player();
 ob->move(environment(this_player()));
 ob->invocation(this_object());
 ob->kill_ob(hitter);
 set("exits",([
     "east":__DIR__"g6-9",
    "north":__DIR__"g6-11"
    ]));
  }
int valid_leave(object me,string dir)
{
  if (dir=="north" && present ("oldman", environment(me)))
      return notify_fail ("老者挡着你说道: 想闯禁地,先问问我手上的这把剑吧。\n");
        return ::valid_leave(me, dir);
}     
     
     
     
        
