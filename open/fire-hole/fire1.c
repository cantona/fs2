#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIB"神秘洞窟"NOR);
  set ("long", @LONG
神秘的色彩弥漫, 邪恶的气息布满这里, 这里是火龙幻界的中心, 传说
中幻界的统治者住在这里, 前方有一个洞, 黑暗的令人感觉可怕, 有时还会
有邪恶的笑声, 看来就是这里了, 传说中的火龙王住的地方--火龙王窟。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "enter" : __DIR__"fire2.c",
  "east" : __DIR__"f-25.c",
  "west" : __DIR__"f-24.c",
]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/knight.c" : 1,
]));

  set("outdoors", 1);

  setup();
}
int valid_leave(object who,string dir)
{
if ( dir=="enter" && (who->query_temp("ko_y")!=1 || who->query_temp("ko_g")!=1 
     || who->query_temp("ko_r")!=1 || who->query_temp("ko_b")!=1 
     || who->query_temp("ko_p")!=1 || who->query_temp("ko_w")!=1)) 
return notify_fail("你并没有杀死六光火龙, 没有资格进入火龙王的洞窟!!\n");
return 1;
}

