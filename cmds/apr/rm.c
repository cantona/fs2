inherit F_CLEAN_UP; 
int main(object me, string arg)
{
  string        src, dst, dest, *dirs;
  mixed         *file;
  string        dir, srcdir;
  int           i, j; 
  seteuid(geteuid(me));
  // 解析参数
  if (!arg || sscanf(arg, "%s", src)!=1 )
  return notify_fail("指令格式: rm <原档名> \n");
  // 取得 source 档名
  dir = resolve_path(me->query("cwd"), src);
  dirs = explode(dir, "/");
  srcdir = dir;
  i = sizeof(dir) - sizeof(dirs[<1]);
  srcdir = dir[0..i-1];
  if( file_size(dir)==-2 && dir[<1] != '/' ) dir += "/";
  file = get_dir(dir, -1);
  if( !sizeof(file) ) {
    if (file_size(dir) == -2)
      return notify_fail("目录是空的。\n");
    else
      return notify_fail("没有这个档案: "+src+"。\n");
  }
  i = sizeof(file);
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        if(rm(src)){
          write("rm "+src+" OK!!!\n");
          log_file("wiz/RM",sprintf("%s rm %s at %s\n",me->query("id"),src,ctime(time())));
        }
        else{
              return notify_fail("你没有删除"+src+"的权力\n");
        }
      }
    }

  return 1;
}
 
int help(object me)
{
  write(@HELP
指令格式 :  rm <档名>
               <档名如为 * 能一次 rm 掉 so 小心使用>
此指令可让你(妳)删除档案。
HELP
    );
    return 1;
}
 
