// reboot.c

#include <login.h>
#include <obj.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        string wiz_status;
        object npc;
        int     t;

        if( me != this_player(1) ) return 0;
        
        wiz_status = SECURITY_D->get_status(me);
if( wiz_status!="(manager)" && wiz_status != "(admin)" && wiz_status != "(arch)" && wiz_status !="(guest)")
                return notify_fail("只有 (arch) 以上的巫师才能重新启动" + MUD_NAME + "\n");

        seteuid(getuid());

        npc = new(NPC_DEMOGORGON);
        npc->move(REBOOT_PLACE);
        if (!arg)
          npc->start_shutdown(15);
        else {
          sscanf (arg, "%d", t);
          npc->start_shutdown(t);
        }
/*
      if (npc = new(NPC_KAWALI)) {
            npc->move("/u/w/wade/workroom");
            npc->do_reboot();

        write("Ok。\n");
      }
      else write ("找不到 " + NPC_KAWALI + "\n");
*/

        return 1;
}

int help(object me)
{
  write(@HELP
指令格式 : reboot [分钟数]
指令说明 :
    本命令会让系统马上停止一切动作, 当然, 正常情况下是
    跟当机不一样, 而是先将玩家的资料存档, 然后再关机.
    可以在命令后面加个分钟数, 如果小于 15 分钟, 那么
    会每分钟显示讯息通知所有人准备好关机动作, 如卖东西
    或存档等等.
其他参考 :
    shutdown
HELP
  );
  return 1;
}
