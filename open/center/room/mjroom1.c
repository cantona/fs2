#include <room.h>
#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
void create()
{
set("short",HIR"["+HIY+"深田恭子麻将馆"+HIR+"]"NOR);
set("long", @LONG
这是一间专门让玩家们休息的娱乐场所，当你在为你的角色
辛苦锻炼时，别忘了休息是为了走更长远的路，找三五好友一同
来打个几圈吧，不过可别沉迷在赌博中喔～～～～详细的规则请
看看布告栏（ｂｏａｒｄ）
LONG
);
set("light_up",1);
set("exits",([
   "west" : "/open/center/room/men",
]));
set("objects",([
"/u/a/anmy/sp/mj":1,
]));
set("item_desc",([
"board":"
一般基本的操作：：  每种牌都有其代码　例：一万－＞1w 七索－＞7s
加入牌局：addin        开始牌局：start
摸牌：mo             重开牌局：restart
看玩家1的牌：.1      看玩家2的牌：.2
看玩家3的牌：.3      看玩家4的牌：.4
看自己的牌：.
丢牌：dump xx        吃：eat xx xx        
碰：pon              杠：gon              
胡：hu               听：tin xx           
xx为代码  例：eat 2w 3w
",
]));
setup();
}
