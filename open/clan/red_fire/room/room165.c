inherit ROOM;
void create() {
	set( "short", "$HIC$【$HIM$大饭店 $HIR$VIP $HIY$特区$HIC$】$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room166",
	]) );
	set( "long", @LONG
这里是专门用来接待$BRED$红莲$HBCYN$贵宾$NOR$的接待区，看这豪华的装潢及耀眼的装
饰，不输给任何一流$HIM$饭店$NOR$的$HIY$总$HIG$统$HIR$套$HIC$房$NOR$。看这用$HIY$纯金$NOR$打造的灯座及各种名家
制作的$WHT$雕像$NOR$。所有的摆设全都是费了很大的心思才有这样的成果，为的只
是能让所以来到这里的$HBCYN$贵宾$NOR$可以感受到宾至如归的尊荣待遇，据说每间$HIY$套
房$NOR$都是名师设计的，为了怕打扰到$HBCYN$贵宾$NOR$们，所以里面也只有$HIR$教主$NOR$和两大$HIC$殿
主$NOR$才可以进去。


LONG);
	setup();
	replace_program(ROOM);
}
