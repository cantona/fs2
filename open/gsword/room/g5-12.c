// Room: /open/gsword/room/wghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "藏经阁");
  set ("long", @LONG
这是仙剑派用以典藏武学秘笈之处，据说只有经过掌门人的许可，才
可到此翻阅武功秘笈，因此地上积了一层厚厚的灰尘，连秘笈由于年代久
远，也是残破不全，在左边的一角，有一个特别老旧的书架(shelf)。
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g5-11.c",
]));
  set("objects",([
"/open/gsword/npc/bookkeeper" :1 ]));

  set("light_up", 1);
  set("item_desc",([
 "shelf": "一个老旧的书架 ,上边摆\着数本残破不全的书籍 ,好像写着‘仙剑密笈’几个字\n"
  ]));
  setup();
}
