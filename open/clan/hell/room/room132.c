inherit ROOM;
void create() {
	set( "short", "中央驿站" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room129",
		"down"      : "/open/clan/hell/room/room23.c",
		"north"     : "/open/clan/hell/room/room131.c",
	]) );
	set( "long", @LONG
这儿就是最最出名的驿站, 镳局的车队, 来往于沙漠的骆驼队, 甚
至是牛马骡车, 几乎只要你叫得出名字的交通工具这儿都有。

$HIY$在这里，你可以使用(transfer)指令前往你以前曾经去过的驿站!!$NOR$

    白云在天空中飘来飘去。
    太阳刚从东方的地平线升起。
  「$RED$小辣椒$NOR$”卖火柴的小辣妹(Sale girl)$HIM$(发呆中)$NOR$
  天道派第五代女弟子「$HIY$发呆天王$NOR$”(聊天专用)小敏(min)$HIC$(输入文字中)$NOR$
  $HIW$漩羽$HIY$刀皇$NOR$「代tin中”(坏人)欧尼克斯(onyx) $HIG$(机器人中)$NOR$  
  $YEL$大$RED$坏$GRN$蛋$NOR$「$HIW$@@?$HIC$<<=$HIY$猴子$HIG$抓$HIR$跳蚤$NOR$”大飞(blur)$HIY$(看阁楼中)$NOR$
  $HIR$当$HIG$代$HIY$杀$HIB$手$NOR$ 藤木直人(neun)
  $HIR$当$HIG$代$HIY$杀$HIB$手$NOR$「$HIR$鬼   $HIC$武   $HIM$者   $HIG$2$NOR$”一粒沙白(ssc)
  $HIR$杀手全力追杀的人头$NOR$「$HIY$越死越tin$HIC$,tin了又死$NOR$”天杀(php)
LONG);
	setup();
	replace_program(ROOM);
}
