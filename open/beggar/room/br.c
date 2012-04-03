 inherit ROOM;

void create()
{
 set("short","太湖桥");
 set("long",@LONG
长长的一座古桥，年久失修，但得当年筑桥师傅的心血，
至今毅立不倒，堪称一绝，桥下湖水平静，清澈见底，桥
头旁竖着一块石碑(long stone)，石碑上的字经过多年的
风吹雨打，早已模糊不清。但只可仔细看见是由某位姓徐
的仁兄打造此桥，难道此桥建造于是宋朝．．．．．

LONG);
 set("exits",([
 "north" : __DIR__"b1.c"
 ]));
 
 
setup();
}
