#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string poison();
void create()
{
        set_name("庄静柔",({"master low","low"}));
        set("long","她就是武林中令人闻风丧胆的冥蛊魔教教主「庄静柔”，别看她一张秀丽的脸蛋，其为人可是十分阴毒。\n");
        set("gender","女性");
	set("title",HIW"～幻影～"NOR);
        set("class","poisoner");
        set("nickname", HIR "九阴仙子" NOR);
        set("combat_exp",5000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 48);
        set("force",10000);
        set("max_kee",5000);
        set("kee", 5000);
        set("bellicosity",1500);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
         (: poison :),
         (: perform_action("poison.five") :),
         (: perform_action("poison.firefinger") :),
        }));
        set("functions/firefinger/level",100);
     set("functions/five/level",100);
        set_skill("literate",30);
        set("max_force",10000);
        set_skill("move",120);
        set_skill("force",60);
        set_skill("dodge",120);
        set_skill("parry",50);
        set_skill("poison",120);
        set_skill("whip",100);
        set_skill("poisonforce",100);
        map_skill("force","poisonforce");
        set("force_factor",20);
        set_skill("coldpoison",100);
        set_skill("nine-steps",120);
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("poison","coldpoison");
        set_skill("ming-snake",100);
        map_skill("whip","ming-snake");
        setup();
        create_family("冥蛊魔教",3,"教主");
carry_object("open/poison/obj/circle.c")->wear();
carry_object(POISON_OBJ"bleed_whip")->wield();
carry_object("open/poison/obj/godcloth.c")->wear();
carry_object("open/poison/obj/cape.c")->wear();
carry_object("open/poison/obj/feather.c")->wear();
carry_object("/obj/poison/rose_poison")->set_amount(70);
carry_object("/obj/poison/five_poison")->set_amount(70);
carry_object("/obj/poison/dark_poison")->set_amount(70);
carry_object("/obj/poison/faint_poison")->set_amount(70);
}
string poison()
{
        command("perform poison.faint");
        return "\n";

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
if(me->query("quest/start_game")< 17)
       {
        message_vision(HIY"
恭喜"HIW+me->query("name")+HIY"挑战"HIG"‘"HIR"第十六层试炼□塔"HIG"’"HIY"通过！！

"HIW"希望"+me->query("name")+"能不负众望，勇闯"HIG"‘"HIY"第十七层试炼□塔"HIG"’"HIW"。
	"NOR,me);
	me->set("quest/start_game",17);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"系统：你已经通过测试，系统不做任何更改。\n"NOR);
	destruct(this_object());
}
}


