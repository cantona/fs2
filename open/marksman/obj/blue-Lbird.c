
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIB"蓝色陆行鸟"NOR,
        ({"blue land of bird","blue","land","bird",}));
        set("mount_id","blue-Lbird");
        set("age",12);
        set("race","野兽");
        set("score",1000000);
        set("gender","女性");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIB"$n"HIB"的蓝色陆行鸟佯装要逃走"BLU"，"HIB"趁$N"HIB"不注意的"BLU"，"
HIB"一个瞬间$n"HIB"已躲过$N"HIB"的攻击"BLU"。\n"NOR,
HIB"$n"HIB"往上一跳"BLU"，"HIB"在此瞬间蓝色陆行鸟往前冲"BLU"，"HIB"攻其不意"BLU"。\n"NOR,
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}
