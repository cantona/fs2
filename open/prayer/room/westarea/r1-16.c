// made by funkcat, copy and re-edit by rence
//open/prayer/room/westarea/r1-16.c 
inherit BANK;
void create ()
{
        set("short","林家钱庄");
  set ("long", @LONG
	这家钱庄的老板是中原迁居到此陈员外的表亲, 他在西域的
	地产很多, 所以信用额度很高. 你可以看看这儿的公告
	 (board), 了解一下这里有些甚么服务.

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"road20",
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
