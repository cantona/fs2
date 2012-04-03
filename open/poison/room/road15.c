// Room: /open/poison/room/road15
inherit ROOM;

void create ()
{
  set ("short", "前院");
  set ("long", @LONG
你来到了冥蛊魔教的前院，院内两旁种了几棵苍郁的老
松树，松叶随风飘落刺痛你的双颊，中间则是由汉白玉所铺
成的玉道，道路两旁为碧绿柔软的草皮，院子的北面有一雄
伟的殿堂。
LONG);

  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road14",
  "north" : __DIR__"room6",
]));

  setup();
}
