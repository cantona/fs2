// guard.c

#include <ansi.h>

inherit NPC;
void create()
{
        set_name("左侍卫",({ "left guard","guard" }) );
	set("gender", "男性" );
        set("age", 45);
        set("str", 40);
        set("cor", 60);
	set("cps", 25);
	set("int", 15);
	set("long","将军府的左侍卫,他正在值勤中.\n");
	set("inquiry",([
	    "搜索令" : "一张五百\n",
	    "薪水" : "将军给的太少了,跟本不够花.\n",
	    "靠官" : "就是有要用到官府的地方...\n",
	    ]));
	set("chat_chance", 10);
	set("chat_msg", ({
	    "左侍卫 说: 面粉涨了,房租涨了,只有(薪水)老不涨.\n",
	    "左侍卫 说: 你在蜀中有要(靠官),找我就对了.\n",
	    }));   
        set("combat_exp", 6000);
	set("attitude", "peaceful");
        set("max_force", 350);
        set("force_factor", 10);
        set("force", 350);
        set_skill("unarmed", 40);
	set_skill("parry", 40);
	set_skill("dodge", 40);
        set_skill("snow-martial", 24);
        map_skill("dodge","snow-martial");
        map_skill("unarmed","snow-martial");
	setup();
	add_money("silver",20);
        carry_object("/open/gsword/obj/ring")->wear();
        carry_object("/open/gsword/obj/robe_3")->wear();
        carry_object("/open/gsword/obj/legging")->wear();
         	
}
int accept_object(object me,object ob)
{
    if( ob->value() < 500 )
    {
      say("左侍卫 说:搜索令一张 500...不二价,童叟无欺...\n");
      return 1;
    }
    new("/open/gsword/obj/su_note")->move(me);
    say("左侍卫给你一张搜索令.\n");
    return 1;
}
      
