#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void do_heal();
void create()
{
        set_name("邯涛", ({ "han toung", "han" }) );
        set("long","他双眼精光四射 一副就是内功剑法均达化境的高手 ,瞧他只是默默
        的站在那里 ,似乎守护者相当重要的东西。\n");
        set("gender", "男性" );
        set("class","swordsman");
        set("nickname","仙剑第一剑士");
        set("age", 29);
        set("combat_exp",700000);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("family/master_name","郑士欣");
        set_skill("shasword",90);
       map_skill("sword","shasword");
        set_skill("shaforce",60);
        set_skill("sha-steps",60);
        set("max_force",1000);
	set("force",100);
        set("max_gin",100);
        set("force_factor",15);
        set("gin",100);
        set("max_kee",5000);
        set("kee",5000);
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        (: do_heal :)
        }));
        set("max_mana",100);
        set("mana",100);
        set_skill("force",40);
        set_skill("dodge",60);
        map_skill("dodge","sha-steps");
        set_skill("sword",60);
        map_skill("force","shaforce"); 
        set_skill("unarmed",90);
        setup();
        carry_object("/open/gsword/obj/heaven-sword.c")->wield();
        }
 
  void do_heal()
  {
    message_vision("邯涛一股不认输的精神 ,使的他似乎更有活力了\n",this_object());
     this_object()->add("kee",200);
   }
   
