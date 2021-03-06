inherit ROOM;
void create() {
	set( "short", "极武殿" );
	set( "object", ([
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file10"   : "/open/ping/obj/gold_hand",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/port/obj/wolf_ring",
		"amount4"  : 1,
		"file9"    : "/open/gsword/obj/silver_sword",
		"amount9"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount2"  : 1,
		"amount1"  : 1,
	]) );
	set( "item_desc", ([
		"金钢石" : @ITEM
一粒丑不拉几的石头，上面刻着，〔[22m[5m极武上尊是大猪头[0m〕
ITEM,
	]) );
	set( "build", 10102 );
	set( "light_up", 1 );
	set( "owner", "kingnight" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room100",
	]) );
	set( "long", @LONG
    池塘里的莲花散发着噗鼻的清香,令人心懭神怡.步过小桥草地上满是
百合花草,其中更有几株奇花异草,似乎使人觉得此处的主人朴实中隐藏不
凡的气度.门上‘[24m  极  武[0m  ’二字,正与中庭两旁排列整齐的各式武器显
示习武之人追求的极致境界.其中一把,置于中央以极其坚硬〔[21m金钢石[0m〕的
想必能把此剑插入此石内,此人的武功非一般级数的高手可及,更显示出此
剑的锋利呀!!真可谓习剑之人必争相竞夺的[41m[24m忘然神器[0m啊!!


LONG);
	setup();
	replace_program(ROOM);
}
