
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIW"白色陆行鸟"NOR,({"white land of bird","white","land","bird",}));
        set("mount_id","white-Lbird");
        set("age",12);
        set("race","野兽");
        set("score",1000000);
        set("gender","女性");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIW"$n"HIW"的白色陆行鸟佯装要逃走"NOR"，"HIW"趁$N"HIW"不注意的"NOR"，"
HIW"一个瞬间$n"HIW"已躲过$N"HIW"的攻击"NOR"。\n",
HIW"$n"HIW"往上一跳"NOR"，"HIW"在此瞬间白色陆行鸟往前冲"NOR"，"HIW
"攻其不意"NOR"。\n",
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
