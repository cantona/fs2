//by poloer
// Room: /u/p/poloer/dragon/liuroom.c
inherit ROOM;

void create ()
{
  set ("short", "旅社二楼");
  set ("long", @LONG
一间普通的客房，房内只有一张床和几张椅子而已。在房内的脚落
放着一块破旧的牌匾，依稀能看出上面的字，好像是个镖字。椅子上正
坐着一位打扮仆素的姑娘。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : "/open/mogi/village/room/room-50",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/mogi/dragon/npc/liugirl" : 1,
  ]));

   set("no_auc",1);
set("no_transmit",1);
set("evil",1);

  setup();
}
