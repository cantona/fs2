inherit ROOM;
void create() {
	set( "short", "$HIC$OS/2$NOR$的$HIY$家$NOR$" );
	set( "owner", "ostwo" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room89",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

这里是$HIC$OS/2$NOR$的$HIY$小房间$NOR$，你可以看到这里的陈设非常简单，只有一张小桌子和小床。
在小床上丢着几件衣服，桌上也乱七八糟的，看得出来这里的主人一定蛮混的...
仔细一看，桌上摆着一台$HIW$闪闪$NOR$发光的$HIR$电脑$NOR$，正在嘎嘎做响的工作中。
你不禁好奇的迎上前去看看这台$HIR$电脑$NOR$上在做些什么?
突然你的眼睛一亮，发现到这台$HIR$电脑$NOR$所使用的作业系统竟然不是恶名召张的晕到死...
而是量小质精又好用的$HIM$IBM $HIC$OS/2$NOR$ !!!
当场你不禁觉得这个房间的主人是个高尚又有品味的人了...


LONG);
	setup();
	replace_program(ROOM);
}
