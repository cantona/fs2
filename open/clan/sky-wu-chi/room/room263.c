inherit ROOM;
void create() {
	set( "short", "$HIW$∮$HIR$刀冢$HIY$˙$HIG$卦棺$HIW$∮$NOR$" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "item_desc", ([
		"blade" : @ITEM
 $HIR$只见刀身泛出阵阵血光，腥气扑鼻......$NOR$

 $HIY$苹芃转头大喊: 「你这个莫名其妙的家伙,来喂我的刀吧。
 $HIR$看来苹芃想杀死你！$NOR$


 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 
 $HIG$只见$NOR$苹芃$HIG$把$BLU$魔刀$HIG$与$HIY$金刀$HIG$的刀法融汇贯通，使出$NOR$$HIW$‘$BLU$魔性$HIY$狂刀$HIR$斩$HIW$’$HIG$向妳狂劈而至。$NOR$
 ( 你$RED$已经陷入半昏迷状态，随时都可能摔倒晕去。$NOR$ 



$HIR$你的眼前一黑，接着什么也不知道了.... $NOR$
你死了


$RED$阴曹入口$NOR$  -
你已经来到了阴间的入口。虽然距离地府还有一段距离，但是你已经
感受到阵阵刺骨的阴风。四周一片荒凉，但是却鬼影幢幢，看来这边的夜
总会蛮热闹的，应该不愁没伴。南边和上面好像是和人世间相通的管道，
不过好像有一股无形的力量隔开这两个不同的世界，看来要从这两个方向
回去不是那么简单的事情。

这里明显的出口是 chome
ITEM,
	]) );
	set( "owner", "bacchus" );
	set( "light_up", 1 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room262",
	]) );
	set( "object", ([
		"file10"   : "/open/firedancer/npc/eq/r_pants",
		"file3"    : "/open/ping/obj/poison_pill",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 33,
		"amount8"  : 1,
		"amount9"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_boots",
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/firedancer/npc/eq/r_finger",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10054 );
	set( "long", @LONG
只见此地$HIG$阴气$NOR$萦绕，无数$HIW$妖影$NOR$浮现...地面被刮出近千条$BLU$刀痕$NOR$
地上放着一个诡异的$YEL$棺木$NOR$..$HIB$妖气$NOR$横生...几近将这个$BMAG$$BLU$空间$NOR$扭取
而苹芃的爱刀$HIR$罪$HIY$˙$HIR$狩$HIW$(Blade)$NOR$正平放在$YEL$棺$NOR$中...邪意的$HIG$绿光$NOR$四射，
好像正为你的闯进来而不悦...$HIR$刀身$NOR$$HIW$震颤$NOR$，暴射出刺眼$HIR$红光$NOR$...
只见一个$HIG$青面$HIW$獠牙$NOR$的$HIW$妖邪$NOR$朝你冲来...手中$HIG$刀$NOR$朝你直劈而下....
来势虽慢，但你觉得好像怎么也避不了．．．．．．．．．．．
LONG);
	setup();
	replace_program(ROOM);
}
