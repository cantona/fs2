inherit ROOM;
void create() {
	set( "short", "小武者ㄉ温暖ㄉ窝" );
	set( "object", ([
		"amount7"  : 1,
		"file7"    : "/open/snow/obj/figring",
	]) );
	set( "item_desc", ([
		"山" : @ITEM
一座粉大ㄉ山
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10159 );
	set( "owner", "tony" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/room21",
	]) );
	set( "long", @LONG
    这里是[36m小武者[0m的门口，只见墙上挂着牌子写着：
     
       【 帅哥派第三代掌门 「[31m超级帅哥[0m”[36m小武者[0m之陵寝 】
 
       【 黄 】                               【 一 】
       【 云 】                               【 生 】
       【 白 】                               【 一 】
       【 发 】                               【 笑 】
       【 雪 】                               【 莫 】
       【 苍 】                               【 知 】
       【 苍 】                               【 愁 】
 
 

LONG);
	setup();
	replace_program(ROOM);
}
