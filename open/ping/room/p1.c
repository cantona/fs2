#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "段王府大厅");
	set( "build", 2 );
  set ("long", @LONG
这儿四周干干净净的, 只见大厅中央摆着一张陈年乌木的圆桌, 北
边一张檀木蟠龙椅上坐着一人, 双眼不怒而威, 自然有一股帝王的威严
, 想必便是平南城中, 段王府里, 独一无二的平南王--「段云”是也。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np13.c",
  "north" : __DIR__"np23.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/scholar/master_duan" : 1,
]));
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/duan_b.c","???");
}


void init()
{
        add_action("do_search", "search");
        if(this_player()->query("family/family_name")=="段家")
        {
         if(!this_player()->query("bss/have_tell"))
         tell_object(this_player(),BLINK+HIY"请到段家交谊厅读读布告吧!!\n"NOR);
         this_player()->set("bss/have_tell",1);
        }
}

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n你掀起暗扣, 一转身, 隐没在暗门之后。\n\n");
        who->move(__DIR__"np20");
        tell_room(this_object(),who->query("name")+"不知启动了什么机关, 突然消失在大厅之中。\n");
        return 1;
}
