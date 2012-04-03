// Room: /open/gsword/room/swordhouse
inherit ROOM;

void create ()
{
  set ("short", "五岳剑盟");
  set ("long", @LONG
这里是天下剑客同盟在蜀中的联络处,灰斜的屋瓦,参白的墙
壁,虽不华丽,却显得庄重.你见到许多剑客进出这里.左首有个
告示牌(board),似乎在说明如何成为剑士的一员.



LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su10",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "招牌上写着 :
你想成为剑士公会的一员吗?
你想做个人人钦佩的剑侠吗?
很简单 ,只要打个(join)即可加入我们剑士公会
以后就能在大陆上各大剑派拜师学艺了.
",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/swordsman/master-1" :1,
]));

  set("light_up", 1);

  setup();
}
