
inherit BANK;
void create ()
{
set("short","军粮发放处");
  set ("long", "
    这是反乱军们出去打战所得战胜品，要寄放得地方，
也是佣兵们存钱的地方，当然在这里一定会有人在这守卫
不要乱打这里的主意，别人的钱是碰不得的，要抢也要抢
对地方，你可以看看这儿的公告(board),看看有甚么服务.
        <<偷窃者被抓罚金xxxxx万两黄金>>

");

  set("exits", ([ /* sizeof() == 1 */
"southeast" : __DIR__"r11.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: 查看您现有的存款    convert: 换钱币
    withdraw: 提款               deposit: 存款
         <<偷窃者被抓罚金xxxxx万两黄金>>
 ",
]));
  set("light_up", 1);
  setup();
} 
