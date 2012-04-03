inherit ROOM;
void create()
{
  set ("short", "密室");
  set ("long", @LONG
这是东瀛机关圣手--诸冈渡，所建造的超级地下水道。。
这是因为有许多的门派令人看守大门,使得杀手们无法顺利进行暗杀行动。
以至于当年黑牙连第一代掌门人叶孤城，远赴东洋聘请诸冈渡。
并且于富士山上，取得了富士山密草。据说在总坛的某处有密草的存在。
小渡率领杀手们费了几十年,来建造这个地下水道,
如今此水道已成,但你却不知道他是要通往那里!!
LONG);
   set("exits", ([
   "east"   : __DIR__"rbde.c",
   "west"   : __DIR__"rbdw.c",
   "south"  : __DIR__"rbds.c",
   "up"     : __DIR__"rb.c",
  ]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup();
} 

void init()
{
 add_action("do_search",({"search"}));
}

int do_search (string arg)
{
 object me,ob;
 
 me=this_player();
 if ( me->query_temp("rain_1") != 1)
   return 0;
 if (!arg)
 {
   if (me->query_temp("rain_3") != 1)
   {
      tell_object(me,"忽然，你眼前一花，一道人影出现在你眼前\n");
      tell_object(me,"此人张口说：听说你最近，一直在找天魔解体大法？\n");
      tell_object(me,"我可以给你帮忙，不过，你先帮我送这一封信给庄静柔\n");
      tell_object(me,"此人丢给你一封信，你眼前又一花，他又消失了\n");
      tell_object(me,"只留下一头雾水的你，仿佛经历了一场梦。\n");
      ob=new("/open/killer/obj/sorrylet.c");
      ob->move(me);
      me->set_temp("rain_2",1);
      return 1;
   }
   if (me->query_temp("rain_3") ==1)
   {
    message_vision("$N仔细的找了一下，发现了一个按钮，按下之后，出现一条往下的通道。\n", me);
    set("exits/down", __DIR__"rourm.c");
    return 1;
   }
 }
 return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "down") 
  {
    this_object()->delete("exits/tree");
    return 1;
  }
  if (me->query_temp("rain_3") != 1)
    return 0;
  this_object()->delete("exits/tree");  //只可进去一次
  return 1;
}