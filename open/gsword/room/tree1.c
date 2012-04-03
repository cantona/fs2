#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "树洞");
	set("long", "这是树身的内部,走到这儿,你不禁皱了皱眉头,前方一共岔出了三条路,每条路上似乎都
危机四伏,往哪儿走好呢??啊～这有个牌子(sign),看看不就知道该往哪走了,偶真是笨啊!
你使劲的拍了一下自己的大光头.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/u/b/bigcat/room/ntree",
  "west" : "/u/b/bigcat/room/wtree",
  "south" : "/u/b/bigcat/room/tree",
  "east" : "/u/b/bigcat/room/etree",
]) );

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "  日木之为天
   双士之为地
   一四之为人
",
]) );

  setup();
}
