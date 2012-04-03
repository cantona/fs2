// Room: /u/l/lum/workroom.c
inherit ROOM;
 
void create ()
{
  set ("short", "东方祠堂");
  set ("long", @LONG
  一走进来，一股特殊的气氛笼罩在整个庙宇中，在祠堂的正中央，摆设着东方女神
拉姆的神像(Idol)，让你有一种不可侵犯的感觉，另外四面还摆设了拉姆的四大护卫像
分别是兽魔师八云、幻术师琉璃子、剑神面堂三四郎还有忍者邪鬼半藏。
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/u/l/lum/npc/boy" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/ping/room/road1",
]));
  set("light_up", 1);
  set("valid_startroom", 1);
 
  setup();
}
