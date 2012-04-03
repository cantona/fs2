// Room: /u/m/moner/room/room22.c
inherit ROOM;

int have = 1;
int time = 0;
void create ()
{
  set ("short", "后院");
  set ("long", @LONG

这里是魔刀门内栽花植草的地方，因门人多为习刀嗜武之人，鲜少有
爱花惜草之人，所以院内少有人照料，奇花异草和杂花杂草生长在一起
，不仔细看的话是分辨不出来的，彩蝶翩翩的穿梭在花丛间，蜜蜂辛勤
采着蜜。
       清风微微的吹拂着，一只蝴蝶不小心飞到你身旁了。
LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room21.c",
]));

  setup();
}
void init()
{
    add_action("search_here", "search");
   add_action("pull_straw", "pull");
}
int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 10000)  && have)
   write("你搜了搜四周, 发现脚落了草丛有些奇怪..\n"+
       "你决定拔拔看那堆草 (pull straw)...\n");
    else
      write("也许是你经验不足,你什么也没发现...\n");
    return 1;
}
  int pull_straw(string arg)
{
    object user,ob;
    user = this_player();
    if( (user->query("combat_exp",1) > 10000)  && have)
    {
    have = 0;
     ob=new("/daemon/class/blademan/npc/butterlfy.c");
     ob->move(__DIR__"room22.c");
    message_vision("当$N正要拔起草的时, 一只彩蝶飞了出来!!\n", user);
    return 1;
    }
    return 0;
}
void heart_beat()
{
  time++;
  if( time > 300)
  {
    time = 0;
    have = 1;
   }
   return;
}
