inherit ROOM;

void create ()
{
  set ("short", "基本的生物写作");
  set("long", @LONG_DESC
// 最主要的是, 一定要有底下这一行
inherit NPC;

void create()
{
	// 底下这个设定了该生物的名字与 id
	set_name("山猫", ({ "cat" }) );
	// 当玩家 look 该生物时, 就看到底下的叙述
	set("long", "一只凶狠饥饿的山猫.\n");
	// 年龄就人类来说, 似乎是从 14 岁起算, 野兽则从 0 岁起算
	set("age", 4);
	set("race", "野兽");
	setup();
}
//
// 请继续往东走...
LONG_DESC);

  setup();
}

void init()
{
  add_action("e", "e");
  add_action("e", "east");
  add_action("go", "go");
}

int e()
{
  this_player()->move(__DIR__"npc1");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move(__DIR__"npc1");
  return 1;
}
