#include <ansi.h>
void get_dumpling(object me);
int do_command(object me,object ob,string arg)
{
	int i,mud_age,off_time,power;
	mud_age = me->query("mud_age");
	off_time = me->query_temp("officer_time");
        if( mud_age > off_time+300 )
        {
          object pill;
          string str;
          me->set_temp("officer_time",mud_age);
          power = me->query("max_officer_power");
          if(ob->query("officer_type")!="food")
          {
             tell_object(me,"他不是伙食官。\n");
             return 1;
          }
          if( power <100)
          {
            i=2;
          }else if( power < 500)
          {
            i =3;
          }else{
            i=4;
          }
          switch( random(i) )
          {
          case 0:
            str="/open/common/obj/pill";
            break;
          case 1:
            str="/open/gsword/obj/g_pill";   
            break; 
          case 2:
            str="/open/gsword/obj/ff_pill";
            break;
          case 3:
            str="/daemon/class/doctor/medicine/curesick";
          }
          pill=new(str);
          pill->move(me);
          pill->add_amount( (5-i)*5 );
	message_vision(
	CYN "$N说道：我需要补给，马上给我准备。\n" NOR,me);
	message_vision(
	    "$N说道：大人这是您要的补给。\n$N拿了些补给给$n。\n",ob,me);
	for(i=0;i<5;i++)
		get_dumpling(me);
	return 1;
      }
      message_vision("$N说道：对不起,大人,尚未到发饷时刻.\n",ob);
      return 1;
}
void get_dumpling(object me)
{
	object obj;
	seteuid(getuid());
	obj=new("/obj/example/dumpling");
	obj->move(me);
}
