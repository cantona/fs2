inherit "/open/clan/claneqshop.c";  
void create() {
	set( "short", "$HIG$兵器装备存放处(稀奇的东东)$NOR$ " );
	set( "light_up", 1 );
	set( "no_clean_up", 1 );   
	set( "build", 10041 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/hall",
	]) );
	set( "long", @LONG
一个又大又宽敞的兵器房,房间的四周卦满着林林总总的刀枪剑爪,由于地府
的帮众都拥有一定的实力,所以通常市不必用到此处低阶的存放室的,但是为了未来
招收的新帮众着想,地府仍然建立这个一般兵器收藏室,希望地府的帮众在离开的
的时候能将身上不必的装备拿来此处放置

LONG);
	setup();
}
