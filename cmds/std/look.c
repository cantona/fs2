// look.c

#include <room.h>
#include <ansi.h>

inherit F_CLEAN_UP;
inherit SECURITY_D;

#define EXIT ({ "north", "south", "east", "west", "up", "down", "enter", "out",	"northeast", "northwest", "southeast", "southwest" })
int look_room( object me, object env, int light );
int look_item( object me, object obj );
int look_living( object me, object obj );
int look_room_item( object me, string arg );
string fuzzy_long( string long );

void create() { seteuid(getuid()); }

int main( object me, string arg )
{
	object	obj, env;
	int	result, can_see;

	can_see = NATURE_D->vision(me);
	env = environment(me);

	if( arg )
		arg = lower_case(arg);
	if( arg && member_array( arg, EXIT ) != -1 &&
		member_array( geteuid(me), EXIT ) != -1 )
		return look_room_item( me, arg );
	if( !arg )
		result = look_room( me, env, can_see );
	else if( (obj = present( arg, me) ) || ( obj = present( arg, environment(me) ) ) ) {
		if( obj->is_character() )
			result = look_living(me, obj);
		else
			result = look_item( me, obj );
	}
	else
		result = look_room_item(me, arg);
	return result;
}

int look_room( object me, object env, int light )
{
	int           i;
	object        *inv;
	mapping       exits;
	string        str, *dirs, tmp;

	if( light == 0 )
		return notify_fail( "四周到处黑沉沉的, 看也看不清。\n" );
	if( me->query_temp("brief_mode") )
		str = sprintf( "%s - %s%s\n",
			env->short(),
			env->query("owner")? "("+capitalize(env->query("owner"))+")" : "",
			wizardp(me)? file_name(env) : ""
			);
	else {
		tmp = env->query("long");
		str = sprintf( "%s - %s%s\n    %s%s",
			env->short(),
			env->query("owner")? "("+capitalize(env->query("owner"))+")" : "",
			wizardp(me)? file_name(env) : "",
#ifdef FUZZY_LOOK
			(light==-1) ? fuzzy_long(tmp) : tmp,
#else
			tmp,
#endif
			env->query("outdoors") ? NATURE_D->outdoor_room_description() : ""
			);
	}

#ifdef LIGHT
	if( light == -1 )
		str += "    四周到处模模糊糊的, 看也看不清出口。\n";
	else
#endif
	if( mapp(exits = env->query("exits")) ) {
		dirs = keys(exits);
		for(i=0; i<sizeof(dirs); i++)
			if( (int)env->query_door(dirs[i], "status") != 0 )
				dirs[i] = 0;
		dirs -= ({ 0 });
		if( sizeof(dirs)==0 )
			str += "    这里没有任何明显的出路。\n";
		else if( sizeof(dirs)==1 )
			str += "    这里唯一的出口是 " + BOLD + dirs[0] + NOR + "。\n";
		else
			str += sprintf("    这里明显的出口是 " + BOLD + "%s" + NOR +
				" 和 " + BOLD + "%s" + NOR + "。\n",
		implode( dirs[0..sizeof(dirs)-2], "、" ), dirs[sizeof(dirs)-1] );
	}
	tmp = env->door_description();
	if (tmp)
		str += env->door_description();
	inv = all_inventory(env);
	for(i=0; i<sizeof(inv); i++) {
		if( (string)inv[i]->query("env/invis")=="YES" && wiz_level(inv[i]) > wiz_level(me) )
			continue;
       if( (string)inv[i]->query("env/隐身")=="YES" && wiz_level(inv[i]) > wiz_level(me) )
            continue;
		if( inv[i]->query_temp("invis") && !wizardp(me) )
			continue;
		if( inv[i]==me )
			continue;
		if( light==-1 ) {
			if( random(2) )
				str += "  " + inv[i]->short() + "\n";
		}
		else
			str += "  " + CON_D->con_query(inv[i]) + inv[i]->short() + "\n";
	}
	tell_object( me, trans_color(str) );
	return 1;
}

int look_item(object me, object obj)
{
  string        msg;
  mixed         *inv;

  msg = obj->long();

  inv = all_inventory(obj);
  if( sizeof(inv) ) {
    inv = map_array(inv, "inventory_look", this_object() );
    msg += sprintf("里面有：\n  %s\n", implode(inv, "\n  "));
  }

  me->start_more(msg);
  return 1;
}

