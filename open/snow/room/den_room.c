#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
           set("short","精武阁");
          set("long",@LONG
这里是雪苍派众弟子平时练功时的练功房，平时师兄弟们过招习武
都在这里，这里是雪苍派弟子每天都要来的地方，每天一早，授技长老
的会来此清点弟子及指导武功。
LONG);
        set("exits", ([
          "east": __DIR__"room6",
        ]) );
         set("objects",([
/*
	SNOW_NPC"li_lin":1,
*/
	SNOW_NPC"snow_trainee":3,
         ]));
	set("light_up",1);
      setup();
}
