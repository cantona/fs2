inherit ROOM;

void create()
{
 set("short","藏经阁");
 set("long",@LONG
此地是丐帮保存重要书籍的地方，书架上满满的都是书，
不知道有没有「降龙十八掌”跟「打狗棒法”的秘笈呢？

LONG);
 set("exits",([
 "west" : __DIR__"room24.c"
 ]));

setup();
}
