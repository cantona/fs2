#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间新手入门房间"NOR);
	set( "build", 24 );
  set ("long","欢迎来到‘狂想空间’的世界,狂想空间的时空背景是古代中国的Mud
  以下的区域是分门别类介绍狂想空间(FS),可以让您能加速了解及快速上手!!!
  东方(east)的区域------>简单的新手入门(newbie)及介绍狂想的门派!!
  北方(north)的区域----->狂想空间指令(cmds)快速上手
  西方(west)的区域------>狂想空间帮派制度(clans)的说明!!
  南方(south)的区域----->玩狂想空间时的一些小秘技!!!
  西北方(northwest)的区域---->狂想空间的特色!!!
  东南方(southeast)的区域---->狂想空间创站到现在的历史!!!!
  进入(enter)的区域--->正式进入狂想空间!!!   
  ------------------------------------------------------------------------
  建议您可以先从北方-->东方-->西方-->南方-->西北方-->东南方来看所有的区域!!!
  ps:进去房间时只要打n e w s nw se (就代表进去了方向了!!不用打英文全名!!!)
  ps:你若想更了解这里你可以打help,会有完整的说明文件!!!
\n");
  set("exits", ([
  "east" : __DIR__"newhand2-1",
  "west" : __DIR__"newhand3-1",
  "north" : __DIR__"newhand1-1",
  "south" : __DIR__"newhand4-1",
  "northwest" : __DIR__"newhand5-1",
  "southeast" : __DIR__"newhand6-1",
  "enter" : "/open/common/room/inn",  
               ]));
set("no_fight",1);
set("no_kill",1);
set("no_magic",1);
  set("light_up", 1);
  setup();
}

