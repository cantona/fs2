
inherit BULLETIN_BOARD;
#include <ansi.h>

void create()
{
set_name(HIG"网聚奖品板"NOR,({"restore board","board"}));
set("location","/open/wiz/fs_net_room");
set("board_id","fs_net_eq");
set("long","所有网聚奖品的赠与跟想法，可以来这post请wiz 转赠跟修改");
  setup();
set("capacity",300);
  }
