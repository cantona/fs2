#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "简陋的竹屋");
        set("long", @LONG
这屋子内乱的不得了，到处是吃剩的食物残扎，几个人围在中间那张大桌子
旁，专心的看着桌上那个大碗，一个人蹲在桌子上头，大声的吆喝着∶西八剌！！
LONG
        );

        set("exits", ([
"out":__DIR__"fair"
        ]) );
        
set("objects",([
"/u/b/bigcat/mob/tmob":1
               ]));
setup();


}
