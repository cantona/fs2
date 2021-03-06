// dagger.c

inherit SKILL;

mapping *actions = ({
	([	"action":		"$N提起手中$w猛然往$n$l刺去",
		"damage_type":	"刺伤",
	]),
	([	"action":		"$N挥动$w，往$n$l划了过去",
		"damage_type":	"割伤",
	]),
	([	"action":		"$N紧握手中$w，对准$n$l刺了过去",
		"damage_type":	"刺伤",
	]),
	([	"action":		"$N挥动手中$w，削向$n$l",
		"damage_type":	"割伤",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof(actions))];
}


