//花园迷阵第二型房间，正确方向是北方
inherit ROOM;
void create()
{
set("short", "花园迷阵");
set("long", @LONG
	在你眼前的是一大片夹竹桃，正开着粉红色的花朵，微风轻拂，枝条摇曳。
	婆娑起舞，奼紫嫣红，轻舞波浪的旋律，不由得令人痴醉。
	陪伴花草的是一堆堆布置完美的绿石，有了这些小山高的石堆，
	将此景色点缀的更无懈可击，石堆与花之间有着参差不齐的羊肠小径。
	在你前方的路上，种有三颗夹竹桃，挡住你的去路。
	东方种有三棵夹竹桃，西方只有一个石头，北方种有两棵夹竹桃，
    (请打move east,north,south,west任一方向)

LONG );
setup();
}
void init()
{
  add_action("do_move", "move");
}

int do_move(string arg)
{
  int way;
  object me=this_player();

  if (!arg)
     return notify_fail("选择一个你要去的方向吧。\n");
  if ((arg == "west") || (arg == "east") || (arg == "south"))
  {
//  	message_vision("$N感到一阵眼花撩乱，看来是走错方向了！\n", me);
    me->set_temp("flowrun",0);
    me->move(__DIR__"flowrm1.c");
    return 1;
  }
  if (arg == "north")
  {//表示方向正确
	if (me->query_temp("flowrun") > 9)
    {
      me->move(__DIR__"flowrm8.c");
      return 1;
    }
    else
	{
		way=random(6);
		me->add_temp("flowrun",1);
		switch (way)
		{
			case 0:
			{
				me->move(__DIR__"flowrm2.c");
				return 1;
			}
			case 1:
			{
				me->move(__DIR__"flowrm3.c");
				return 1;
			}
			case 2:
			{
				me->move(__DIR__"flowrm4.c");
				return 1;
			}
			case 3:
			{
				me->move(__DIR__"flowrm5.c");
				return 1;
			}
			case 4:
			{
				me->move(__DIR__"flowrm6.c");
				return 1;
			}
			case 5:
			{
				me->move(__DIR__"flowrm7.c");
				return 1;
			}
	}  //switch block
}
}  //检查正确方向的block
} //function block

