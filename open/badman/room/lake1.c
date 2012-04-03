// Room: /open/badman/room/lake1.c
// written by powell 96.4.26@FS

inherit ROOM;

void create ()
{
  set ("short", "湖中");
  set ("long", @LONG
这里是恶人湖中，湖水冷冽的很；不知道甚么原因，这湖水比
你以往所见过的别清彻，还有一点很奇怪的是在这湖中你能看到唯
一的鱼类，就只有草鱼，听说这草鱼的由来还有个传奇故事；由这
里好像还可以深潜下去，那儿看起来有点昏暗，似乎有甚么危险存
在，如果真的要潜下去，最好先上岸换口气再下来吧！可别淹死在
这湖中喔...

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"lake0",
]));

  setup();
}

void init()
{
	add_action("do_dive","dive");
}

int do_dive()
{
        object who;
        who = this_player();
        tell_object(who,"\n你深吸一口气，向湖底潜了下去。\n\n");
        who->move(__DIR__"lake2");
        return 1;
}
