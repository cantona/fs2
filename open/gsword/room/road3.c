#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "瀑布");
        set("long", @LONG
        
        
一下船,眼前景色如画,清溪潺潺,水流平稳之极,两旁满是随风飘逸的垂柳
,其中还夹植着无数桃树,一阵清风拂来挟着清新的花香,令你精神为之一振
,这儿跟外面的世界决然不同,简直就是世外桃源!!



LONG
        );

        set("exits", ([
                "north": __DIR__"road4",
                "down":__DIR__"road1",
        ]) );
        
setup();

}
