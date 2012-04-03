// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
        set("short","单将军庙");
  set ("long", @LONG
这是一座供奉单信的庙宇 . 单信是第一任守卫队队头 , 在
他任职的十年内 , 倭寇六度来犯 , 单信一次次英勇的带领着队
员们击退敌人 , 不幸在最后一次征战中重伤身亡 . 居民们感谢
他的恩德 , 在此立庙 , 并尊称他为单将军 . 这里平日香火都十
分鼎盛 .

LONG);

        set("no_fight",1);
        set("no_magic",1);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
        "east" : "/open/port/room/r2-2",
]));

  setup();
}
