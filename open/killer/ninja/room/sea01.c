// /open/killer/ninja/room/sea01.c
inherit ROOM;

void create()
{  
   
   set("short","汪洋大海");
   set ("long", @LONG□

	你似乎来到很外海的区域，四周望去都是茫茫的大海
	
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : "/open/killer/sea/room/landrm7.c",
        "west" : __DIR__"sea02.c",
]));
//set("objects", ([ /* sizeof() == 1 */
//      "/open/killer/sea/npc/bunk_fish.c":1,
//      "/open/killer/sea/npc/hake_fish.c":1,
// ]));

 setup();
}

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

 if ( !present("static_water",this_player()) )  //检查玩家是否有定水珠
 {//如果没有定水珠，代表无法在水中移动
	   message_vision("$N居然没了定水珠，完蛋了！！.........\n",me);
	   message_vision("$N在海中漂流........\n", me);
	   me->add("kee",-20);
	   return 0;
}  
 //如果有定水珠就代表可以通过
 if (dir == "west")
 {
   if (!me->query_temp("wind"))
      return notify_fail("你被东瀛神风阻挡住，无法前进 \n");
   if (!me->query("ninja/firstpart"))
      return notify_fail("奇怪，没解过第一阶段，你怎么学到清风术？ \n");
   if (!me->query_temp("secondpart"))
      me->set_temp("secondpart",1);
   me->add("kee",-10);
   return 1;
 }
}
