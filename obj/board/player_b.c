// query_b.c

inherit BULLETIN_BOARD;

void create()
{
	set_name("玩家事务处理板", ({ "player board", "board" }) );
	set("location", "/open/wiz/entrance");
	set("board_id", "player_b");
	set("long", @LONG
这是一个专门给巫师留有关玩家事项的布告栏, 例如举发某玩家有违规
事项, 某玩家的档有问题等等。
LONG);
	setup();
	set("capacity", 100);
}
