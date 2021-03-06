#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"狂想空间指令入门房间"NOR);
  set ("long","狂想空间的指令集分成二大系统!!!
  1.一般指令系统(help cmds)       (所有的玩家都可以使用)
  2.帮派指令系统(help clancmds)   (部份有开放给非一般玩家,除此之外限定帮派才能使用)
  你可以打help cmds就会列出所有指令集!!!
  若你对该指令集有不了解的地方,你可以打help 指令
  例如::
         打 help kill

         指令格式 : kill <人物>
指令说明 :
           这个指令让你主动开始攻击一个人物，并且嚐试
         杀死对方，kill 和 fight 最大的不同在于双方将
         会真刀实枪地打斗，也就是说，会真的受伤。由于
          kill 只需单方面一厢情愿就可以成立，因此你对
         任何人使用 kill 指令都会开始战斗，通常如果对
         方是 NPC 的话，他们也会同样对你使用 kill。
           当有人对你使用 kill 指令时会出现红色的字样
         警告你，对于一个玩家而言，如果你没有对一名敌
         人使用过 kill 指令，就不会将对方真的打伤或杀
         死( 使用法术除外 )。
其他参考 :
           fight
特别说明 :
           有关 fight 跟 kill 的区分请看 'help combat'。
           有关 pk的问题请看"help pk"。

  \n");
  set("exits", ([
  "north" : __DIR__"newhand1-2",
  "south" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

