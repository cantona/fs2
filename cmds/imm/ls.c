// ls.c by babe
//新增万用字元*的使用,方法跟dos模式下的方法一样 by bss
//再重申,我只会用笨方法

inherit F_CLEAN_UP;
inherit F_MORE;

#include <ansi.h>

void create() { seteuid(getuid()); }
int main(object me, string arg)
{
        int i, j, w, col,len,start,flag,end,root;
        string dir, msg,main_file,sub_file;
        mixed *file;

        dir = resolve_path( me->query("cwd"), arg );
        flag=0;
        root=0;
        if(arg){
          for(i=0;i<sizeof(arg);i++){
            if(arg[i]=='/') root=1;
            if(arg[i]=='*'){
              start=i;
              if(i==sizeof(arg)-1)
                flag=1;
              else
                flag=2;
              break;
            }
          }
        }
        if( file_size(dir)==-2 && dir[strlen(dir)-1] != '/' )
                dir += "/";
        file = get_dir(dir, -1);
        if( !sizeof(file) ) {
                if( file_size(dir) == -2 )
                        return notify_fail("此目录是空的。\n");
                else
                        return notify_fail("没有这个目录。\n");
        }
        if(flag){
          for(i=sizeof(dir)-1;i>0;i--){
            if(dir[i]=='*'){
              end=i;
              continue;
            }
            if(dir[i]=='/'){
              main_file=dir[i+1..end-1];
              if(flag==2)
                sub_file=dir[end+1..sizeof(dir)-1];
              break;
            }
          }
          if(root)
            start=start-1-i;
          dir=dir[0..i];
        }

        i = sizeof(file);
        w = 0;
        while(i--) {
                if(flag){
                  if(flag==1){
                    if(file[i][0][0..start-1]!=main_file){
                      file[i][1]=-3;
                      continue;
                    }
                  }
                  if(flag==2){
                    if(file[i][0][0..start-1]!=main_file ||
                      file[i][0][start+1..sizeof(file[i][0])-1]!=sub_file){
                      file[i][1]=-3;
                      continue;
                    }
                  }
                }
                if(file_size(dir+file[i][0])==-1) file[i][1]=-3;
                len=sizeof(file[i][0]);
                if( file[i][1]==-2 )
                        file[i][0] = HIC+file[i][0]+"/"NOR;
                else if( file[i][0][len-2..len-1] == ".c" )
                        file[i][0] = HIG+file[i][0]+NOR;
                else if( file[i][0][len-2..len-1] == ".h" )
                        file[i][0] = HIY+file[i][0]+NOR;
                else
                        file[i][0] = HIM+file[i][0]+NOR;
                if( strlen(file[i][0])>w )
                        w = strlen(file[i][0]);
        }

        col = 79 / ( w-6 );
        w   = 79 / col + 7;

        if( sizeof(file) ) {
                msg = HIW"目录："HIY + dir + "\n"NOR;
                for(i=0, j = sizeof(file); i<j; i++)
                {
                        len=sizeof(file[i][0]);
                        if(file[i][1]==-3) continue;
                        msg += sprintf( "%3d%s%-*s%s",
                                ( file[i][1]/1024/1024 )? file[i][1]/1024/1024 : file[i][1]/1024 + 1,
                                ( file[i][1]/1024/1024 )? "M" : " ", w,
                                ( find_object(dir+file[i][0][7..len-5] )? file[i][0][0..len-5]+NOR"*" : file[i][0]),
                                ( (i+1)%col )? "" : "\n" );
                }
                msg += "\n";
                this_player()->start_more(msg);
        }
        else write("\t没有任何档案。\n");

        return 1;
}

int help(object me)
{
        write(@HELP
指令格式: ls [<路径名>]

列出目录下所有的子目录及档案, 如果没有指定目录, 则列出所在目录
的内容，所列出的档案中前面标示 * 号的是已经载入的物件。
目前允许使用万用字元*


范例:
'ls /' 会列出所有位于根目录下的档案及子目录.
'ls /open/main/room/s*' 会列出所有该目录中档名前面为s之档

HELP
        );
        return 1;
}
