 // 钥匙, 有锁的房间请到 /u/w/wade/room/key_room 参考
#include <ansi.h>
#include "/open/open.h"
inherit ITEM;

void create()
{
        set_name(HIR"钥匙"NOR, ({"red key","key"}) );
        set("unit", "把");
        set("long", "这是一把赤红红的钥匙。\n");
        // 底下这个是设定它可以用的房间
        set ("key_of_room", ({ "/open/wu/room/gen7"}) );
        set("no_drop",1);
}
