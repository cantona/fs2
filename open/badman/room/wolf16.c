inherit ROOM;
void create()
{
  set ("short","狼王殿");
  set ("long",@LONG
一进入这房间 ,便迎面袭来一阵杀气 .你尝试着定住心神不被吓到
 ,抬头一看 ,便发现一面匾额挂在墙上 ,上面大剌剌地刻着三个字 "狼
王殿 " .而坐在你面前的 ,便是这狼谷的主人-- "狼王 "筤騂 !他那炯
炯有神的双目 ,便像要将你看穿似的 ,令你无法自己 !
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/master_wolf.c" : 1,
  "/open/badman/npc/wolf03.c" : 1,
]));
  
  set("light_up",1);
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"wolf15.c",
]));

  setup();
}
