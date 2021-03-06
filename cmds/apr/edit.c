// edit.c

inherit F_CLEAN_UP;

int main(object me, string file)
{
	if( !file ) return notify_fail("指令格式：edit <档名>\n");

	if( in_edit(me) ) return notify_fail("你已经在使用编辑器了。\n");

	seteuid(geteuid(me));
	file = resolve_path(me->query("cwd"), file);
	ed(file);
	log_file ("file_operation", sprintf("%s编辑档案 %s 于%s\n",
	  me->short(), file, CHINESE_D->chinese_time(time()))
	);
	me->set("cwf", file);
	return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : edit <档名>, edit here

利用此一指令可直接在线上编辑档案。
HELP
    );
    return 1;
}
