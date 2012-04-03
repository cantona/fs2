
inherit ROOM;

void create()
{
	set("short", "铸造庐");
	set("long", @LONG
原来这里是一间打铁铺子，从火炉中冒出的火光将墙壁映得通红，
屋子的角落里堆满了各式铁器的完成品或未完成品，像是锄头、铁锤、
铲子、剑、弓、刀、鞭等等。屋内有位老者正在铸造一把锄头，叮叮当
当的声音敲得满屋子响。你发现有张纸(paper)贴在墙壁上。
LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "白纸上龙飞凤武地写着几个大字：

   □□□ 铸造 □□□
        铸造所需要的条件包括 1 . 钱 2 . 矿 3. 年龄须达下限
        4 . 体力内力与时间  5 . 经验值须达下限
        铸造的指令有 :
        1 . 铸造 : 请打 found <武器种类> by <矿物>
                   <武器种类> : sword blade stabber bow unarmed stick..
        2 . 命名 : 请打 setname <武器> <名字>
                   <名字> : 可以参考 nick 来更名字，不过需要本人与铸剑师
                            一起才可以更名。
        3 . 索物 : 请打 getweapon by <武器单子>
        目前开放铸造的武器，只是一种实验性质的东西。跟以往的武器是有所不
        同的，可随着你的经验值增加，而慢慢的增加武器的伤害力。而护具的铸
        造尚在研发中、、、、、、、、、
        
             
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "down" : "/open/tendo/room/tower/make5",
]));
set("objects", ([ /* sizeof() == 1 */

]));
 set("light_up", 1);

	setup();

}
