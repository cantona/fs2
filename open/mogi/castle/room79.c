
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","魔之右翼");
        set ("long","魔气荡绕晦明变化, 非比山间之朝暮霏霏, 髅\头烛眼, 魅影参间, 滴声间
断, 不知是水是血. 突来阴风阵阵如鱼龙吐息, 却是混沌灼热, 强烈的温
差使你的身体如剐如裂, 若非内力深厚可能早已被尽碎五腑而亡. 魔界黑
石腥光粼粼, 炎炎邪气急窜奔走, 魔归而岩穴暝. 
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "west" :  __DIR__"room80",
            "south"  : __DIR__"room78",
      ]));
  set("objects", ([ /* sizeof() == 1 */
      __DIR__"npc/turtle-guard" : 1,
                  ]));

        setup();
}
