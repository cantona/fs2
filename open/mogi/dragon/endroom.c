// Room: /u/p/poloer/dragon/endroom
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "魔王殿总部");
	set( "build", 18 );
  set ("long", @LONG
一进到这里，一阵尸臭味就噗鼻而来，让人非常的恶心。看到四周
全都是死人骇骨，可能是误闯炎龙谷的人吧。也可以看出谷主是一位残
暴的人，墙壁还滴着血。前方正有一个人蹲着在啃食人肉。
莫非他是...........

LONG);
        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"g2-5",
"up" : __DIR__"f-4",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jen.c" : 1,
]));

  setup();
}     

int valid_leave(object me, string dir)

{
        if(dir=="up"&&present("jen",environment(me)))
  {

message_vision(HIY"郑雨桥喝道 :「小子，你干什么？”\n"NOR,me);

return 0;
}
return 1;
}



