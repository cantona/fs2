// 加入银针解谜物件-by nike-
inherit ROOM;
#include <ansi.h>
  int i=0;
void create ()
{
  set ("short", "宴客厅");
  set ("long", @LONG

厅中有几个仆役正忙着准备宴席，看样子今天金刀门又有重要的客人要来
了，你走近桌子一看，乖乖！桌子是花梨大理石所做，上头摆着四楞象牙
镶金筷、乌银斟壶、十锦珐琅杯(cup)，极尽奢豪。你想要是能拿(take)
走两三样拿去卖，不就发了吗？

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"gblade.c",
]));
  set("objects", ([ /* sizeof() == 1 */
	"/open/gblade/npc/wang-fu" : 1,
]));
  set("light_up", 1);

  setup();
}
void init()
 {
     add_action("do_take","take");
 }
int do_take(string str)
{
    object me, who;
    me=this_player();
    who=present("wang fu", environment(me));

    if(!me->query("doctor/find_cup")==1)
	return notify_fail("你想拿什么东西？\n");
    if(!str || str!="cup")
	return notify_fail("你想拿什么东西？\n");
    if(i>=1)
	return notify_fail("可惜桌子上空空如也 \n");
    if(!who)
{
	message_vision(sprintf("$N偷偷走了过去 , 摸走了一只"+HIC+"十锦珐琅杯\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	i=i+1;
    if(who && random(100) < 50)
{
	message_vision(sprintf("$N偷偷走了过去 , 摸走了一只"+HIC+"十锦珐琅杯\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	i=i+1;
   return 1;
}
	message_vision("$N正要到手时 ,王福突然转过脸来 \n",me);
	message_vision("王福对$N大喝 : 我宰了你 !!\n",me);
	who->kill_ob(me);
	return 1;
}
	message_vision(sprintf("$N趁着没人注意 , 干走了一只"+HIC"十锦珐琅杯\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	me->delete("doctor/find_cup");
	me->set("doctor/get_cup",1);
	i=i+1;
	return 1;
}

