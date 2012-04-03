// csub_room.c
//
//                                              Created by Arthur

#define SAVE_ROOM       "别忘了 csaveroom, 储存此次的修改。\n"

inherit F_CLEAN_UP;

int main(object me, string str)
{
        if( me->query("clan/rank") > 3)
                return notify_fail("你无权使用此指令。\n");
        if( !CLAN_D->is_clan_room(me) )
                return notify_fail("这个房间并不是你们帮派所属的。\n");
        if( !environment(me)->query("item_desc/"+str))
        return notify_fail("没有这个景观。\n");
         write("你删除了这房间所["+str+"]的景观!!\n");
       environment(me)->delete("item_desc/"+str);
        write(SAVE_ROOM);
        return 1;
}
int help( object me )
{
        write("
    csub_item     ：取消景观设定。
    csub_item <景观>

                                                         by ACKY 2000/02/23
");
        return 1;
}

