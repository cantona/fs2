// Room: /u/p/poloer/dragon/g1
inherit ROOM;

void create ()
{
  set ("short", "魔王殿");
  set ("long", @LONG
一间看来很雄伟的建筑物，但不知为什么房屋四周竟然都没有半
点生物，看起来非常凄凉，乌鸦在上空飞着并且不时发出丫～ㄚ的声
音，听起来让人毛骨耸然。仔细观察这间房屋，发觉这竟然是用人的
骨头所搭建而成的，朱红色的大门顶上有幅用血写的牌扁，上面写着
「魔王殿” 。

LONG);

  set("outdoors", "/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"c9",
  "enter" : __DIR__"g2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
