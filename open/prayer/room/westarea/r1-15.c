// made by funkcat, copy and re-edit by rence
//open/prayer/room/westarea/r1-15.c 
inherit BANK;
void create ()
{
        set("short","陈家钱庄");
  set ("long", @LONG
	这里是西域里规模庞大的钱庄, 而且西域的钱庄老板都是亲戚
	, 所以不管在那一家存放款, 都是一样的. 钱庄的老板是中原
	迁居到此的陈员外, 他的信用还不错, 你可以看看这儿的公告
	(board),了解一下有甚么服务.

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"road30",
]));
  set("item_desc", ([ /* sizeof() == 1 */
    "board" : "
    balance: 查看您现有的存款    convert: 换钱币
    withdraw: 提款               deposit: 存款
   ",
]));
set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
]));

  setup();
}
