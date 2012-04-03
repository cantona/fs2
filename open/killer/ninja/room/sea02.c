// /open/killer/ninja/room/sea02.c
inherit ROOM;

void create()
{  
   
   set("short","汪洋大海");
   set ("long", @LONG□

	恭喜，你已经正式进入第二阶段的解谜，
	但是小渡还没有完成第二阶段的部分，所以到此为止
	如果你可以使用清风术，就代表你完成第一阶段
	以后可以直接由第二部分开始解谜.........
	前三名看到这一段讯息的玩家，再小渡写出第二阶段之前
	会特别帮你们‘暂时’把分功化影身法，强化到100级
	第一位密码： Killer number one
	第二位密码： I love my killer
	第三位密码： Killer is the best
	看到这一段画面，请抓自己的密码后，post再版上即可	
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : __DIR__"sea01.c",
        "west" : __DIR__"sea03.c",
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
return 1;
}
