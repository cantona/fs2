inherit ROOM;
void create() {
	set( "short", "$YEL$【小佩的小小书房】$NOR$ " );
	set( "owner", "peiyi" );
	set( "object", ([
		"amount10" : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount6"  : 1,
		"amount3"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file3"    : "/obj/gift/hobowdan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/unknowdan",
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount1"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file1"    : "/obj/gift/xisuidan",
		"file7"    : "/open/magic-manor/water/obj/water-ribbon",
	]) );
	set( "build", 10374 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room74",
	]) );
	set( "long", @LONG
    这间书房是小佩佩的藏书所在, 小佩佩一生的心血都放在这里, 因
此这里可不是一般人可以进来的, 若非小佩佩的允许, 想看一看都不行
。入口处挂着一幅卷轴(paper)。门上挂着一幅对联, 四周都是书架, 书
架上有各式各样的书籍画册, 尤其是关于跳舞方面的书籍更是琳琅满
目, 可见得小佩佩用功的程度。
LONG);
	setup();
	replace_program(ROOM);
}
