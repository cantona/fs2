inherit NPC;
#include <ansi.h>
string answer_mo();
void create()
{
	set_name("曲洋", ({ "chu young" , "young" }) );
	set("race", "人类");
	set("title","仙剑派长老");
	set("inquiry",([
	"绿毛":(: answer_mo :)
	]));
	set("age", 56);
	set("gander","男性");
	set("long", "他在仙剑派主要是执掌弟子们的功过奖逞 ,有功于仙剑派者
经他提报给掌门--郑士欣--之后 ,得以提升其在门派中的地位 .\n");                                                                                                                                                                                                          
	set("str", 35);
        set("con",35);
        set("max_force",500);
        set("force",500);
	set("combat_exp", 30000);
	set_skill("dodge",35);
        set_skill("sha-steps",50);
	set_skill("shasword",40);
	map_skill("dodge","sha-steps");
	map_skill("parry","shasword");
	map_skill("sword","shasword");
	set("force_factor",5);
	setup();
        carry_object("/open/gsword/obj/sword-1")->wield();
        carry_object("/open/gsword/obj/robe_3")->wear();               
}

 string answer_mo()
 {
 int mo;
 mo=this_player()->query("bounds",1);
   return sprintf("阁下身上一共%d根绿毛 ,再加油吧!/n",mo);
  }
                 
