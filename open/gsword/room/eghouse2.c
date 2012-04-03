// Room: /open/gsword/room/eghouse2.c
inherit ROOM;

void create()
{
  set ("short", "寝居");
  set ("long", @LONG
这是剑派新进们的寝居，由于刚拜入门下，身分地位较低，因此这
寝居也格外的简陋，一张见方的大通铺，几张快垮的竹椅，即是寝
居的全部。南边是辈分较高的师兄们的住所。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eghouse3",
  "north" : __DIR__"eghouse1",
]) );

  setup();
}
