inherit ROOM;

void create ()
{
  set ("short", "闺房");
  set ("long", @LONG
哇 !好一间美丽的房间啊 ,有一张舒适的大床位在房间的中央 ,
有一位气质出众的少妇 ,正对着挂在墙上的铜镜 ,梳着她那头又
黑又亮的长发 ,看着她那倒映在镜中的美丽轮廓 ,真是叫人意乱
情迷 ,难以自己 .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/ran.c" : 1,
]));

  setup();
}
