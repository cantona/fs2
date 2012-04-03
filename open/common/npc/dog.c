// dog.c by babe

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
        set_name( "野狗", ({ "dog" }) );
        set("race", "野兽" );
        set("age", 3 );
        set("long", "一只浑身脏兮兮的野狗。\n");

        set("str", 24 );
        set("cor", 26 );

        set("limbs", ({ "头部", "身体", "前脚", "后脚", "尾巴" }) );
        set("verbs", ({ "bite", "claw" }) );

        set_temp( "apply/attack", 3 );
        set_temp( "armor", 50 );
        set( "combat_exp", 240 );
	set( "chat_chance", 10 );
        setup();
        carry_object(CENTER_OBJ"bonze");
}


accept_fight(object ob)
{
ob->apply_condition("lyssa",3);

return 1;
}
void init()
{
        if( !query_heart_beat( this_object() ) )
                set_heart_beat(1);
        ::init();
}

void heart_beat()
{
        int i;
        object me, *inv;

        me = this_object();

        if( random(100)<40 ) {
                inv = all_inventory(environment(me));
                
		switch( random(4) ) {
		case  0 :
			command( "bite " + inv[random(sizeof(inv))]->query("id") );
			break;
		case  1 :
			command( "dog" );
			break;
		default :
			message_vision( HIR"$N流着口水, 嗤牙咧嘴的, 显然是狂犬病发作了。\n"NOR, me );
		}

		for( i=0; i<sizeof(inv); i++ )
			if( inv[i]!=me && inv[i]->query("id")!="dog" && !inv[i]->query_condition("lyssa") && living(inv[i]) && userp(inv[i]) )
				if( random(sizeof(inv))==1 )
					if( wizardp(inv[i]) || inv[i]->query( "no_lyssa", 1 ) ) {
						message_vision( HIR"$N狠狠地咬了$n一口!\n"NOR
								   "$n惊道: 糟了, 是狂犬病!\n"
								CYN"$n赶紧运起天邪神功, 体内不断冒出阵阵黑气。\n"NOR, me, inv[i] );
						if( inv[i]->query("force") >= 100 )
							inv[i]->add( "force", -100 );
						else
							inv[i]->set( "force",    0 );
						tell_object( inv[i], "你成功地逼出狂犬病之病毒。\n" );
					}
					else {
						message_vision( HIR"$N狠狠地咬了$n一口, $n被传染了狂犬病。\n"NOR, me, inv[i] );
						inv[i]->apply_condition( "lyssa", me->query("age") );
					}       	
        }
        ::heart_beat();
}

//add by poloer...嘿嘿
void die()
{
object me = this_object();
object winner = query_temp("last_damage_from");
message_vision(HIR"$N临死前,狠狠的咬了$n一口,$n被传染狂犬病了.\n"NOR,me,winner);
winner->apply_condition("lyssa",winner->query("age"));
::die();
}

