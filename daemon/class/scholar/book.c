inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIW "孔明兵法" NOR,({"war book","book"}));
        set("long","这是儒门的宝典「孔明兵法”，你可以用(read book 页数)来观看。\n");
        set("unit","本");
set("no_get", 1);
set("no_auc",1);
set("no_put",1);
set("no_give", 1);
        set("value",1);
        setup();
}
void init() 
{
        add_action("do_read","read");
}
int do_read( string arg )
{
        int page;
        if( !arg || sscanf( arg , "book %d" , page ) != 1 ) return 0;
        if( page < 1 || page > 37 ) return notify_fail("没有这一页。\n");
        if( file_size(sprintf(__DIR__"plan/plan-%d",page)) < 0 )
                return notify_fail("你打不开这一页。\n");
//      if( page != 1 )
//      if( this_player()->query_skill("plan") / 15 < 37 - page )
//              return notify_fail("你打不开这一页。\n");
        cat( sprintf(__DIR__"plan/plan-%d",page) );
        return 1;
}
