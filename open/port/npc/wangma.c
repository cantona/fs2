//master_linr.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
string ask_moon();
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
object ob2;
void create()
{
            object ob;
            set_name("渔妇",({"woman"}) );
            set("long","一个外表看来普通的渔妇但又有种
            无法形容的气质。\n");
            set("gender","女性");
            set("class","dancer");
            set("combat_exp",30000);
            set("attitude","heroism");
            set("age",50);
            set("str", 30);
            set("cor", 30);
            set("cps", 25);
            set("per", 24);
            set("int", 20);
          set("kee",3000);
          set("max_kee",3000);
          set("gin",1600);
          set("max_gin",1600);
          set("atman",2000);
          set("max_atman",2000);
          set("mana",400);
          set("max_mana",400);
          set("force",2000);
          set("max_force",2000);
            set_skill("array",50);
            set_skill("parry",40);
            set_skill("spells",30);
            set_skill("magic",80);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",75);
            set_skill("dodge",75);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",70);
            set_skill("dremagic",65);
            set_skill("dreamforce",70);
            set_skill("dreamdance",70);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
		set("get_dan_sp",1);
		set("/spells/reflection/level",60);
		set("/spells/confuse/level",70);
        set("/spells/thunder/level",60);
        set("/spells/firedance/level",60);
        set("/spells/dreamwings/level",1);
		
        set("force_factor",20);
        setup();
//      ob->set_amount(50);
        set("inquiry", ([
			"水灵儿"  :  (: ask_moon :),
        ]));
        set("chat_chance_combat",60);
        
}

string ask_moon()
{
    if(!this_player()->query_temp("ask_moon1"))
	return "嗯....这我可不清楚，你最好问问别人吧。";
	command("say 是水灵儿要你来找我的 ?");
	command("sigh");
	this_player()->set_temp("ask_moon2",1);
	return "好吧!我只能跟你说这其实是上代宫主和当今圣上所引起的!!";
}
