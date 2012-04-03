//������
// by airke

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "������β-"HIG"����"NOR);
	set("long", @LONG
�����������ƣ�һƬ��ãã�ľ�ɫ����ȫ�޷���������ܵľ���ƺ�������
��������ڴˣ���ֹ�������⾭�����Ա߻���һ����ֵ�ʯͷ(stone)��

LONG
	);
	set("item_desc", ([ /* sizeof() == 1 */
	"stone" : "�������:       \n"+
		  "\n��������ߣ�����(touch)ʯ������\n\n",
	]));
	set("exits", ([ /* sizeof() == 3 */
]));
	
	set("light_up",1);
	setup();
}

void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
      remove_call_out("greeting");
	call_out("greeting", 0, ob);
   }

	add_action("do_touch","touch");
}

int do_touch()
{
  object who=this_player();
  
  who->move(__DIR__"c0");
  tell_room(this_object(),who->query("name")+"����һ����ʧ�����ˡ�\n");
  return 1;
}

int greeting (object who)
{
  object room=this_object();
  object mob;
  int i;
  int edir=1+random(2);
  int wdir=1+random(2);
  int ndir=1+random(2);
//  int sdir=1+random(2);

  if(wdir!=2&&edir!=2&&ndir!=2)
    edir=2;

  room->set("exits/west",__DIR__"d"+wdir);
  room->set("exits/east",__DIR__"d"+edir);
  room->set("exits/north",__DIR__"d"+ndir);
  room->set("exits/south",__DIR__"c8");

  if(who->query("bellicosity") > 500+random(100)) {
    message_vision("	���������е�а���ƽ���˲���۳���...\n",who);
    message_vision(HIR"\n\n	һ����������񱩵��������ڶ�������$N����������\n"NOR,who);
    seteuid(getuid());
    i=random(3)+1;
    while(i--) {
      mob=new(__DIR__"npc/cl_dragon");
      mob->move(room);
      mob->callset(who);
      mob->kill_ob(who);
    }
  }

  return 1;

}