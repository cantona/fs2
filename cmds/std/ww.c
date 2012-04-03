#include <ansi.h>
#include <carry.h>

varargs int main( object ob, string arg, int mode )
{
  object  *inv;
  int i, count;

  inv = all_inventory(ob);

  count = 0;
  for (i=0;i<sizeof(inv);i++) {
      if (inv[i]->query("equipped") && inv[i]->query_temp("secured")) {
        count++;
        // if (count >= 3) break;
      }
      if (inv[i]->query_autoload()) {
        write (inv[i]->short() + " 已被设定成自动载入\n");
      }
  }
  return 1;
}

int help (object me)
{
  write(@HELP
指令格式 : ww
指令说明 : 
HELP
);
        return 1;
}
