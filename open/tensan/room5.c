inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","登山步道");
        set ("long",@LONG
此处两旁长满了茫草，路边一块石头上面刻着天山两字，你恍然大悟
，原来这里就是江湖传闻中的圣地天山，你不知不觉的加快脚步想早日寻
得奇人异事来增加你的人生经验。
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "westup" : __DIR__"room6",
        "eastdown" :  __DIR__"room4",       
        ]));

       
        setup();
}
