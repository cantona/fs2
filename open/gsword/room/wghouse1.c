// Room: /open/gsword/room/wghouse1.c
inherit ROOM;

void create()
{
  set ("short", "藏经阁");
  set ("long", @LONG
这是仙剑派用以典藏武学秘笈之处，据说只有经过掌门人的许可，
才可到此翻阅武功秘笈，因此地上积了一层厚厚的灰尘，连秘笈由于
年代久远，也是残破不全。
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wghouse",
]) );

  setup();
}
