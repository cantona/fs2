inherit BULLETIN_BOARD;

void create()
{
	set_name("技能与任务专用版",({"skill & quest board", "board"}));
	set("location","/open/wiz/fund_office");
	set("board_id","skill_b");
	set("long",	"天听自我民听，众巫师有话就留，没话快滚\n");
	setup();
	set("capacity", 30);
}
