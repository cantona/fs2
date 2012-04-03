#include <ansi.h>
inherit F_VENDOR;

string magic1();

void create()
{
	set_name("俞\清岩",({"chin"}));
	set("long","陆清风师弟。个性勤劳严谨，负责执掌修行房的事务。\n");
               
        set("gender","男性");
        set("class","taoist");
        set("combat_exp",700000);
        set("attitude","heroism");
		set("title","天道派修行长老");
        set("age",51);
        set("str", 60);
        set("cor", 29);
        set("cps", 28);
        set("per", 24);
        set("spi", 25);
        set("int", 26);
	set("kar", 30);
        set("force", 3000);
        set("max_force", 3000);
        set("max_mana",2000);
        set("mana",2000);
        set("max_atman",2000);
        set("atman",2000);
	set("max_kee",1500);
	set("kee",1500);
	set_skill("magic",80);
	set_skill("gmagic",90);
	map_skill("magic","gmagic");
	set_skill("spells",80);
        set_skill("necromancy",90);
	map_skill("spells","necromancy");
        set_skill("force",100);
        set_skill("gforce",100);
        map_skill("force","gforce");
        set_skill("dodge",60);
        set_skill("g-steps", 60);
        map_skill("dodge","g-steps");
        set_skill("parry",60);
        set_skill("whip",100);
        set_skill("gwhip",100);
        map_skill("whip","gwhip");
        map_skill("parry","gwhip");
	set("force_factor", 10);
	set("chat_chance_combat",50);
	set("chat_msg_combat",({
	(:magic1:),
	}));

        setup();
        carry_object("/open/tendo/obj/chain")->wield();
	add_money("silver",30);
       
}

string magic1()
{
 command("conjure fly");
 command("conjure hardshell");
 return "\n";
}
