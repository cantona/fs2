// cset_item.c
//
//                                              Created by Chan

#define SAVE_ROOM       "别忘了 csaveroom, 储存此次的修改。\n"
void done_setitem(string str, string text);

int main(object me, string arg)
{
        if( !CLAN_D->is_clan_room(me) )
                return notify_fail("这个房间并不是你们帮派所属的。\n");
        if( me->query("clan/rank") > 3)
                return notify_fail("你无权使用此指令。\n");
        if( !arg )
                return notify_fail("指令格式：cset_item <景观的英文>\n");
        me->edit( (: done_setitem,arg :) );
        return 1;
}

void done_setitem(string str,string text)
{
        mapping objs;
objs=environment(this_player())->query("item_desc");
if(!objs)  objs = ([ str : text ]);
else  objs += ([ str : text ]);
        environment(this_player())->set("item_desc", objs);
        write(SAVE_ROOM);
        return;
}

int help( object me )
{
        write(@HELP

格式说明:csetitem <景观英文>

此指令用来设定房间内景观的叙述!!
例如:
     csetitem board
     此时就会要你输入baord 的长叙述!!!!
     完成之后,帮众可以打look board 便可以看到board中的长叙述!!!!

HELP    );
        return 1;
}



