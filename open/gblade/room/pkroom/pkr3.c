// pkr3.c by konn
inherit ROOM;

void create()
{
        set("short","第一武道馆");
        set("long", @LONG
这里满地是血, 看来刚才是有一翻激烈的打斗了, 不知是谁与谁的性命相
拚, 往西首一看, 一只匕首丢在那里, 在你不远的前方也是几只金镖散了
一地, 东首又是一把断剑一把钝刀, 依这情形看来, 应该是一场火拚吧,
你暗忖没看到这场好戏而感到可惜。




LONG);
        set("exits", ([ /* sizeof == 2 */
            "west"  : __DIR__"pkr2",
            "south" : __DIR__"pkr6",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

