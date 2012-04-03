// Room: /u/m/moner/tree/room17.c
inherit ROOM;

void create ()
{
  set ("short", "山洞");
  set ("long", @LONG

你跟随着光线前进，藉着微弱的光线，你可以看清四周，你惊讶的发
现，这里的山壁平滑，显然是出于人手，照地势的起伏看来，这里应该是
山腰。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room19.c",
  "east" : __DIR__"room17.c",
]));
set("objects",([
"/daemon/class/blademan/npc/sublade2.c":1,
]));
set("no_transmit", 1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="west"&&(present("sublade man",environment(me))||present("sublade1 man",environment(me))))
   return notify_fail(" 邢涛说道 :这里是仙剑重地 ,你还是快离开吧!!!\n");
return ::valid_leave(me,dir);
}
