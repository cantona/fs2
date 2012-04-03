#include <room.h>

 inherit ROOM;
void receive_hit();
 void create()
{
        set("short", "仙剑派禁地");
        set("long", @LONG
这是仙剑派的禁地,但是放眼望去,这儿跟一般的岩石平台没啥两样,
景物也是稀疏平凡得很,到底为什么这儿被仙剑派列为禁地,严禁弟
子及访客接近,就真要说这有特异之处的话,大概也只是在左边有一
棵上百年非要十人才能围抱巨木(Gaint tree)吧!!


LONG
        );

        
        set("item_desc",(["Gaint tree":
 "这是一棵百余年的古树,藤蔓布满了整个树身,翻开藤蔓一看,一个掌印(hand_print)嵌入
 树身,定是高人所为,神往之余,你好想也对着掌印来上一掌(hit hand_print)幻想你是以前
 的那位高人.\n",
 "hand_print" :
 "这个掌印足足有五寸宽三寸厚,简直令人匪夷所思\n"
 ]));
                                        
       set("exits",([
                     "south": "/u/b/bigcat/room/rroad4.c"
                     ]));
                    
                    
           setup();
        }

void init()
{
add_action("hit_hand_print","hit");
}

int hit_hand_print(string str)
{
   if(str!="hand_print")
     {
         return 0;
         }
     write(" 喀啦一声～～～～～～,你本能性的紧握武器,防备突如奇来攻击\n
           ～～～～～\n");
     write("\n");
    receive_hit();
    return 1;
 }
 
 void receive_hit()
 {
 object ob;
 object hitter;
 write("突然一位老者挟者万均之势从天而降,手中长剑幻化成无数剑气向你而来\n");
 message_vision(sprintf("老者喝道:[1m擅闯仙剑禁地者,死!!![0m\n"),this_player());
 ob=new("/u/b/bigcat/mob/guard");
 hitter=this_player();
 ob->move(environment(this_player()));
 ob->invocation(this_object());
 ob->kill_ob(hitter);
 set("exits",([
"enter": "/u/b/bigcat/room/tree",
"south": "/u/b/bigcat/room/rroad4"
   ]));
  }
int valid_leave(object me,string dir)
{
  if (dir=="enter" && present ("oldman", environment(me)))
      return notify_fail ("老者挡着你说道: 想闯禁地,先问问我手上的这把剑吧。\n");
        return ::valid_leave(me, dir);
}     
