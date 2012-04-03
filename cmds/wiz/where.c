// where.c
// 06-14-95

inherit F_CLEAN_UP;

int main(object me, string str)
{
        object ob, where, *ob_list;
        int i;

        seteuid(getuid());
        if (!str)
                return notify_fail("指令格式：where <人物或档名>\n"); 
        ob = find_player(str);
        if( !ob ) ob = find_living(str);
        if( !ob ) {
                str = resolve_path(me->query("cwd"), str);
                ob_list = children(str);
                for(i=0; i<sizeof(ob_list); i++) {
                        if( !ob = environment(ob_list[i]) ) continue;
                        printf("%O\n", ob );
                }
        }
        if (!ob) return notify_fail("现在没这个人.\n");
        where = environment(ob);
        if (!where) return notify_fail("这个人不知道在那里耶...\n");
        printf("--------------- %s现在在 ---------------\n",
                (string)ob->name());
        "/cmds/std/look"->look_room(me, where, 1);
        return 1;
}

int help(object me)
{
        write(@HELP
指令格式: where <玩家的 ID>

这个指令是用来得知玩家目前所在的位置.

HELP
        );
        return 1;
}


