#include <room.h>

inherit ROOM;

void create()
{
           set("short","通吃小筑二楼前庭");
         set("long",@LONG
	在你面前的是一面巨大的石门，一旁有各看似机关的东西。
	在机关上面写的是，庄静柔因为天魔解体大法练不成，改练成招式是？
	在另外一边有四个(空格)，看来你要刻在上面了
 
LONG);
        set("exits", ([
          "down":__DIR__"hr7.c",
        ]) );
        set("objects",([
          "/open/killer/npc/magnpc2.c":2,]));
        setup();
}

void init()
{
      add_action("do_look","look");
	add_action("do_write","cut");
}

int do_look(string str)
{
      if(str!="空格") 
	return 0;
      tell_object(this_player(),"碑石上还有一行空行(table)。\n");
      tell_object(this_player(),"（请使用指令格式 cut XXXX on table) \n");
       return 1;
}

int do_write(string str)
{
  object me;

  me=this_player();
if (str !="阴性气指 on table")
	return 0;
  tell_object(me,"你用匕首在空格刻下‘阴性气指’\n");
  tell_object(this_player(),"在你眼前的石门打开了.........\n");
  me->move(__DIR__"hru1.c");
  return 1;
}
