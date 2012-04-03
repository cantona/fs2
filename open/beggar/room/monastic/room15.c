inherit ROOM;

void create()
{
 set("short","走道");
 set("long",@LONG
  两旁挂满太湖风光景色的画图，如幻似真，你静静的观赏
  着每一幅图，慢慢的你也融入画中，就像是你现在正坐在
  太湖旁观赏景色一样，看了许久，你不禁啧啧称赞，丐帮
  中竟然也有这绘画奇才。

LONG);
 set("exits",([
 "east" : __DIR__"room16.c",
 "west" : __DIR__"room14.c",
 "north" : __DIR__"room06.c",
 "south" : __DIR__"room24.c",
 ]));
 setup();
}
