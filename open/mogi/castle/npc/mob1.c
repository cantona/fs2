//by roger
#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
        set("title","守殿小妖");
        set_name("鬼卜生死断",({"blood ghost","ghost"}));
        set("long",
            "\n它是妖魔古堡的守殿小妖,正因你的闯入愤怒不已。\n");

        set("age",2937);
        set("str",25);
        set("cor",25);
        set("race","野兽");
        set("gender","雄性");
        set("attitude","aggressive");
        set("max_gin",2000);
        set("max_kee",6100);
        set("max_sen",2000);
        set("max_force",4000);
        set("force",4000);
        set("force_factor",20);
        set("combat_exp",2100000);
        set_skill("unarmed",80);
        set_skill("dodge",90);
        set_skill("nine-steps",90);
        set_skill("move",60);
        set_skill("parry",80);
        set_skill("hell-evil", 80);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("limbs",({"头部","胸部","大黑手","大黑脚","背部","腰部"}));
        set("verbs",({"bite","claw"}));
        setup();
 }

void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) {
           remove_call_out("kill_him");
           call_out("kill_him",0,obj);
        }
 }

/*   此先暂时不用  int kill_him(object obj) {
//        if(obj->query("race") == "妖怪") return 1;
        if(obj->query("race") == "野兽") return 1;
        if(obj->query("max_force") > 999 ||
           obj->query("combat_exp") > 299999)
           command("kill "+obj->query("id"));
        return 1;
}*/
