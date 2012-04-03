// Room: /open/wiz/fund_office.c

inherit ROOM;

void create ()
{
  set ("short", "办公室");
  set ("long", @LONG
	这里是玉帝fund的办公室，专门受理巫师们
	post有关skills and quest ，你可以看到她
	正专心的审核。
	技能请看 help skill_rules
	任务请看 help quest_rules
	职业请看 help class_attr
	强度请看 help mob_set


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wiz/entrance",
]));

  set("no_fight", 1);
  set("no_magic", 1);

  setup();
  call_other("/obj/board/skill_b", "???");
}
