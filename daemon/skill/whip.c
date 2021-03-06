// whip.c

inherit SKILL;

mapping *actions = ({
    ([  "action":		"$N挥动$w，往$n$l砸了过去",
        "damage_type":  "瘀伤",
	]),
     ([  "action":		"$N挥舞手中的$w，「呼”的一声往$n$l当头砸下",
        "damage_type":  "瘀伤",
	]),
    ([  "action":       "$N抡起手中$w，照准$w$l狠狠地挥将过去",
        "damage_type":  "瘀伤",
	]),
    ([  "action":       "$N「嘿”地一声，抄起手中$w对准$n$l奋力一击",
        "damage_type":  "瘀伤",
	]),
    ([  "action":      "$N将$w使发了性子，凭着一股蛮劲往$n$l扫了过去",
        "damage_type":  "瘀伤",
	]),
});

varargs mapping query_action()
{
   return actions[ random( sizeof( actions))];
}


