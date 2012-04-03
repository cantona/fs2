//一般外海区域 主路线，非特殊 区域 
inherit ROOM;

void create()
{
set("short", "外海");
set("long", @LONG

	一望无际的大海，让人不禁心胸开阔起来，且豪气万丈。
	茫茫的大海中，让你不知道该何去何从，为了避免迷路，
	还是乖乖的按照，一般的路线前进吧........
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : __DIR__"sea02.c",
]));
set("no_transmit",2);
setup();
}

void init()
{
  int i;
  object guard;
  object me=this_player();

 if(interactive(me) && (random (4) < 1 ))
 {//25%的敌人出现机率
  i=random(5); 
  // 由 五种类的敌人里面选出合适的
  // 一般区域的话，敌人类型多，但是没有好宝物，但是常常会出现
  switch(i)
  {
	case 0:
	//直接送到房间而不是玩家所在房间
        //这是避免，玩家房间在还没建立之前，先送物件到该房间
		guard=new(__DIR__"npc/normal01.c");
		guard->move(environment(me));
		break;
	case 1:
		guard=new(__DIR__"npc/normal01");		
		break;
	case 2:
		guard=new(__DIR__"npc/normal01");
		break;
	case 3:
		guard=new(__DIR__"npc/normal01");
		break;
	case 4:
		guard=new("/open/killer/headkill/npc/shuryu.c");
		break;
  }//SWITCH
  guard->move(environment(me));
 }//IF
}


int valid_leave(object me, string dir)
 {
 object target;
 
// target = offensive_target(me);
 if(me->is_fighting())
 //if(present(guard->query("id"),environment(me)))
 {
    if (random(10) < 5)
    {
    	me->start_busy(2);
    	return notify_fail("逃跑失败，身形为之一滞!!!!\n");
    }
  }
  return 1;
}
