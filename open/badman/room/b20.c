inherit ROOM;

void create ()
{
 set ("short", "盗草屋");
 set ("long", @LONG
这里就是盗贼头子蒋风的居所。由稻草搭成的房子，朴素的摆设
，绝令人意想不到当初名震京城的”百技神学”现在竟落魄地躲在这
个简陋的小屋。眼前这个坐在床缘的蓄胡男子，应该就是蒋风了吧？
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/bandit/bandit_master.c" : 1,
]));
  set("light",1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"b12",
]));
  
  setup();
}
