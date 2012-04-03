inherit "/open/clan/claneqshop.c";    
void create() {
	set( "short", "武器防具室" );
	set( "item_desc", ([
		"post" : @ITEM

     [0;1;31m□[1m□[1m□[1mO[1;32m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1;33m□[1m□[1m□[1m□[0m

     list              查看服务台内有什么物品
  take xxxx              将物品从服务台取出
   put xxxx              将物品放入服务台内
   put all          将身上的物品全部放务服务台内

ITEM,
	]) );
	set( "build", 10114 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room277",
		"north"     : "/open/clan/13_luck/room/hall.c",
	]) );
	set( "long", @LONG

    这是一间放武器和防具及其它杂物的大房间，在帮派中占有很重要
的地位。房间中装璜的非常漂亮，墙上一张蛮有趣的大字报（post），
吸引了你的视线，上头的ＰＯＰ字写得很不错。架子和地板也都十分的
干净。但因为是服物台的管理人员相当尽则，所以您存放的物品也都在
架上排列的非常整齐。

LONG);
	setup();
}
