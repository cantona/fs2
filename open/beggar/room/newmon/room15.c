inherit ROOM;

void create()
{
 set("short","东厢房");
 set("long",@LONG
这里是丐帮专为武林中人到此游玩所特设的厢房，房间
虽然不大，不过却整齐有致，干干净净，眺望窗外，还
可以看到太湖美丽的景色，尤其是太阳西下时的夕阳，
映在湖面上更让人有股心旷神怡，仿佛置身仙境的感觉。

LONG);
 set("exits",([
 "east" : __DIR__"room21.c",
 "west" : __DIR__"room19.c",
 "north" : __DIR__"room11.c",
 "south" : __DIR__"room28.c"
 ]));
 setup();
}
