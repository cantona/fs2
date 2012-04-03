inherit ROOM;
int counter = 10;
void create ()
{
  set ("short", "叠翠轩");
  set ("long", @LONG

从房里的小门走出来，是一个小小的后院，有千百竿翠柳遮映，有大株梨
花，阔叶芭蕉，又有两间小小退步；后院墙下忽开一隙，得泉一脉，开沟
尺许，灌入墙内，然后灌入墙内，绕阶缘屋至前院盘旋竹下而出。如此幽
雅的环境不禁让你想要在树下小睡(sleep)一番。

LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 1 */
   "south" :__DIR__"g3-1-1.c",
]));

  setup();
}

void init()
{
        add_action("do_sleep","sleep");
}


int do_sleep(string arg)
{
   int _gin;
   message_vision("$N在树下渐渐睡着了.Zzzz\n",this_player());
   if( (counter + random(10)) > 10 )
   {
     message_vision("$N醒了过来，看起来精神好多了。\n\n",this_player());
     this_player()->add("sen",20);
     counter --;
     return 1;
   } else {
      _gin = this_player()->query("gin");
      message_vision("$N睡得太久有点累.\n\n",this_player());
      if( _gin >5 )
      {
       this_player()->add("gin", -5);
      }else{
       message_vision("$N睡死了!!\n",this_player());
       this_player()->set("gin", 1);
       this_player()->set("kee", 1);
      }
      return 1;
   }
}
