
inherit ROOM;
void create()
{
  set ("short", "大通铺");
  set ("long","
    你一踏进来就踩到软软的东西，原来是一堆被子，这
里简直乱的像猪窝一样，在旁边还睡了几个人，还有聊天
的，看起来他们一点也不觉的人客人，在你左手边有房间
蛮特殊的难道是最高阶的住在里面吗～

 ");
   set("exits", ([
   "west"   : __DIR__"r27.c",
   "north"   : __DIR__"r21.c",
   "east"   : __DIR__"r25.c",
   
  ]));      
  set("light_up", 1);
  setup();
} 

