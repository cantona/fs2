  // 钥匙, 有锁的房间请到 /u/w/wade/room/key_room 参考
#include <ansi.h>
#include "/open/open.h"
inherit ITEM;

void create()
{
        set_name(HIB"钥匙"NOR, ({"blue key","key"}) );
        set("unit", "把");
        set("long", "这是一把蓝色的钥匙。\n");
        // 底下这个是设定它可以用的房间
        set ("key_of_room", ({ POISON_ROOM"path13", POISON_ROOM"room19"}) );
        set("no_drop",1);
}
