// pkr2.c by konn
inherit ROOM;

void create()
{
        set("short","第一武道馆");
        set("long", @LONG
墙上刻有几个小字, 你上前仔细一看, 那似乎是克敌是胜的妙法, 只见上面
写着「以静制动, 以慢制快”, 这看来好像是太极拳的精义呀, 你仔细的沉
思了一下, 这句话倒也满有道理的。这里除了这面墙上的小字外, 场地的正
前方也挂了一幅张三丰的画像, 看来张老师父曾以这里作为修行的地方啊。



LONG);
        set("exits", ([ /* sizeof == 3 */
            "east"  : __DIR__"pkr3",
            "west"  : __DIR__"pkr1",
            "south" : __DIR__"pkr5",
      ]));
set("no_scale",1);
        set("no_transmit", 1);
        set("light_up", 1);
        setup();
}

