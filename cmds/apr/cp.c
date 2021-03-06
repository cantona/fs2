// cp.c
// 增加 万用字元(?*) 的使用
// fixed by wade 1995 10 23
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
  string        src, dst, dest, *dirs;
  // 底下是为了能 cp * 用的
  mixed         *file;
  string        dir, srcdir;
  int           i, j;
 
  seteuid(geteuid(me));

  // 解析参数
  if (!arg || sscanf(arg, "%s %s", src, dst)!=2 ) return
    notify_fail("指令格式: cp <原档名> <目标档名> \n");

  // 判断是否是合法的目标档名
  dst = resolve_path(me->query("cwd"), dst);

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
  if( file_size(dst)==-2 ) {    // 代表 dest 是个目录
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        dirs = explode(src, "/");
        dest = dst+ "/" + dirs[<1];
        cp(src, dest);
        if (file_size(dest) == -1)
          write("你没有读写"+dest+"的权利。\n");
        else {
          write("cp "+src+" to "+dest+" OK!!!\n");

          log_file ("wiz/FILE_OPERATION",
            sprintf("%s(%s)拷贝档案 %s --> %s 于%s\n",
              me->query("name"),me->query("id"),src, dest, ctime(time()))
          );
        }
      }
    }
  }
  else
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        cp(src, dst);
        if (file_size(dst) == -1)
          write("你没有读写"+dst+"的权利。\n");
        else {
          write("cp "+src+" to "+dst+" OK!!!\n");
          log_file ("wiz/COPY_FILE",
            sprintf("%s(%s)拷贝档案 %s --> %s 于%s\n",
              me->query("name"),me->query("id"),src,dst,ctime(time()))
          );
        }
      }
    }

  return 1;
}
 
int help(object me)
{
  write(@HELP
指令格式 : cp <原档名> <目标档名>
 
此指令可让你(妳)拷贝档案。
HELP
    );
    return 1;
}
 
