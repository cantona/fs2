#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("段家第十一代弟子",({"trainee"}));
         set("long","这是一名精壮的汉子, 正在和同伴练习六脉神剑的功夫。\n");
        set("gender","男性");
        set("class","scholar");
        set("combat_exp", 50000);
        set("attitude","peaceful");
        set("age",23);
        set("force",300);
        set("max_force",300);
        set_skill("force",30);
        set_skill("unarmed",40);
        set_skill("sunforce",30);
        set_skill("linpo-steps",40);
        set_skill("six-fingers",40);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        map_skill("parry","six-fingers");
        set_temp("apply/dodge",30);
        setup();
        add_money("silver",20);
}



int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"系统：战斗停止，$N回收中，。\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}

void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\n系统：由于你没携带晶片，所以无法记录战绩。\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\n系统：由于你没有正式登记，资料无法传输。\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 10)
       {
        tell_object(me,HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第九层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第十层试炼□塔"HIG"’"HIW"。
	"NOR);
	me->set("quest/start_game",10);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}