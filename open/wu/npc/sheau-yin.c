#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
       set_name("任晓吟",({"sheauyin jen","sheauyin","jen"}));
       set("long","她是任正晴的女儿,任晓吟 , 年刚满二十,清丽脱俗,看起来聪明伶俐,
虽是女儿家, 但是精通礼义,家中就属她最聪明乖巧。\n");
       set("gender","女性");
       set("class","fighter");
       set("nickname","[1;33m任柔庭[0m");
       set("combat_exp",200000);
       set("attitude","heroism");
       set("age",20);
       set("title","泷山派第八代弟子");
       set("str",23);
       set("cor",20);
       set("cps",40);
       set("per",100);
       set("int",50);
       set("con",55);
       set("spi",70);
       set("kar",27);
       set("force",960);
       set("max_force",960);
       set("max_s_kee",1000);
       set("sec_kee","dragon");
       set("force_factor",20);
        set_skill("lungshan", 60);
        set_skill("dodge"   , 50);
        set_skill("haoforce", 60);
        set_skill("force"   , 70);
        set_skill("unarmed", 40);
        set_skill("parry", 30);
        set_skill("henma-steps",60);
        set_skill("fire-kee",50);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "fire-kee");
       setup();
       carry_object("/open/wu/npc/obj/goldfinger.c")->wield();
}
