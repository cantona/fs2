//open/prayer/room/garden19.c
#include <room.h>
#include "/open/open.h"
inherit ROOM;

int have = 1;
 
void create()
{
        set("short","花园");
        set("long",@LONG

            这里有座高约四尺的麒麟石像，刚才在浓
        雾中所见的雕像一定是它了!!这作雕像远远望
        去给人一股非常柔和的感觉!!威严中带点不可
        被侵犯的尊贵!!

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/garden15",             
        "east":"/open/prayer/room/garden18",              
        "west":"/open/prayer/room/garden20",              
        ]) );
         set("item_desc", ([
         "statue": "麒麟石像，你可以尝试着推推看。\n"
        ]));
   setup();
}

void init()
{
            add_action("search_here", "search");
        add_action("do_push","push");
}

int search_here(string str)
{
    if( (this_player()->query("quests/white-crystal",1) )  )
      write("你尝试着推一推石像,觉得这石像似乎有点问题.\n"+
            "你可以试着推动它(push statue).\n");
    else
      write("也许是你经验不足,你什么也没发现...\n");
    return 1;
}
int do_push(string str)
{
        object ob;
        ob = this_player();

        if(!str || str != "statue")
                return notify_fail("你在推什么啦?\n");
        else {
        set("exits/down","/open/prayer/room/hole/2");
message_vision("$N缓缓的把石像推开，这才发现原来有底下有一道阶梯。可是它通往何处呢??\n", ob);
        call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"被人推开的石像又缓缓的自动回到了原位。\n");
}
