#include <room.h>
inherit ROOM;
void create()
{
set("short", "杀手宿舍");
  set ("long", @LONG
这里是极为平凡的地方，一眼望去，似乎没有一点像睡觉的地方。
这是属于杀手的特殊设计，为了怕睡觉时被暗杀，所以你一般是看不到睡觉的人。
必定随时都有人在守卫着，所以你想趁机杀了熟睡中的人是不可能的。
不过这里似乎守卫不够森严人少了一点，真是奇怪，难道有人跑去摸鱼？

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sr0.c",
"north" : __DIR__"sr2.c",
]));
  setup();
}

void init()
{
  object ob2;
  ob2=this_player();

  add_action ("do_search","search");

  if (!interactive(ob2)) return ;

  if (ob2->query_temp("rain_4")==1)
  {
   tell_object(ob2,"根据柴荣的叙述，你发现了往地下一楼的密道\n"); 
   tell_object(ob2,"你在看了，四周无人后，立刻往开启密道，往密道翻去\n");
   ob2->move(__DIR__"underm.c");
  }
}

int do_search ()
{
  object me,ob;

  me=this_player();
  if(me->query_temp("diray")==1)
  {  
   tell_object(me,"因为叶秀杀日记内容所述，你四处的寻找，居然发现了钥匙\n");
   tell_object(me,"正当你很高兴地拿取钥匙之时，不小心触动机关，落入陷阱\n");
   if (me->query("class") != "killer")
   {   
       me->move(__DIR__"doorm.c");
       return 1;    
   }
   me->move(__DIR__"sdr1");
/*
  ob=new("/open/killer/obj/key_d.c");
  ob->move(me);
*/
   me->set_temp("key",1); 
   return 1;
  }
  return 0;
}
