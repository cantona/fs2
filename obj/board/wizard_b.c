// query_b.c

inherit BULLETIN_BOARD;

void create()
{
         set_name("巫师打屁哈拉版",({ "wizard board ","board"}));
        set("location","/open/wiz/hall1");
        set("board_id","wizard_b");
	set("long", @LONG
这是一个专门给巫师留有关玩家事项的布告栏, 例如举发某玩家有违规
事项, 某玩家的档有问题等等。
LONG);
	setup();
    set("capacity", 300);
}
