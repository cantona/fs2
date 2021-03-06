// clone.c

inherit F_CLEAN_UP;

int main(object me, string file)
{
        object obj;
        string err, msg;

        seteuid( geteuid(me) );

        if (!file) file = me->query("cwf");
        if (!file)
                return notify_fail("你要复制什么物件？\n");

        file = resolve_path(me->query("cwd"), file);
        if( sscanf(file, "%*s.c") != 1 ) file += ".c";
        me->set("cwf", file);

        if( file_size(file) < 0 )
                return notify_fail("没有这个档案(" + file + ")。\n");

        obj = find_object(file);

        if( !obj ) {
                err = catch(call_other(file, "???"));
                if (err) {
                        write("载入失败：" + err + "\n");
                        return 1;
                }
        }
        else if (obj) destruct(obj);
        if (obj) return notify_fail ("你无法将这个物件摧毁。\n");

        err = catch(obj = new(file));
        if (err) {
                write("复制失败：" + err + "\n");
                return 1;
        }

        if( !stringp(msg = me->query("msg_clone")) )
                msg = "只见$N伸手凌空一指，变出了$n。\n";
        else msg += "\n";       // 用 call 设定字串似乎无法换行....

        if( !obj->is_character() && obj->move(me) ) {
                write(obj->query("name") + "复制成功，放在你的物品栏。\n");
                message_vision(msg, me, obj);
log_file("wiz/CLONE", sprintf("%s(%s) 复制%s(%s)放在身上%s\n"                                 
                ,me->query("name"),me->query("id"),obj->query("name"),file,ctime(time()) ));  
                return 1;
        }
        if( obj->move(environment(me)) ) {
                write(obj->query("name") + "复制成功，放在这个房间。\n");
                message_vision(msg, me, obj);
log_file("wiz/CLONE", sprintf("%s(%s) 复制%s(%s)放在%s的房间 %s\n"
,me->query("name"),me->query("id"),obj->query("name"),file,environment(me)->query("sh
ort"),ctime(time()) ));
                return 1;
        }

        destruct(obj);
        return notify_fail("无法复制不能移动的物件(" + file + ")。\n");
}

int help(object me)
{
  write(@HELP
指令格式 : clone <档名>

利用此指令可复制任何能移动之物件(含怪物)。
请配合 cd, dest 等使用。
HELP
    );
    return 1;
}
