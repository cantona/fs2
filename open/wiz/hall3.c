// Room: /open/wiz/hall3.c 
inherit ROOM;
 
void create ()
{
  set ("short", "内阁室");
  set ("long", @LONG
请各位内阁成员有空多看此board, 且 post 意见、问题。
啥？内阁什么？当然是 Post Wiz 人事升降级考核跟编组
用的。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"hall1.c",
]));
  set("no_fight", 1);
  set("no_magic", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/obj/tel" : 1,
]));

  setup();
call_other("/obj/board/wiztt_b.c","???");
}
