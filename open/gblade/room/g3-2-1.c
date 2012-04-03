#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "王元霸的房间");
  set ("long", @LONG

房间的陈设相当的华丽，临窗的大炕上铺着猩红洋毯，正面设着大红金线
蟒引枕，秋香色金线蟒大条缛；两边设一对梅花式洋漆小几，左边摆着文
王鼎，鼎傍匙莇香盒。右边摆着汝窑美人觚，里面插着时鲜花草。地下面
四张大椅都搭着银红撒花椅搭，底下四副脚踏。

LONG);

  set("light_up", 1 );
  set("exits", ([ /* sizeof() == 1 */
  "south": __DIR__"g3-2",
]));

create_door("south", "雕花紫檀木门", "north", DOOR_CLOSED);
  setup();
}
