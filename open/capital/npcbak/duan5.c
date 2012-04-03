// 段家 门人 made by onion
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("凌落风",({"ling"}));
	set("long","凌落风是段云的第五个弟子, 脸无四两肉, 一副又懒又累的样子"+
	", 但他那一双眸子, 却显的炯炯有神、锐查秋毫。\n");
	set("gender","男性");
	set("class","scholar");
        set("combat_exp", 30000);
        set("attitude","heroism");
	set("age",40);
	set("inquiry", ([
	"thief" : "我们来京城并不是为这件事的, 抱歉了。",
	]));
	set("force",300);
	set("max_force",300);
	set("force_factor", 1);
	set_skill("force",40);
        set_skill("unarmed",50);
	set_skill("sunforce",40);
	set_skill("dodge",60);
        set_skill("linpo-steps",60);
        set_skill("six-fingers",66);
        map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
	setup();
	add_money("silver",1);
	create_family("段家",11,"弟子");
}

