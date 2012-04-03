// Room: /open/gsword/room/g1-8.c
inherit ROOM;

void create()
{
  set ("short", "护具室");
  set ("long", @LONG
这里是仙剑派的防具室, 学武之人本就不需要啥防具, 因此整间房间只放了一些肩甲, 
护心镜之类的防具, 突然你的眼光被一件耀眼的衣服所吸引, 定神一看, 原来是掌门人
郑士欣专用的龙须衣, 传说中具有刀枪不入的强韧度。
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g1-6",
]) );

  set("objects", ([ /* sizeof() == 3 */
  "/open/gsword/npc/boy.c" :1,]));
  
  setup();
}
