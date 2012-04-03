inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", HIW"天山结界"NOR);
        set ("long", @LONG
你从山脚下一路走上来，到了这里似乎已经无路可走，四周云雾
漫漫让你进退两难。正当你在困惑的时后发现地上有一块石碑写着天
山结界四个大字，或许想进入天山不是那么容易的一件事。
LONG);

	set("no_auc", 1);
	set("no_transmit", 1);
	set("light_up",-1);

        set("exits", ([ /* sizeof() == 4 */
	]));

        setup();
}

void init()
{
	object me = this_player();

	if( me->query_temp("tensan/get_enter") == 1 && present("tensan mark",me))	
	    call_out("msg1",3,me);	   	
}

int msg1(object me)
{	
        tell_object(me,HIY"\n\n\n突然间，你身上的天山通行令射出一道耀眼的光芒，直射在石碑上。\n\n"NOR);
	call_out("msg2",3,me);
}

int msg2(object me)
{	
        tell_object(me,HIY"经过一段时间的等待，天山结界竟开始有了变化，顿时天摇地动了起来\n\n"NOR);	
	call_out("msg3",3,me);
}

int msg3(object me)
{	
        tell_object(me,HIW"原本照射在石碑上的光芒瞬间消失并转换成一圈白光照住你的全身\n\n"NOR);
	call_out("msg4",3,me);
}

int msg4(object me)
{	
        tell_object(me,HIY"正当你看的忘神之际，你已被传送到天山结界的另外一边了\n\n\n\n"NOR);	
	tell_object(users(),HIW"\n\n天山方向"HIM"奇"HIG"光"HIW"四起，天象异变，"HIY+me->query("name")+HIW"通过了天山结界。\n\n\n"NOR);
	me->move("/open/trans/room/room4");
}