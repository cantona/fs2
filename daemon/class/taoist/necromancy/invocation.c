#include <ansi.h>
#include <combat.h>
inherit SSERVER;
inherit F_SPELL;
void create() {seteuid(getuid());}
int cast(object me, int number,string name)
{
  
	object mob,room=environment(me),weapon;
	int needlevel, manacost,spell,invcost,i,funlvl;
	string filename;

  if( !me->is_fighting() )
       return notify_fail("战斗中才能召唤鬼神！\n");
  if(!me->query("spells/invocation/level") ) 
       return 0;
  if (!objectp (weapon = me->query_temp ("weapon")) ||
                  weapon->query("skill_type") != "whip")
       return notify_fail("请先装备拂尘!!\n");

  if( me->query("class")!= "taoist" )
       return notify_fail("只有道士才用的出这种法术。\n");
	   if(me->query_temp("have_hawk"))
        return notify_fail("一次只能召换一种喔!\n");
  if( me->query("sen") < 30 )
       return notify_fail("你的精神无法集中！\n");	
	me->start_busy(1);
	filename = __DIR__"npc/" + name;
	if( file_size(filename+".c") < 0 )
		return notify_fail("没有这种东西可供招唤。\n");
	needlevel= filename->needlevel ();
        manacost = (filename->manacost ())*number;
	invcost = (filename->invcost ())*number;
        spell = me->query_skill("spells");
	funlvl = me->query ("spells/invocation/level");
/*     
  if(filename== __DIR__"npc/king" && me->query("quests/supertao")!=1) {     
     return 0;
  }
*/
  if (funlvl < needlevel ) {
     write("你的熟练等级还不够ㄛ....这种鬼神你召唤不动!!\n");
     return 1;
  }
  if( me->query_temp ("invocation")+invcost > spell/2) {
     write("你已经召唤太多了，去练练洛书河图来增加你的召唤数目吧!!\n");
     return 1;
  }
  if (!needlevel) {
     write("没这位鬼神。\n");
     return 1;
  }

  if (me->query ("mana") < manacost) {
     write("你的法力已经耗尽....\n");
     return 1;
  }
  message_vision("\n\n$N喃喃地念了几句咒语。\n", me);
  if( funlvl < 100 )
  spell_improved ("invocation", random(funlvl*10) );
  me->receive_damage("sen",random(25));
  me->add ("mana", -manacost);
  me->start_busy(1); 
  for(i=0;i < number;i++) {
  seteuid(getuid());
  mob = new(filename);
  mob->move (room);
  mob->besummon(me,room);
 }  
  return 1;

}
