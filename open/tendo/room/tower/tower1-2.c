
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "������һ¥--");
  set ("long", @LONG
��������㷢��ɱ��Խ��ԽŨ�����ڽ��ŵĹ�ϵ�����ܵľ�����Ҳ���Ŀ��ˣ�
ֻ����ӳ����������һƬƬ�İ���ɫ���㲻���е���Щͷ�Ρ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower1-1",
  "east" : __DIR__"tower1-3",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tendo/room/tower/npc/monster" : 1,
]));

        set("no_transmit",1);
  setup();
}
  int valid_leave(object me, string dir) {
  if(dir=="east"&&present("monster",environment(me))) {
  return notify_fail("�������ź��: ���ȥ����ɱ������˵�ɣ�\n");
  } 
 return 1;
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"����Ӱ���������������һ�󷭹�����Ȼһ��Ѫ��������������˳�����\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}

