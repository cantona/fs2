inherit ROOM;

void create()
{
 set("short","太湖桥上");
 set("long",@LONG
长长的一座古桥，年久失修，但得当年筑桥师傅的心血，
至今毅立不倒，堪称一绝，桥下湖水平静，清澈见底，偶
而有几条小小的鲤鱼从水里探出头来，仿佛向你打招呼，
走在这古桥上，你感到流连忘返，差点没在此打盹。


LONG);
 set("exits",([
 "north" : __DIR__"room03.c",
 "south" : __DIR__"bridge.c"
 ]));
 setup();
}
