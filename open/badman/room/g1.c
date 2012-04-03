// Room: /open/badman/room/r1
inherit ROOM;

void create ()
{
  set ("short", "恶人谷大厅");
  set ("long", @LONG
这里就是恶人谷的最高指挥中心，你看到大厅中央摆了九张披
着虎皮的豪华大椅，不过现在只有中间的椅子上坐了一个人，想必
他就是恶人谷的首领了吧。不过说也奇怪，这恶人谷不是传说有十
大恶人吗？怎么大厅中却只有九张椅子呢....
    如果你希望成为一个无恶不作的江洋大盗，可以向杜老大要求
加入(join)盗贼的行列。

☆☆ 恶人谷要重新开始动工了!! 玩家请忍耐, 巫师请到楼上讨论. ☆☆

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"wizroom",
"north" : __DIR__"eqroom",
  "east" : __DIR__"b7",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/bandit/master_du.c" : 1,
]));
  set("valid_startroom", 1);

  setup();
  call_other("/obj/board/bad_b", "???");
}

int valid_leave(object who, string dir)
{
	if( dir=="up" && !wizardp(who) )
		return notify_fail("干啥! 又没叫你上去，找打啊! :b\n");
if(dir=="north"&&who->query("class")!="bandit")
 return notify_fail("不是恶人谷的弟子无法进去\n");
	return ::valid_leave(who, dir);
}
