// Room: /open/tendo/room/t03.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("light_up",1);
	 set("short", MAG"紫  玄  道  观"NOR);
set("long", @LONG

                                 __      __   ___         
           ∠ˉˉˉˉˉ ◢     ∠◢    ﹏◣＼∕◢         
           ██   ◢██◤     █◤  ∠﹏       ◢        
                ◢◤      _____    __█◤   ◢█◤        
     ∠ˉˉˉ    ˉˉˉ◢﹨  ◢  ／  ▄▄▄  ◢           
     ██◤    ████◤／◢◤／  ▄▄▄  ◢◤           
       ／      ＼      ／◢◤∠          ◢◤             
     ∠  ◢ ◣  ◢   ∠   ◣ ██████◤               
     ██◤ ◥█◤   █◣__________________◢             
                                                          
上头有着一块匾额题着紫玄道观四个字，这儿的主人似乎偏好紫色。
前面大厅中坐着一位身着紫色道袍的道长，想必是这里的主人。

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"t02",
"north" : __DIR__"start",
  "out" : "/open/tendo/kunlun/g1",
  "east" : __DIR__"t04",
]));
set("light_up", 1);
	setup();
}
