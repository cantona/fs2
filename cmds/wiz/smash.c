// smash.c 2-22-95

inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
	object ob;
	string name1, name2;

	if (!arg) return notify_fail("ָ���ʽ: smash <living>\n");
	ob = present(arg, environment(me));
	if (!ob) return notify_fail("�Ҳ����������.\n");
	name1 = (string)me->query("name");
	name2 = (string)ob->query("name");
	tell_room(environment(me),
	name1+"�߾�˫�ִ�� ȥ����!, ֻ������һ�����粻ƫ���еػ���"+name2+", ��֮��Ϊһ�ѻҽ�.\n", 
	({me, ob}));
	tell_object(ob, name1+"�߾�˫�ִ�� ȥ����!, ֻ������һ�����粻ƫ���еػ�����.\n");
	
	write("��߾�˫�ִ�� ȥ����! �����Ͻ���һ�����罫"+name2+"����һ�ѻҽ�.\n");
	write("������������... ��ˬ!\n");
ob->set_temp("last_damage_from", ob);
	ob -> die();
	return 1;
}
 
int help(object me)
{
   write(@HELP
ָ���ʽ: smash <����>
 
hehehehehe...........

HELP
   );
   return 1;
}