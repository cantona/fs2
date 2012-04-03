
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIR"红色陆行鸟"NOR,
        ({"red land of bird","red","land","bird",}));
        set("mount_id","red-Lbird");
        set("age",12);
        set("race","野兽");
        set("score",1000000);
        set("gender","女性");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIR"$n"HIR"的红色陆行鸟佯装要逃走"RED"，"HIR"趁$N"HIR"不注意的"RED"，"
HIR"一个瞬间$n"HIR"已躲过$N"HIR"的攻击"RED"。\n"NOR,
HIR"$n"HIR"往上一跳"RED"，"HIR"在此瞬间红色陆行鸟往前冲"RED"，"HIR"攻其不意"
RED"。\n"NOR,
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
