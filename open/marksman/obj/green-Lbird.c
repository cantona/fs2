
#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIG"��ɫ½����"NOR,({"green land of bird","green","land","bird",}));
        set("mount_id","green-Lbird");
        set("age",12);
        set("race","Ұ��");
        set("score",1000000);
        set("gender","Ů��");
        set("level",1);
        set("rider","Lbird");
        setup();
}
string *dodge_msg = ({
HIG"$n"HIG"����ɫ½������װҪ����"GRN"��"HIG"��$N"HIG"��ע���"GRN"��"
HIG"һ��˲��$n"HIG"�Ѷ��$N"HIG"�Ĺ���"GRN"��\n"NOR,
HIG"$n"HIG"����һ��"GRN"��"HIG"�ڴ�˲���ɫ½������ǰ��"GRN"��"HIG"���䲻��"GRN"��\n"NOR,
});
string query_dodge_msg()
{
        return dodge_msg[random(sizeof(dodge_msg))];
}