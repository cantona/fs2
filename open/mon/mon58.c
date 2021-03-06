inherit ROOM;
#include <ansi.h>

void create ()
{
	set ("short", "树洞中");
	set ("long", @LONG
走入洞中，树洞的上方微微的透出几丝的光线，洞中沉浸着一股
迷蒙的气息，历经千年以上的岁月方有此树的出现，而这洞的成形也
少说几百年了，树洞的中心地带还透出一股奇异的光茫，原来是一把
纯金的剑(sword)插在上面。
LONG);
	set("exits", ([ /* sizeof() == 4 */
	"out"       : __DIR__"mon25",

]));
        set("item_desc",(["sword":
	"好奇的你走上前一看，是一把纯金的剑，你的脸上瞬时露出贪心神色
的，你不禁想要将他拔出(pull)，但是怕误触机关的你，还是得小心
翼翼的在剑(sword)的四周搜寻(ssearch)一番。\n",
]));
	set("no_fight", 1);
	setup();
}

void init()
{
    add_action("search_sword", "ssearch");
    add_action("pull_sword","pull");
}

int search_sword(string arg)
{
	object me = this_player();
	object room = environment(me);

	if(!arg||arg!="sword")
	return notify_fail("你找来找去就是找不到你想要的东西!!\n");

	if(room->query_temp("mon/sword"))
	return notify_fail("黄金剑已经消失，只剩一道剑的光影停留在原处。\n");

	if( (this_player()->query("combat_exp",1) < 1000000) )
	return notify_fail("也许是你的历练不足找不出剑的真正的位置。\n");

	if( room->query_temp("mon/search") == 1 )
	return notify_fail("一道蒙泷的光茫，若隐若现，让你看不真眼前的一切。\n");

	message_vision(HIY"一阵低沉的轻鸣，黄金剑竟腾空而起，静静的悬在半空中。\n"NOR,me);
	room->set_temp("mon/search",1);
	return 1;

}
int pull_sword(string arg)
{
	object me = this_player();
	object room = environment(me);

	if(!arg||arg!="sword")
	return notify_fail("你想拔什么东西呀？？\n");

	if( room->query_temp("mon/sword")==1 )
	return notify_fail("黄金剑已经消失，只剩一道剑的光影停留在原处。\n");

	message_vision(HIY"黄金剑发出一道耀眼的光茫后，竟然消失在你手中，而你的身形却慢慢消失。\n"NOR,me);
	tell_object(users(),HIW"一道白色的光芒直透天际，长白山的上空突然妖气弥漫，一个不祥的预兆涌上你心头。\n"NOR);

	room->delete_temp("mon/search");
	room->set_temp("mon/sword",1);

	set("exits",([
	"enter"	:__DIR__"mon59",
	"out"	:__DIR__"mon25",
	]));

	call_out("close",720,me);
	return 1;

}

int close(object me)
{
	message_vision(YEL"光芒散去，眼前的入口又再度闭合消失了。\n"NOR,me);
	delete("exits/enter");
	return 1;
}

