#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name(YEL"二十五铜人"NOR,({"twenty-five master","master"}));
        set("long", @LONG
这里共有二十五尊铜人立足，每一尊的表情，姿态皆不
相同，更奇怪的是每尊铜人的背后，都写了一行诗句，
难道这便是魔教鞭法的奥义吗？若想学习奥义，请使用
(learn)指令。

LONG);

        set("gender","男性");
        set("guild_master",1);
        set("class","poisoner");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",800);
        set_skill("forever-love",100);
       setup();
}


