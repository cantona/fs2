// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
	set("short","枫林钱庄");
  set ("long", @LONG
这里是枫林钱庄 , 这边的存款及放款量一向是全国数一数
二的 , 你可以看看这儿的公告(board),看看有甚么服务.

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"p2-1.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: 查看您现有的存款    convert: 换钱币
    withdraw: 提款               deposit: 存款    
 ",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/officer" : 1,
]));

  setup();
}
