inherit ROOM ;

#include <ansi.h>
										
void create ()
{
  set ("short", "ＥＱ品管工厂");
  set ("long", @LONG
这是管理小组经营的工厂。四面有 Acelan 和 Anmy 等大神的超帅
神像供小组成员天天膜拜。散落的ＥＱ堆了一地，乱七八糟。铁柱子上
钉了几块告示牌。
    告示牌上注明了「 武器制造规则 : help weapon_rule ”
		  「 防具制造规则 : help armor_rule ”

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"entrance",
]));
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/robot9-1" : 1,
]));
  set("no_magic", 1);

  setup();
  call_other("/obj/board/eq_b", "???");
}








