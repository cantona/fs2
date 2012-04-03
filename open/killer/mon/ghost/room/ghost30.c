//written by acelan...../u/a/acelan/ghost/room/ghost30.c

inherit ROOM;

void create()
{
        set("short", "墓园小径");
        set("long", @LONG
这是一条在墓园中的小径, 不过这条却出奇的隐密, 正当你以为
小径到此为止时, 你忽然觉得东方隐约有着些什么东西, 这一望才发
现, 小径若有若无的正朝着东方延伸。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost31.c",
       "west"  : __DIR__"ghost29.c",
   ]));
   set("no_clean_up", 0);

   setup();
}
