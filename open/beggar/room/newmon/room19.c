inherit ROOM;

void create()
{
 set("short","厨房");
 set("long",@LONG
一走进这里，你就闻到阵阵的霉味，还有几只老鼠在你脚
下跑来跑去。煮菜的铁锅铲子掉在地上，看起来似乎有好
几年没有人用过这些器具了。这也难怪，因为乞丐总是向
人乞讨食物来填饱肚子，谁会无聊到卷起袖子在这里煮菜
呢？

LONG);
 set("exits",([
 "east" : __DIR__"room20.c"
 ]));
 setup();
}
