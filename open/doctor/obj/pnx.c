// fire phoenix---made by nike

#include <ansi.h>
inherit NPC;

mapping *action = ({
    ([
	"action" :  "$N"HIR"鼓动起一双巨大的翅膀，振翅向$n扑去，其所挟带的狂风，拍打得$n是头晕又目眩！"NOR,
	"dodge"      :  -35,
	"parry"      :  -40,
	"damage"     :  350,
	"damage_type":  "拍伤",
    ]),
    ([
	"action" :  "$N"HIR"舞起两只有力的爪子，狠狠的朝$n抓去，$n闪避不及，背上留下了六条明显的血痕！"NOR,
	"dodge"      :  -35,
	"parry"      :  -40,
	"damage"     :  370,
	"damage_type":  "抓伤",
    ]),
    ([
	"action" :  "$N"HIR"突然昂首一鸣，声毕，便挺起尖喙往$n的身上猛啄，$n无法躲避，被啄的哀嚎大起！"NOR,
	"dodge"      :  -35,
	"parry"      :  -40,
	"damage"     :  400,
	"damage_type":  "啄伤",
    ]),
    ([	"action" :  "$N"HIR"抖动全身之羽毛，并试着以自己灼热的身体冲撞$n，使得$n的身体受到了严重的灼伤！"NOR,
	"dodge"      :  -35,
	"parry"      :  -40,
	"damage"     :  430,
	"damage_type":  "灼伤",
    ]),
    ([
	"action" :  "$N"HIR"猛的跳起，用尾巴使劲甩向$n的头部，$n一时闪神，被打了个正着，使得面颊发肿！"NOR,
	"dodge"      :  -35,
	"parry"      :  -40,
	"damage"     :  450,
	"damage_type":  "打伤",
    ]),
});

void create()
{
    set_name(HIR"赤羽火凤"NOR, ({"fire phoenix","phoenix","pnx"}) );
    set("race", "野兽");
    set("title",HIY"泷山镇派圣兽"NOR);
    set("long", "一只羽毛非常美丽的火凤凰，是泷山派的
镇派圣兽，你可以尝试拔(pluck)牠的羽毛(feather)！\n");
     set_temp("apply/attack",550);
     set_temp("apply/damage",550);
     set_temp("apply/move",550);
    set("limbs", ({ "凤喙","凤爪","凤身","凤翅","凤尾" }) );
    set("age", 500);
    set("combat_exp", 5000000);
    set("max_kee", 30000);
    set("kee", 30000);
    set("max_gin", 30000);
    set("gin", 30000);
    set("max_sen", 30000);
    set("sen", 30000);
    set("attitude", "peaceful");
    set_skill("parry", 500);
    set_skill("unarmed", 500);
    set_skill("dodge", 500);
    set_skill("move", 500);
    set("chat_chance", 4);
    set("chat_msg", ({
         "咕～咕～嘓～嘓～咕～咕～嘓～～～\n",
    }));
    setup();
    set("default_actions", (: call_other, __FILE__,"query_action" :));
    reset_action();
    set_heart_beat(1);
}
mapping query_action()
{
    return action[random(sizeof(action))];
}
void heart_beat()
{
    mixed all;
    object me, ob;
    int i;
    ob = this_object();
    all = all_inventory(environment(ob));

    if(random(100) < 40 && ob->is_fighting())
{
	message_vision("$N"HIR"突然像发疯似的开始张口狂吐火焰～～～\n\n"NOR, ob);
	for( i = 0 ; i < sizeof(all) ; i++)
{
	me = all[i];
    if(me->is_character()
    && living(me)
    && me->query("id") != "fire phoenix")
{
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-20);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-40);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-60);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-80);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-100);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-120);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-140);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-160);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-180);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-200);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-150);
	me->add("gin",-300);
	me->add("sen",-300);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-200);
	me->add("gin",-400);
	me->add("sen",-400);
	me->add("force",-500);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("$N"HIR"惨遭$n"HIR"所吐出的火球轰中，身上皮肤呈现焦黑一片，使$N"HIR"感到痛苦不已...\n"NOR, me, ob);
	me->add("kee",-250);
	me->add("gin",-500);
	me->add("sen",-500);
	me->add("force",-1000);
	me->apply_condition("burn", random(15)+3);
	COMBAT_D->report_status(me);
	message_vision("\n$N"HIB"口中所吐出的火焰慢慢的消失，对$n的攻击也渐渐的平静了下来...\n\n"NOR, ob, me);
	ob->start_busy(1);
      }
    }
  }
	::heart_beat();
}
void init()
{
    add_action("do_pluck","pluck");
    add_action("do_kill","kill");
    add_action("do_kill","fight");
}
int do_pluck(string arg)
{
    object me, ob, fea, pnx;
    int kar, spi;

    me = this_player();
    ob = this_object();
    kar = me->query("kar")*2;
    spi = me->query("spi")*2;
    spi = kar+spi;
    if(spi >= 80)
    spi = 80;

    if(!arg || arg != "feather") return 0;
    if(me->query("doctor/get_key",1))
{
    if(me->query("doctor/get_fea",1))
{
	message_vision(RED"$N贪心的想再拔第二次...不料却被"HIR"赤羽火凤"NOR+RED"给发觉......\n"NOR, me);
	ob->kill_ob(me);
	return 1;
}
    if(random(100) > spi)
{
	message_vision(RED"$N偷偷的靠近"HIR"赤羽火凤"NOR+RED"......\n"NOR, me);
	message_vision(HIB"$N成功的将"HIR"赤羽火凤"NOR+HIB"的尾羽给拔到手了！\n"NOR, me);
	me->delete("doctor/get_key");
	me->set("doctor/get_fea",1);
	fea = new("/open/doctor/obj/feather");
	fea->move(me);
	return 1;
}else{
	message_vision(RED"$N偷偷的靠近"HIR"赤羽火凤"NOR+RED"......\n"NOR, me);
	message_vision(MAG"$N的动作太大，竟然被"HIR"赤羽火凤"NOR+MAG"给发觉了！\n"NOR, me);
	ob->kill_ob(me);
	return 1;
    }
  }
}
int do_kill(string arg, object me)
{
    if(arg == "fire phoenix" || arg == "phoenix" || arg == "pnx")
{
	message_vision(RED"$N这个笨蛋想吵醒牠吗？\n"NOR, me);
	return 1;
  }
}