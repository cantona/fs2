// made by funkcat, copy and re-edit by ccat
#include <ansi.h>
inherit BANK;
void create ()
{
	set("short",HIY"＄史家钱庄＄"NOR);
  set ("long", @LONG

　　这里是本地最大的钱庄，这边的存款额在全国是数一数二
的，你可以安心的将钱存在这里。这家钱庄的老板是大财主史
怀恩，你可以看看这儿的公告(board)，看看有甚么服务。

LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east" : "/open/port/room/r1-2",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
	服务种类：
		deposit ： 存款    
		withdraw： 提款               
		balance ： 查询存款
		convert ： 换钱币

	货币种类：
		diamond ： 钻石
		cash    ： 银票
		gold    ： 黄金
		silver  ： 银两
		coin    ： 铜钱

	注意! 在做极大笔金额的交易时，因为老板的算术不太好，
	有可能会算错，巫师可不帮史家钱庄赔钱喔!
	所以建议你还是别冒险，宁愿分多次一点，让他慢慢算。

",
]));
  set("light_up", 1);
  set("donate",1);
  set("objects", ([ /* sizeof() == 1 */
]));

  setup();
}
