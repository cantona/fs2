#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "岩穴");
        set("long", @LONG
这儿是岩穴的内部，一道光线由上面宣泄而下，照亮了整个洞穴，原来这岩穴
的上面透出一个小孔，使得阳光雨水得以进入，也因为如此，这儿长出了一些
果树之类了植物。
LONG
        );

        set("exits", ([
"south":__DIR__"hole"
        ]) );
setup();

}
