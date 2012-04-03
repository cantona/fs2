// trap1.c by babe

#include <ansi.h>
inherit ITEM;

void create()
{
	seteuid(getuid());
	set_name( HIG"毒蒺菱"NOR, ({ "" }) );
	set( "no_get", 1 );
	set( "no_sac", 1 );
	set( "unit", "组" );
	set_temp( "invis", 1 );
}

void init()
{
	int i, n;
	object me;
	mixed inv;
	string type;

	me = this_player();
	if( wizardp(me) || me->query("age")<18 || !query("setup") )
		return;
	set( "setup", 0 );
	inv = all_inventory(environment());
	if(random(2))
		message_vision( YEL"$N触动了" + query("maker") + YEL"所装设的机关。\n"NOR, me );
	for( i=0, n=sizeof(inv); i<n ; i++ ) {
		if( !userp(inv[i]) || wizardp(inv[i]) || inv[i]->query("age")<18 )
			continue;
		if( random(1000) > inv[i]->query_skill("parry") + inv[i]->query_skill("dodge") ) {
			message_vision( HIG"「嗤~嗤~”声响处, 几枚毒蒺菱快速射出, $N闪躲不及, 被毒蒺菱击中!\n"NOR, inv[i] );
			switch(random(17)) {
				case  1: type = "ashura_sex"; break;
				case  2: type = "blood"; break;
				case  3: type = "dark_poison"; break;
				case  4: type = "drunk"; break;
				case  5: type = "evil_poison"; break;
				case  6: type = "faint_poison"; break;
				case  7: type = "fire_poison"; break;
				case  8: type = "five_poison"; break;
				case  9: type = "flower_poison"; break;
				case 10: type = "fog-poison"; break;
				case 11: type = "lyssa"; break;
				case 12: type = "mess"; break;
				case 13: type = "rose_poison"; break;
				case 14: type = "sex_poison"; break;
				case 15: type = "snake_poison"; break;
				case 16: type = "spring"; break;
				default: type = "super_snake_poison";
			}
			inv[i]->apply_condition( type, random(20) );
		}
		else
			message_vision( GRN"「嗤~嗤~”声响处, 几枚毒蒺菱快速射出, $N头也不回地随手击落射来的暗器。\n"NOR, inv[i] );
	}
	call_out( "dest", 3 );
}

void dest()
{
	destruct(this_object());
}