int look_living(object me, object obj)
{
  string str, limb_status, pro, couples;
  mixed *inv;
  mapping my_fam, fam;

  if( !wizardp(me) && obj->query_temp("invis") ) return 0;
  if( me!=obj )
    message("vision", me->name() + "正盯着你看，不知道打些什么主意。\n", obj);

  if(!stringp(str=obj->query("describe")))
        str="";

  str += obj->long();

  pro = (obj==me)?gender_self(obj->query("gender")):gender_pronoun(obj->query("gender"));

  if ( (string)obj->query("race")=="人类" && intp(obj->query("age")) )
    str += sprintf("%s看起来约%s多岁。",
                   pro, chinese_number(obj->query("age") / 10 * 10));
  couples = obj->query("couples/name");
  if (couples) str += "配偶是"+couples;
  str += "\n";

  // If we both has family, check if we have any relations.
  if( obj!=me &&
      mapp(fam = obj->query("family")) &&
      mapp(my_fam = me->query("family"))  &&
      fam["family_name"] == my_fam["family_name"] )
  {
    if( fam["generation"]==my_fam["generation"] ) {
      if( (string)obj->query("gender") == "男性" )
        str += sprintf( pro + "是你的%s%s。\n",
               my_fam["master_id"] == fam["master_id"] ? "": "同门",
               my_fam["enter_time"]>fam["enter_time"]? "师兄":"师弟");
      else
        str += sprintf( pro + "是你的%s%s。\n",
               my_fam["master_id"] == fam["master_id"] ? "": "同门",
               my_fam["enter_time"] > fam["enter_time"] ? "师姐": "师妹");
    }
    else if ( fam["generation"] < my_fam["generation"] ) {
      if( my_fam["master_id"] == obj->query("id") )
        str += pro + "是你的师父。\n";
      else if( my_fam["generation"] - fam["generation"] > 1 )
        str += pro + "是你的同门长辈。\n";
      else if( fam["enter_time"] < my_fam["enter_time"] )
        str += pro + "是你的师伯。\n";
      else
        str += pro + "是你的师叔。\n";
    }
    else {
      if( fam["generation"] - my_fam["generation"] > 1 )
        str += pro + "是你的同门晚辈。\n";
      else if( fam["master_id"] == me->query("id") )
        str += pro + "是你的弟子。\n";
      else
        str += pro + "是你的师侄。\n";
    }
  }

  if( obj->query("max_kee") )
    str += pro + COMBAT_D->eff_status_msg((int)obj->query("kee") * 100 / (int)obj->query("max_kee")) + "\n";

  inv = all_inventory(obj);
  if( sizeof(inv) ) {
    inv = map_array(inv, "inventory_look", this_object(), obj->is_corpse()? 0 : 1 );
    inv -= ({ 0 });
    if( sizeof(inv) )
      str += sprintf( obj->is_corpse() ? "%s的遗物有：\n%s\n" : "%s身上带着：\n%s\n",
              pro, implode(inv, "\n") );
  }

  // message("vision", str, me);
  me->start_more(str);

  if( obj!=me &&
      living(obj) &&
      random((int)obj->query("bellicosity")/15) > (int)me->query("per") )
  {
    write( obj->name() + "突然转过头来瞪你一眼。\n");
    COMBAT_D->auto_fight(obj, me, "berserk");
  }

  return 1;
}

string inventory_look(object obj, int flag)
{
  string str;

  str = obj->short();
  if( obj->query("equipped") )
    str = HIC "  ˇ" NOR + str;
  else if( !flag )
    str = "    " + str;
  else
    return 0;

  return str;
}

int look_room_item(object me, string arg)
{
  object env;
  mapping item, exits;
  string temp;


  env = environment(me);
  if ( mapp(item = env->query("item_desc")) && !undefinedp(item[arg]) ) {
    if( stringp(item[arg]) )
      write(trans_color(item[arg]));
    else if( functionp(item[arg]) )
      write(trans_color((string)(*item[arg])(me)));

    return 1;
  }

  if( mapp(exits = env->query("exits")) && !undefinedp(exits[arg]) ) {
    if(!sscanf(exits[arg],"%s.c",temp)) exits[arg]+=".c";
    if( objectp(env = find_object(exits[arg])) )
      look_room(me, env, 1);
    else {
      if(file_size(exits[arg])>0){
      call_other(exits[arg], "???");
      look_room(me, find_object(exits[arg]), 1);
      }
    }
    return 1;
  }
  return notify_fail("你要看什么？\n");
}

#ifdef FUZZY_LOOK
string fuzzy_long (string long)
{
  int           i, ln;

  ln = sizeof (long);
  for (i=0; i<ln-1; i++) {
    if (random(2)) {
      if (long[i] > 126) i++;
    }
    else if (!(long[i] > 0 && long[i] < ' ')) {
      if (!(long[i] > 32 && long[i] <127)) {
        long[i] = '.';
        long[i+1] = '.'; i++;
      }
      else
        long[i] = '.';
    }
  }
  return long;
}
#endif

int help (object me)
{
        write(@HELP
指令格式 : look [<物品>|<生物>|<方向>]
指令说明 :
           这个指令让你查看你所在的环境、
           某件物品、生物、或是方向。
HELP );
        return 1;
}
