#include <room.h>

inherit ROOM;

void create()
{
        set("short", "圣火密室");
	set( "build", 150 );
        set("long", @LONG

	这儿是圣火教内部的密室, 这间密室应该是直接在石壁上
	挖掘建造的!!中间有一座岩台, 上面摆有一座鼎(bottle)
	, 鼎内发出灿烂夺目的光华!!

LONG);

set("item_desc",([
"bottle": "  [36m一座生铁铸成的狮头鼎 [0m "
]));
        set("exits", ([
            "east":__DIR__"2elder1"
        ]) );
setup();
}

void init()
{
 add_action("do_search","search");
 add_action("do_pull","pull");
}
 
int do_search(string str)
{
   object user;
   user=this_player();
   if( !user->query("quests/white-crystal",1))
   {
       write("这座鼎看来并没有什么奇怪的地方!!\n");
       return 1;
   }    

   if(str=="bottle")
   {
       write(" [36m你再仔细推敲一番, 发现狮耳(ear)的部分似乎有点古怪[0m....\n");
       user->set_temp("have_search_bottle",1);
   }
   else if(str=="ear")
   {
       if(!user->query_temp("have_search_bottle",1))     
       write("哦!!原来是年久受潮, 生了锈了!!\n");
       else
       {
           write("狮耳被你一碰之后, 鼎内的光华渐减, 你可以清楚地看见鼎内的事物 : 
     
           鼎内有六个洞, 其中一个洞是空的, 其余则分别是...
     
      [30m黑水晶[0m(black-crystal)--浑天心法第六层心法之口诀
      [34m蓝水晶[0m(blue-crystal)---浑天心法第七层心法之口诀
      [33m黄水晶[0m(yellow-crystal)-浑天心法第八层心法之口诀
      [31m红水晶[0m(red-crystal)----浑天心法第九层心法之口诀
      [32m绿水晶[0m(green-crystal)--浑天心法第十层心法之口诀

      原来这里就是浑天水晶的放置处!!你可以尝试着拔起它们(pull)..\n");
      user->set_temp("can_pull",1);
       }   
   }
   else
       write("你在找什么??\n");
    
  return 1;   
}      

int do_pull(string str)
{
 object user=this_player();
 object cry;

 if( (str=="black-crystal") && user->query("quests/white-crystal",1) )
 {
   if( user->query_skill("superforce",1) < 50 )
   {
   write("\n[35m突然双手感到一阵电噬...............哇!!!!黑水晶发出剧烈的强光....[0m\n\n");
   return 0;
   }
   else
   {
   write("由于你已经练有基本心法, [30m黑水晶[0m被你运劲一拔, 应声而起!!\n",user);        
   cry=new("/open/prayer/obj/crystal2" );
   cry->move(user);
   return 1;
   }
}

 if(str=="blue-crystal") 
 {
   if( user->query_skill("superforce",1) < 85)
   {
   write("\n[35m突然双手感到一阵电噬...............哇!!!!蓝水晶发出剧烈的强光....[0m\n看来你的浑天心法等级还不够.\n");
   return 0;
   }
   else
   {
   write("由于你已经练成第六层心法, [34m蓝水晶[0m被你运劲一拔, 应声而起!!\n",user);        
   cry=new("/open/prayer/obj/crystal3" );
   cry->move(user);
   return 1;
   }
}     

 if(str=="yellow-crystal")
 {
   if( user->query_skill("superforce",1) < 120)
   {
   write("\n[35m突然双手感到一阵电噬...............哇!!!!黄水晶发出剧烈的强光....[0m\n看来你的浑天心法等级还不够.\n");
   return 0;
   }
   else
   {
   write("由于你已经练成第七层心法, [33m黄水晶[0m被你运劲一拔, 应声而起!!\n",user);        
   cry=new("/open/prayer/obj/crystal4" );
   cry->move(user);
   return 1;   
   }
}

 if(str=="red-crystal")
 {
   if( user->query_skill("superforce",1) < 160)
   {
   write("\n[35m突然双手感到一阵电噬...............哇!!!!红水晶发出剧烈的强光....[0m\n看来你的浑天心法等级还不够.\n");
   return 0;
   }
   else
   {
   write("由于你已经练成第八层心法, [31m红水晶[0m被你运劲一拔, 应声而起!!\n",user);        
   cry=new("/open/prayer/obj/crystal5" );
   cry->move(user);
   return 1;
   }
}

 if(str=="green-crystal")
 {
   if( user->query_skill("superforce",1) <200)
   {
   write("\n[35m突然双手感到一阵电噬...............哇!!!!绿水晶发出剧烈的强光....[0m\n看来你的浑天心法等级还不够.\n");
   return 0;
   }
   else
   {
   write("由于你已经练成第九层心法, [32m绿水晶[0m被你运劲一拔, 应声而起!!\n",user);        
   cry=new("/open/prayer/obj/crystal6" );
   cry->move(user);
   return 1;
   }
 }
}  
