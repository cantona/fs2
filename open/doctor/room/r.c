inherit ROOM;
int have = 1;
int time = 0;
void create ()
{
  set ("short", "药圃");
  set ("long", @LONG
这里是银针门的药圃，种满了各地收集来的奇花异草，只见处处
馨香，团花仅簇，但却有那么一点点的奇异，就是这若大的药圃里，
竟不见蝶飞蜂舞，似忽有些密秘。
LONG);
  set("light_up", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 1 */
      "west" : __DIR__"r1",
  ]));
set("can_search",1);
set("objects",([
"/open/gblade/obj/smallstone.c":1,
]));
  setup();
  set_heart_beat(1);
}
void init()
{
    add_action("search_here", "search");
    add_action("pull_it","pull");
}
int search_here(string arg)
{
    if( (this_player()->query("combat_exp",1) > 30000)  && have)
      write("你找啊找的,终于发现有人用奇门遁甲隐藏了一棵灵芝.\n"+
            "你可以试着拔它(pull it).\n");
    else
       write("也许是你经验不足,你什么也没发现...\n");
    return 1;
}
int pull_it(string arg)
{
    object user,ob;
    user = this_player();
    if( (user->query("combat_exp",1) > 30000)  && have)
    {
    ob=new("/open/doctor/npc/grass2");
    have = 0;
    ob->move("/open/doctor/room/r");
    message_vision("当$N正要拔起灵芝时,只见一只守药神兽冲了出来!!\n", user);
    return 1;
    }
    return 0;
}
void heart_beat()
{
time++;
if(time > 300)
{
time = 0;
have = 1;
}
return;
}


