inherit ROOM;

void create()
{
 set("short","太君山脚");
 set("long",@LONG
长草淹脚，树木苍翠，时有昆虫兽鸣声，向北望只见一片
绿意郁郁的森林，遍布荆棘，向南望去只见一座高山，那
便是雄伟壮阔的太君山，隐隐约约在山头可见一间破旧的
祠堂坐落着，天色逐渐暗淡，向山顶攀登似乎不太可能，
忽见乌云密布,远处传来阵阵狼嚎，你心下不禁慌乱，只
想及早离开此地。

LONG);
 set("exits",([
 "east" : __DIR__"room14.c",
 "southup" : __DIR__"room08.c",
 "west" : __DIR__"room12.c",
 ]));
 setup();
}
