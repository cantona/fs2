// ~babe~(Сѩ��)^O^

#include <room.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set( "short", HIW"��"HIY"����"HIW"����"HIC"���۹㳡"HIW"��"NOR );
  set( "long", "
    ���СС��Բ�ι㳡�ǿ���ռ�����㷢���Ƕ԰��ɿ����ĵط����ڹ�
����Ʈ����һ��"HIC"�������"NOR"("HIC"Mysterious crystal"NOR")�����ҫ�۵ı������ֳ���
����ҵ����ۣ����а����ܹ�[babe]����������Ϣ���ڹ㳡���뻹��һ��С
С�ķ���̨�����κ�����������Ե��Ϸ���̨�ݽ���babe������ҷ��Ե�Ȩ
�����൱�����ģ��㲻�õ����Լ������ۻ������鷳�����ڹ㳡���Աߣ���
�Ƿ�����һ��"HIW"���ʯ"NOR"("HIW"��iamond"NOR")��ɵİ������ϺͰ����ɷ����µȵ��ļ���
"HIG"
	c_cmds		����ָ�
	c_index		�����ļ�����
	c_list		��������
"HIM"
	http://www.digi-age.com.tw/frm_mb1.asp?id=2987"NOR"
	��ӭ�Դ����������λ��Ԫ, һ���ۻ�����׬Ǯ������... :)
");

  set("item_desc", ([ /* sizeof() == 2 */
  "diamond" : "

	c_cmds		����ָ�
	c_index		�����ļ�����
	c_list		��������

						by ACKY 03/09/00
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "down" : "/open/common/room/inn",
]));
	set("no_lyssa",1);
	set("no_kill", 1);
	set("no_fight", 1);
	set("objects", ([ /* sizeof() == 1 */
		"/u/a/acky/npc/babe"  : 1,
]));
	setup();
	call_other("/obj/board/clan_b","???");
}

