// tune.c

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string *tuned_ch;

	tuned_ch = me->query_temp("channels");
	if( !arg ) {
		if( !pointerp(tuned_ch) || !sizeof(tuned_ch) )
			write("�����ڲ�û�������κ�Ƶ����\n");
		else
			write("������������Ƶ����" + implode(tuned_ch, ", ") + "��\n");
		return 1;
	}

	if( pointerp(tuned_ch) && member_array(arg, tuned_ch)!=-1 ) {
		write("�ر� " + arg + " Ƶ����\n");
		tuned_ch -= ({ arg });
		me->set_temp("channels", tuned_ch);
		return 1;
	} else {
		write("Ҫ��ĳ��Ƶ��ֻҪ�ø�Ƶ��˵�����ɡ�\n");
		return 1;
	}
}

int help(object me)
{
	write(@HELP
ָ���ʽ : tune [<Ƶ������>]
ָ��˵�� :
           ���ָ������ѡ���Ƿ�Ҫ����ĳһƵ����ѶϢ�����
         û��ָ��Ƶ�����ƣ��ͻ��г���Ŀǰ�����е�Ƶ������
         ��ָ����Ƶ����ԭ�������еľͻ�ص�����֮�򿪡�
           ������һ��û�������е�Ƶ�����������Զ�������
         ����
           ������� help channels  ��ѯĿǰ����ЩƵ������
         ������Ҫ��һ��Ƶ��������ֻҪ�ã�

           <Ƶ������> <ѶϢ> ....

ʹ�÷��� :
           chat hello everyone!
  

�����ο� : 
           help channels
HELP
	);
	return 1;
}
