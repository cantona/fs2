
inherit ROOM;

void create()
{
 set("short","太湖桥");
 set("long",@LONG
前方就是太君山了，只见云雾围绕山头四周，
仿佛神龙磐距，真不愧是丐帮的总舵。

LONG);
 set("exits",([
 "north" : __DIR__"b1.c"
 ]));
 setup();
}
