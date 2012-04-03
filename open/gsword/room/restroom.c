// Room: /open/gsword/room/restroom.c

inherit ROOM;
// int picture = 1;

void create ()
{
  set ("short", "客栈");
  set ("long", @LONG
一间朴素的客栈,由于它并不是开在闹区, 以致于客人不是很多,
老板对你也是爱理不理的,你真怀疑他是怎么经营下去而不倒店的.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"su9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/bandit" : 1,
]));
  set("light_up", 1);

  setup();
}

void init()
{
  add_action("do_search","search");
}

int do_search(string arg)
{   
   object me;
   me = this_player();
     if( present ("keeper", environment(me)) )
     if(!me->query_temp("have_note"))
   {
     write("老板说: 人客啊...蜀中城可是有王法的地方耶...
...想搜...拿(搜索令)来...\n");
     return 1;
   }  
/*  if( picture )
  {
     write("你找到一幅画...\n");
     new("/open/gblade/obj/picture")->move(me);
     picture = 0;
     return 1;
  } 
*/
  if(arg == "地板" && me->query_temp("have_note"))
  {
    write("你在地板上发现一些血迹,你可以叫老板看看(show keeper blood).\n");
    me->set_temp("see_blood",1);
    return 1;
  }   
  write("你找了老半天，可是看不出有任何特殊之处。\n");
  return 1;
}           
