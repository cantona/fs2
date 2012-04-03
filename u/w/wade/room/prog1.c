inherit ROOM;

void create ()
{
  set ("short", "基本的程式写作道理 -- 续");
  set("long", @LONG_DESC

// 在这儿的每个程式, 包括房间, 生物, 人, 装备, 武器....都称为 物件
// 物件基本上有两样东西: 属性, 行为
// 属性通常是用 set("属性", "值"); 的样子来设定
// 行为通常是在定义在它所继承的物件中,
//     如生物就是 inherit NPC;
//       房间就是 inherit ROOM;
//       商店就是 inherit SHOP;
//       装备就是 inherir EQUIP;
//
// 至于 NPC, ROOM, SHOP...等是定义在哪? 一般来说, 你可以在
//    /include/globals.h 找到它们的定义, 如:
//    #define NPC /std/char/npc
//    #define ROOM /std/room
// 上面的定义是说, 如果你用 inherit NPC, 则表示你是继承 /std/char/npc.c
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
  this_player()->move(__DIR__"prog2");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move(__DIR__"prog2");
  return 1;
}
